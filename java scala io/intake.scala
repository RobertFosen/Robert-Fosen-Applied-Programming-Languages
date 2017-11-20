import scala.io.Source
import scala.collection.immutable.HashSet



object ForDemo {
    def main(args: Array[String] ) {
        val filename = "input.txt"
		val words = """([A-Za-z])+""".r
		val all = io.Source.fromFile(filename).getLines.flatMap(words.findAllIn).toList
		
		val set = HashSet() ++ all
		for(s <- set) {
			print(s)
			print(" ")
			println(all.count(_ ==s))
			
		}

    }
}