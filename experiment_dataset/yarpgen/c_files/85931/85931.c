/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 3;
    var_12 = 252;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((0 >= (240 ^ 235))))))));
                var_14 = ((!((max(var_10, (arr_4 [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                var_15 ^= ((((min(55247, -57))) >> (57 - 33)));

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_16 = (max(var_16, (((-(arr_6 [i_2 - 3] [i_4 + 1]))))));
                    arr_15 [12] |= var_7;
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    var_17 += 97;
                    arr_18 [i_3] [i_3] [i_3] = (8800961370971862533 / var_4);
                    var_18 ^= var_5;
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_19 = var_3;
                    var_20 += (var_10 != var_9);
                    var_21 = var_9;
                    var_22 = (max(var_22, ((((arr_13 [i_2 + 1] [i_2 - 3] [i_2 - 2]) + (arr_4 [i_6] [i_2]))))));

                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_23 = (arr_22 [i_2] [i_2] [i_7 - 1] [i_7] [i_7] [i_7]);

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            arr_25 [i_2] [i_3] [i_3] [i_8] [i_8] [i_2] [i_3] = 32768;
                            arr_26 [i_2] [i_2] [i_3] [i_3] [i_2] [i_2] [i_2 - 1] = -var_4;
                        }
                    }
                }

                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    arr_29 [i_2] [i_3] [i_2 - 3] = ((0 ^ (var_7 + var_8)));
                    var_24 = 10289;
                }
                var_25 = (arr_6 [i_2] [i_3]);
            }
        }
    }
    #pragma endscop
}
