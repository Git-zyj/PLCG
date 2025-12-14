/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((~3548535668123224263) ? (!129) : var_10));
    var_13 = (((((var_5 != 1915697984) || (var_0 > var_9))) ? 1308913150 : ((var_6 + (var_10 <= 18446744073709551610)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 = (((-(arr_2 [i_0] [6]))));
        var_15 ^= (!-1915697985);
        var_16 = (((arr_2 [10] [4]) ? ((1298999286 << (var_1 - 2183765484))) : (~var_11)));
        var_17 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 *= ((!((((((9 >> (((arr_2 [12] [i_0]) - 11512))))) ? var_2 : (~var_11))))));
                    arr_10 [i_0] [i_1] = var_1;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_15 [4] [i_1] [i_1] &= -1915697992;
                        var_19 ^= -1915697985;
                        arr_16 [0] [5] [i_1] [5] = (arr_4 [9]);
                        var_20 = var_8;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_21 = (arr_17 [i_0] [i_0] [i_0 + 1] [i_0 - 1]);
                        arr_19 [i_1] |= (((arr_0 [i_0 - 1] [i_2]) ? (arr_6 [i_0] [i_0 + 1]) : var_5));

                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_22 = ((-1915697965 ? var_2 : (-9223372036854775807 - 1)));
                            arr_22 [i_4] [i_0] [i_0 + 1] [1] [i_0 + 1] [i_0 + 1] = var_2;
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, var_5));
                            var_24 = ((!var_7) ? (arr_8 [i_6 - 2]) : var_2);
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, 114688));
                            arr_30 [i_4] [i_1] [i_1] [7] [i_1] [i_1] = var_5;
                        }
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, ((((~var_4) != (max(var_3, var_7)))))));
                        arr_34 [i_2] [i_2] [i_2] [i_2] = (min((-2147483647 - 1), (arr_26 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_1] [i_0 - 2] [i_0])));
                    }
                }
            }
        }
    }
    var_27 = var_2;
    var_28 = (~var_2);
    #pragma endscop
}
