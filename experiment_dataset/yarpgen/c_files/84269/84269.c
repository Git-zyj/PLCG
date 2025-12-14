/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [1] = (arr_1 [i_0 - 1]);
        var_20 = var_11;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_21 |= 11600683398067938567;
            var_22 = -1;
        }
        arr_8 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        arr_9 [i_1] = 1602466316851181141;
        arr_10 [i_1] = ((var_4 ? (arr_3 [i_1] [i_1]) : (max((arr_7 [i_1]), 0))));
        var_23 = -19436;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_24 -= (min(0, (((max(19436, 8692134468983184142))))));
        var_25 = ((-1 ? (((max(var_14, var_2)))) : var_14));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_26 += var_9;
            arr_17 [i_3] = 65535;
            var_27 = ((var_13 ? (arr_11 [i_4] [i_4 + 1]) : (arr_14 [i_4 + 1] [i_3] [i_4 + 1])));
        }
    }
    var_28 += var_7;
    #pragma endscop
}
