/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1] [i_2] [i_3] &= (var_11 + (((arr_6 [i_0] [i_0] [i_0] [i_2 - 2]) + (arr_9 [i_2 + 2] [i_1] [i_3] [i_1 + 1]))));
                            arr_13 [i_3] [i_1] |= var_9;
                        }
                    }
                }
                var_16 = var_1;

                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_26 [i_1] = (var_13 - var_6);
                                var_17 ^= ((((min((min((arr_1 [i_6]), var_12)), ((((arr_6 [i_0] [i_1] [i_5] [i_6]) > (arr_1 [i_0]))))))) < ((min((arr_3 [12] [i_0]), ((((arr_1 [i_0]) && var_13))))))));
                            }
                        }
                    }
                    arr_27 [i_1] [i_1] [i_1] = arr_11 [i_0] [i_1] [i_0];
                    var_18 = ((var_1 < (((arr_23 [i_1 + 4] [i_1] [i_4] [i_4] [i_4]) % (arr_25 [i_1 + 1] [i_4 - 1])))));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_19 = ((var_0 <= (((arr_25 [i_0] [i_1]) ^ (var_7 & var_0)))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_20 += (arr_15 [i_7] [i_7] [i_7]);
                        var_21 ^= (arr_17 [i_8]);
                    }
                    var_22 = (min((max((arr_19 [i_1]), (arr_19 [i_1]))), (arr_19 [i_1])));
                    var_23 *= var_6;
                }
                arr_35 [i_1] = (var_7 - (arr_8 [i_0] [i_0] [i_1 + 2] [i_1 + 2]));
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}
