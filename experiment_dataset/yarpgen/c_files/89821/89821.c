/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_17 = (min(var_17, ((~(arr_2 [i_0])))));
            var_18 = (arr_4 [i_0] [i_1]);
            arr_5 [i_0] [i_0] = 127;
        }
        var_19 ^= ((!((min((arr_2 [i_0 - 2]), var_6)))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_20 = (max(var_20, ((((arr_6 [i_2]) % 118)))));

        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((~(arr_11 [i_3 - 2] [i_3 - 2] [i_5]))))));
                            var_22 = (((arr_11 [i_2 + 1] [i_2 + 1] [i_5]) | -1834901740));
                            arr_18 [i_2] [i_2] [i_4] [i_5 - 4] [i_6] = (arr_14 [i_4] [i_2] [i_3] [i_3 + 3] [i_2] [i_2 + 2]);
                        }
                    }
                }
            }
            var_23 = var_2;
        }
        var_24 ^= (arr_16 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_25 = ((max(-1715089425, (max(var_15, 3972)))));

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_33 [i_11] [i_11] [i_10] [i_10] [i_11] [i_11] = (max(((var_6 ? (((var_14 ? (arr_26 [i_8] [i_9] [i_11]) : 44925))) : (var_10 - var_4))), 1188440370));
                            arr_34 [i_10] [6] [i_9] = ((32256 ? 10 : 32240));
                            var_26 = var_3;
                            var_27 = var_7;
                        }
                    }
                }
            }
        }
        var_28 = var_13;

        for (int i_12 = 2; i_12 < 22;i_12 += 1)
        {
            var_29 *= (max(((max(33280, 32256))), (((arr_26 [i_12] [i_12] [15]) ^ var_5))));
            var_30 -= var_15;
        }
    }
    var_31 = var_2;
    #pragma endscop
}
