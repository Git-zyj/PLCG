/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((var_11 ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
        arr_6 [i_0] = -95;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = (arr_7 [i_1] [i_1]);
        var_13 = (max(var_13, (arr_8 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_4] [i_3] [i_2] [i_2] = var_10;
                        arr_17 [i_2] [i_4] [i_3] [i_2] [i_2] [i_2] = (arr_15 [i_1] [i_1] [i_1] [i_1]);
                        arr_18 [i_1] [i_2] [i_1] [i_1] = (arr_14 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]);
                        var_14 *= ((!((max((arr_11 [i_3 + 1]), 237)))));
                    }
                }
            }
        }
    }
    var_15 = var_10;
    var_16 = var_10;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_17 = (-(arr_23 [i_5] [i_5]));
                        arr_30 [i_5] = 225;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_34 [i_5] = ((((((arr_32 [i_5]) * ((240 / (arr_33 [i_5])))))) ? ((max(53715, var_0))) : ((((((-6603635438646009137 ? var_10 : (arr_29 [i_5] [i_5] [i_7] [i_9])))) ? (min(-32854845, (arr_23 [i_5] [i_7]))) : (arr_23 [i_5] [i_5]))))));
                        var_18 = (((((((arr_33 [i_7]) || 32854828)))) < ((11533 ? (arr_25 [i_7] [i_5]) : (arr_22 [i_5] [i_6])))));
                        arr_35 [i_5] [i_5] [i_5] [i_9] = (arr_19 [i_5] [i_6]);
                        var_19 = -32854836;
                    }
                    var_20 = (max(var_20, -6641708656411634476));
                }
            }
        }
    }
    #pragma endscop
}
