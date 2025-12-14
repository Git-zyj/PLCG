/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (~var_12)));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-(arr_3 [i_0] [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_20 = (arr_2 [i_0]);
                    var_21 = -106;
                    var_22 ^= (arr_3 [i_0] [i_1] [i_2]);
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_23 = arr_12 [i_0] [i_0];
                        var_24 = arr_0 [i_3];
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_16 [i_3] [i_1] [i_1] [i_0] [i_3] [i_0] = ((-(arr_7 [i_0] [i_0] [i_0])));
                        arr_17 [i_0] [i_0] [i_0] [i_1] [i_3] [i_5 + 2] = (arr_1 [i_5 - 1]);
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_0] = (arr_2 [i_0]);
                        var_25 = 4413065547457293398;
                    }

                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        var_26 -= (arr_4 [i_0] [i_1] [i_3]);
                        var_27 = 0;
                        var_28 = 58067;
                        var_29 = (arr_7 [i_0] [i_3] [i_6 - 1]);

                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            var_30 |= var_16;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((-(arr_23 [i_6 + 1] [i_6] [i_0] [i_6] [i_6 - 1]))));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_27 [i_6 + 1] [i_6] [i_6] [i_0] [i_6 + 1] = ((~((~(arr_9 [i_0] [i_6 + 1] [i_0])))));
                            var_31 = var_17;
                            var_32 = arr_23 [i_1] [i_1] [i_3] [i_1] [i_1];
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_33 = (max(var_33, (arr_11 [i_0] [i_1] [i_3] [i_6] [i_6 - 1] [i_9])));
                            arr_30 [i_0] [i_1] [i_3] [i_6 - 1] [i_9] = ((~(arr_2 [i_3])));
                            var_34 ^= (arr_6 [i_9] [i_1]);
                            arr_31 [i_0] [i_0] [i_3] [i_6 - 1] [i_9] = 86;
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_35 = (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_36 = (~var_3);
                        }
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_37 = 4216781126;
                        var_38 = (arr_29 [i_1] [i_3]);
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_0] [i_12] = (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_12]);
                        var_39 *= var_0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
