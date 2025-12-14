/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (53099 && 4102559453);

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((0 ? (min(7241937547058451415, 9624641435944354341)) : 31863));
        var_21 = (((((7241937547058451418 ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 + 1])))) ? (((10455059870925748375 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))) : ((7241937547058451415 ? var_19 : var_16))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 = (max((max(((-2427973502349593220 ? var_16 : -2427973502349593220)), (((var_4 ? var_3 : var_2))))), (((var_16 ? (((9223372036854775797 ? (arr_2 [i_1]) : (arr_1 [i_1])))) : 2427973502349593220)))));
        var_23 = (min(var_23, ((((-1253772930159629592 / var_7) && ((((arr_2 [i_1 - 1]) ? 4138235922802945477 : var_6))))))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_24 = ((var_12 ? var_11 : ((var_9 ? (arr_0 [i_2 + 2]) : 10363745455947853515))));
            var_25 = (max(var_25, ((36028797018947584 ? var_5 : 10514928031980690941))));
            var_26 = (min(var_26, (((var_6 ? var_7 : var_7)))));
            var_27 = (((((arr_4 [i_1] [i_1]) ? (arr_0 [i_2]) : var_15))) ? var_17 : 2427973502349593220);
            arr_9 [i_1] = ((arr_7 [i_1 - 1] [i_1 + 2]) ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 + 2] [i_1 + 1]));
        }
    }
    #pragma endscop
}
