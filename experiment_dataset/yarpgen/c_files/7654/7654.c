/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_10 ? -1 : var_15)))) & 1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (min(1, (min(1, 1))))));
                arr_5 [i_0] [i_0] [i_1] = ((((((var_15 * var_10) | var_4))) ? (var_11 && var_0) : (22 | 1196184194)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_21 = (((arr_6 [i_0] [i_1 - 1] [i_2] [i_4]) + (arr_6 [i_0] [i_1 - 1] [i_2] [14])));
                                var_22 = ((var_10 + (arr_9 [16] [i_0] [i_2] [i_2])));
                                var_23 = var_12;
                                var_24 = ((var_18 ? (arr_11 [i_0] [i_3] [i_0]) : var_5));
                                var_25 *= (!1196184194);
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_26 -= (((((((min(var_13, -28647))) ? (6 - var_18) : (arr_11 [i_5] [i_1 + 1] [i_5])))) ? (1941647000 + var_17) : (min((arr_1 [i_0 - 1]), 10))));
                                arr_18 [i_0] = var_10;
                                var_27 = ((var_0 ^ (((var_0 != var_4) & var_1))));
                                var_28 += (((1196184194 - 253) == ((var_11 / (arr_15 [i_0 + 2] [i_0 + 2])))));
                                var_29 -= ((max(0, 19162)));
                            }
                            var_30 = (arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1]);
                            var_31 = 2561;
                            var_32 += (((((((~var_12) != (((((arr_15 [i_1] [i_2]) <= 1)))))))) + (((arr_2 [i_2] [i_1 + 1]) ? (arr_2 [i_2] [i_1 - 1]) : var_4))));
                            arr_19 [i_0] [i_1 + 1] [i_0] [3] = var_2;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] [i_0] [i_0] = -15;
                    var_33 = (min(var_33, (((1941647000 ? (max(var_0, (arr_3 [i_1] [i_1] [i_1 + 1]))) : ((((((14 ? var_2 : 77))) ? (arr_8 [i_0 - 2] [i_1] [i_6]) : (~6)))))))));
                }
            }
        }
    }
    #pragma endscop
}
