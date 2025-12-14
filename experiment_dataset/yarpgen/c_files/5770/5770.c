/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_0] [i_1] = (arr_10 [i_0]);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_2] [i_4] [i_2] [i_4] = arr_7 [i_0] [i_0];
                            var_20 = (max(var_20, var_3));
                        }

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_21 = (max(var_21, ((((arr_11 [i_0] [i_1] [i_0] [i_0] [i_5]) ^ 34564)))));
                            var_22 ^= (~34564);
                            var_23 = 34564;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_24 = (((arr_13 [i_2] [i_2] [i_1] [i_3] [i_2]) ? var_16 : (arr_6 [i_3] [i_3] [i_3] [i_3])));
                            var_25 = (var_16 | -5462291780962557668);
                        }
                        var_26 = ((~(((arr_18 [i_0 - 1]) + var_18))));
                        var_27 = ((~(-13721 != 3272055216)));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_28 ^= (((arr_8 [i_0]) + (arr_9 [i_0] [i_0] [i_2] [i_0 + 2])));
                        arr_23 [i_1] [i_2] [i_1] = (((arr_19 [i_0] [i_0 - 3]) ^ (arr_19 [i_0] [i_0 + 2])));
                        var_29 -= (arr_16 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_30 = (max(var_30, ((((arr_17 [i_0 - 1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_2]) || (arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_0] [i_2] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_31 = ((-(arr_17 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_8 + 1] [i_9] [i_2] [i_8 - 1])));
                                var_32 = (min(var_32, (arr_24 [i_0] [i_0] [i_0] [i_8] [i_9] [i_1])));
                            }
                        }
                    }
                    arr_29 [i_0] = ((-13721 ? 32767 : 34564));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_33 = ((arr_24 [i_0] [i_1] [i_0 - 2] [i_0] [i_1] [i_1]) || (arr_24 [i_0] [i_1] [i_0 + 1] [i_11] [i_1] [i_0]));
                            arr_36 [i_0] [i_0] [i_10] [i_11] = (max(3272055216, 17934257121941328767));
                            var_34 -= (arr_22 [i_0] [i_1] [i_0] [i_11] [i_0 - 3]);
                            var_35 ^= 6818793981610902439;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_36 = (max(var_36, ((((((max(0, 0)))) ? 1610994328171554262 : (+-16376))))));
                            var_37 = ((((((~var_7) ? (arr_3 [i_13 + 1] [i_0 - 1]) : ((var_7 ? var_5 : (arr_24 [i_0] [i_0] [i_12] [i_13] [i_0 - 3] [i_12])))))) ? (((1988821795 ? (max(2217041138, 29146)) : 1351674424))) : ((~(min((arr_25 [i_12] [i_1] [i_12] [i_0] [i_12]), var_15))))));
                        }
                    }
                }
            }
        }
    }
    var_38 = var_7;
    var_39 = var_2;
    var_40 = var_3;
    #pragma endscop
}
