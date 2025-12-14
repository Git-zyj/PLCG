/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = max((((arr_1 [15] [i_0]) ^ -1)), (((((218 ? var_10 : 73)) ^ ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [8]))))))));
        arr_3 [i_0] = arr_1 [i_0] [i_0];

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] = (-(((arr_9 [i_0] [i_0] [i_2] [i_3]) ? -5867539366275835392 : (min(var_12, var_1)))));
                        var_14 = (min(var_14, ((((((9223372036854775807 / (arr_5 [i_2 - 1] [i_1 + 1])))) ? var_0 : (((225 > (arr_10 [9] [i_3] [i_2 + 1] [i_1 - 1])))))))));
                        var_15 ^= ((!(((((arr_5 [i_1] [i_2 + 1]) ? (arr_8 [4] [i_1 - 1] [i_3] [i_3]) : var_7))))));
                    }
                }
            }
            var_16 = (((arr_11 [i_0] [i_0]) + ((var_10 - (arr_10 [i_1 - 1] [i_1 - 1] [7] [i_1])))));
            var_17 = ((+((var_7 ? (arr_5 [i_1 - 1] [i_1 - 1]) : ((28 ? (arr_6 [i_0] [i_0] [i_1]) : var_5))))));
            var_18 ^= (((~((146 | (arr_4 [10]))))) + ((~(arr_9 [i_0] [i_0] [i_0] [i_1]))));
            arr_13 [i_0] [14] [i_0] = (+(((((arr_5 [i_0] [13]) ? 5973486506350591200 : 8492079924880645635)) / 5867539366275835395)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_19 = (((((var_1 ? (arr_15 [i_0]) : -5973486506350591198))) ? ((-1 & (arr_6 [i_0] [i_0] [i_0]))) : (158 | var_0)));
            var_20 = (((arr_0 [i_4]) / (((arr_4 [i_4]) / var_0))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_25 [i_6] &= ((255 ? var_6 : var_10));
                            arr_26 [i_0] = arr_24 [i_5 + 3] [i_5 - 2] [i_5 + 4] [i_5] [i_5];
                            var_21 = (!-2011688569884104064);
                        }
                    }
                }
            }
            var_22 = (arr_19 [i_0]);
        }
    }
    var_23 -= var_12;
    var_24 = (((var_7 ? var_5 : (0 + 227))));
    var_25 = ((-7745101069681798304 ? (((((5973486506350591200 >> (150 - 119)))) ? ((99 << (99 - 98))) : var_8)) : var_7));
    #pragma endscop
}
