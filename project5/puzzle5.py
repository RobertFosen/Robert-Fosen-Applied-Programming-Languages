#!/usr/local/bin/python
 
# declares all of the arrays that will hold the information for the project 
wordList = [] 
notFoundList = [] 
rowList = [] 
columnList = []
foundWordList = []
 
 
# this is a function that takes in the row or column, a boolean of whether it is 
# in the row or not, and the index
def findWord(rowOrCol, inRow, number) :
    rowColString = ""
    rowColString = "".join(rowOrCol)
     
    # this is a for loop that iterates through each word in the word list and checks it
    # against the row or column you passed into the function
    for word in wordList :
        if (word in rowColString) :
            # adds the word to the foundList if it is found plus the location if it is found 
            # if it is in a row
            if (inRow == True) :
                foundWordList.append(word + " row " + str(number))
            # adds the word to the foundList if it is found plus the location if it is found 
            # if it is in a column
            else : 
                foundWordList.append(word + " column " + str(number))
                
            # removes word from the notFoundList
            notFoundList.remove(word)   
     
 
 
 

# reads in the puzzleFile and wordFile 
puzzleFile = open('puzzle.txt','r')
wordFile = open('wordList.txt','r')
 
# iterates through each line in the wordFile and splits it into a string,
# adds it to the wordList and adds it to the notFoundList (it will get 
# removed from that list later if it is found.
for line in wordFile :
    wordString = line.split()  
    wordList.append(wordString[0])
    notFoundList.append(wordString[0])         
 
# iterates through each row in the puzzleFile and splits the line up
# and adds it to the rowList
for line in puzzleFile :
    rowList.append(line.split())
 
# sets the columnSize equal to the length of the rowList array
columnSize = len(rowList[0])

# iterates through each column in the puzzleFile and splits the line up
# and adds it to the columnList
for i in range(columnSize) :
    columnList.append( [ row[i] for row in rowList] )
 
# iterates through each row and runs the findWord function on that row
for index,row in enumerate(rowList) : 
    findWord(row,True,index)
 
# iterates through each column and runs the findWord function on that column
for count, column in enumerate(columnList) :
    findWord(column,False,count)
 
 
# prints out each word that was found along with the location it was found
print("Words found : ")
for foundWord in foundWordList :
    print(foundWord)
# prints out each word that was not found (because it did not get removed from the 
# list, it was not found 
print("Not found list : ") 
for notFoundWord in notFoundList :
    print(notFoundWord)