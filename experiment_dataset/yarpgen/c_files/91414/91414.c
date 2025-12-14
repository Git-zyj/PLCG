/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = ((((1730648651 | ((-2147483641 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))) ? (arr_1 [i_0] [i_0]) : -71);
        var_19 &= (-2147483647 - 1);
        arr_3 [10] [6] = (+(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_20 -= (min(var_2, (((((2147483647 + (arr_2 [11])))) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 = (~var_14);
        arr_6 [i_1] [i_1] = ((arr_4 [2] [i_1]) ? (1288700829 - 2147483647) : var_9);
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_22 *= (((min((arr_5 [i_2 + 3]), (arr_5 [i_2 - 1]))) == (arr_8 [i_2 + 1])));
        arr_9 [i_2] = (arr_1 [13] [i_2]);
    }
    var_23 = (max(var_23, (var_5 ^ var_17)));
    var_24 = ((((((2147483641 ? var_2 : (-127 - 1))))) ? (var_6 >= var_0) : (((var_14 % var_0) ? ((var_7 ? var_6 : var_8)) : var_7))));
    #pragma endscop
}
