fun main(arr : Array<String>) {
    val fibonacciSequence = generateSequence(1 to 1)  //Generating Sequence starting from 1 {
        it.second to it.first + it.second //Calculating Fn  = Fn-1 + Fn-2 and mapping to return Pair<Int,Int>
    }.map{ it.second } //Getting first element of next sequence
    println("First X Fibonacci numbers are : 0,1, ${fibonacciSequence.take(20).joinToString()}")
}
