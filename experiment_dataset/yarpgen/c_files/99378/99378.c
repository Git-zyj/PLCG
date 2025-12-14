/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_15;
        var_18 = var_17;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = ((95 ? -1 : -55396684));
                    var_20 *= 55396688;
                    arr_8 [i_2] [10] [12] [17] = (min(-var_13, var_14));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = (min(var_21, var_4));
                    arr_14 [i_4] [i_3] [i_3] [i_4] = -1;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_22 = var_10;
                        var_23 = (max(var_23, -var_8));
                        var_24 = (-(arr_13 [i_5]));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_25 [i_4] [12] [i_3] [11] [i_3] [i_3] [4] = ((((var_13 != (arr_16 [i_0] [i_4] [4] [i_6] [19]))) ? (((arr_16 [i_0] [12] [i_4] [i_6] [i_7]) ? var_13 : var_13)) : (((var_17 ? (arr_16 [i_0] [i_3] [4] [i_6] [i_7]) : (arr_16 [i_0] [i_3] [i_4] [i_6] [i_7]))))));
                            arr_26 [i_4] [15] [i_4] = ((18446744073709551615 ? var_0 : (~3201364780)));
                            var_25 = (min(var_25, ((((((arr_24 [i_0] [i_6] [i_4]) + 2147483647)) >> (var_15 + 113))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_26 = (min(var_26, ((((~(arr_30 [i_0] [1] [i_6] [18] [i_8])))))));
                            var_27 = 18446744073709551615;
                            arr_31 [i_3] [12] [i_4] [i_8] = var_14;
                        }
                        arr_32 [i_3] [i_4] [19] [i_4] [19] [12] = var_1;
                    }
                }
            }
        }
        var_28 = (arr_7 [i_0]);
    }
    var_29 -= 28;
    var_30 ^= var_16;
    var_31 = (max(var_31, var_17));
    #pragma endscop
}
