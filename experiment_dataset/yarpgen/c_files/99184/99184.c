/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_2;
    var_15 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [0] [i_0] |= ((9223372036854775797 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((9223372036854775796 ? -23 : 105));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_16 = (max(var_16, ((min(((-84 ? 9223372036854775789 : var_13)), (arr_1 [15] [i_1]))))));
        arr_6 [i_1 - 3] [i_1] = (max(var_8, var_3));
        var_17 ^= ((((max((arr_5 [i_1 - 1] [i_1 + 3]), (arr_5 [i_1 - 2] [i_1 + 3])))) ? (1 + var_6) : ((max((arr_0 [i_1 - 1] [i_1 + 3]), (arr_0 [i_1] [i_1 - 1]))))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (arr_8 [i_2 + 3]);
        var_18 = (min(var_18, ((min(((min(124, -105))), (((arr_9 [i_2 - 2] [i_2]) ? (arr_9 [i_2 + 3] [i_2 - 1]) : (arr_9 [i_2 - 3] [i_2 + 1]))))))));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_19 = (((~1) ? ((((max(1, var_3))) ? (~var_11) : (arr_13 [i_3 - 3]))) : (arr_0 [i_3] [i_3 + 1])));
        arr_14 [i_3 - 3] [i_3] |= (1 / ((1 ? 118 : 9223372036854775807)));
        arr_15 [6] [i_3] = (-1617785559 != 391259625);
        var_20 = ((var_8 | ((min(126, var_5)))));
    }
    #pragma endscop
}
