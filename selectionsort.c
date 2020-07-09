// First, we’ll look at each number, and remember the smallest one we’ve seen. Then, we can swap it with the first number in our list, since we know it’s the smallest:
// Now we know at least the first element of our list is in the right place, so we can look for the smallest element among the rest, and swap it with the next unsorted element (now the second element):
// We can repeat this over and over, until we have a sorted list.
//This algorithm is called selection sort, and we might write pseudocode like this:
// For i from 0 to n–1
//     Find smallest item between i'th item and last item
//     Swap smallest item with i'th item