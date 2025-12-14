/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_0, var_6))) ? (~0) : -16128);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_13 = (+(((arr_1 [i_0]) ? (arr_1 [i_0]) : 1)));
                        arr_12 [i_3] [i_0 - 1] [i_3] [i_0 - 1] |= -31826;
                        var_14 *= ((!(arr_4 [i_2] [i_2] [i_3 + 1] [i_3])));
                        var_15 *= (((arr_4 [i_0] [i_1] [i_2] [i_2]) ? (arr_0 [i_2] [i_3 + 1]) : ((~(arr_1 [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_16 -= ((-(arr_14 [i_0] [i_0 - 1] [i_2] [i_0] [10])));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_17 = (max(var_17, ((((((arr_8 [i_1] [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_4]) : -9223372036854775801)) != (0 / -22511))))));
                            var_18 = arr_14 [i_2] [i_2] [i_0] [i_2] [i_0 - 1];
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_19 = ((-7449902980407686883 ? (~2913222374) : -2799769736));
                            var_20 += (((arr_2 [i_0 - 1]) < -1));
                            var_21 = 1073725440;
                        }
                        arr_21 [i_0] [i_0] = -31842;
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        arr_25 [i_7] [i_0] [i_0] [i_0] = (((arr_23 [i_0 - 1] [i_0] [i_0 - 1] [7] [i_0]) ? 1 : (arr_3 [i_7 + 1] [i_0 - 1] [i_0])));
                        var_22 *= (~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]));
                    }
                    var_23 = ((((((arr_20 [i_2] [i_2] [i_2] [6] [i_1] [i_1] [i_0]) + (arr_13 [i_0] [i_0] [i_0])))) ? (arr_23 [i_0] [i_0] [i_0] [5] [i_0]) : (~2853090866)));
                    var_24 += 1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_25 = (arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]);
                                arr_32 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [12] = var_5;
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_0] = ((((1694609812 < (arr_7 [i_0])))));
    }
    var_26 = var_10;
    #pragma endscop
}
