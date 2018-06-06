#include <iostream>

using namespace std;

main() {
    /*
        Expressions (things that evaluate to a boolean)
            ex. 7 > 5 (1 / true), 5 == 10 (0 / false), etc.
        --------------------------------------------------------------
        AND conjunction - && - true ONLY if both expressions are true
            7 > 5 && 5 == 10 - result: 0 / false

        expr1 expr2 result
          0     0     0
          0     1     0
          1     0     0
          1     1     1
        --------------------------------------------------------------
        OR disjunction - || - true if ONE of the expressions are true

        expr1 expr2 result
          0     0     0
          0     1     1
          1     0     1
          1     1     1
        ---------------------------------------------------------------
        Negation operator - ! - makes boolean opposite
        !(0) = 1
        !(1) = 0
    */

    cout << !(7 > 5 && 5 == 10) << endl;
}
