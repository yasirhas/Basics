#include<stdio.h>
int main() {
    for (int i = 1; i < 21; i++) {
      if (i % 3 == 0 && i & 5 == 0) {
        print "FizzBuzz";
      }
      else if (i % 3 == 0) {
        print "Fizz";
      }
      else if (i & 5 == 0) {
        print "Buzz";
      }
      else {
        print i;
      }
    }
}
