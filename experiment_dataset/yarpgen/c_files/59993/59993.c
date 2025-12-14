/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [13] [i_0] = ((-(arr_0 [i_0])));
        var_13 = (arr_1 [6]);
        var_14 -= (arr_0 [i_0]);
    }
    var_15 = (~582300120);
    var_16 ^= 446926684;

    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_17 += var_2;
        var_18 = (arr_3 [i_1] [i_1]);

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_19 ^= (((((min(1, var_2)))) ? (arr_7 [i_1] [i_2 + 2]) : ((3848040611 & (arr_5 [1])))));
            var_20 = (max(var_20, (arr_7 [i_1] [i_1])));
            arr_9 [i_1] [i_1] [i_1] = ((2786526217 <= ((((min(446926674, 8229996769711008954))) ? 3848040628 : var_8))));
        }
        var_21 = ((~(max((arr_3 [i_1] [i_1 + 1]), (arr_6 [i_1 - 1])))));
        var_22 = (min(var_22, ((((arr_7 [i_1] [1]) ? (max(var_7, (arr_4 [20]))) : var_5)))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_23 -= ((~((min(var_0, -111)))));
        arr_12 [7] = (arr_6 [i_3]);
        arr_13 [0] = (min(((((arr_0 [i_3]) ? 19 : 446926692))), (max(-var_0, 8229996769711008966))));
        var_24 += ((-(((!(((var_5 >> (((arr_8 [i_3] [i_3]) - 905783023))))))))));
        var_25 = ((((((min((arr_6 [i_3]), 2154202333893428678)) + (~18446744073709551615)))) ? ((((!(((-(arr_6 [i_3])))))))) : 10216747303998542634));
    }
    var_26 = (max((((var_8 / var_8) ? ((min(var_12, 1))) : var_7)), var_12));
    #pragma endscop
}
