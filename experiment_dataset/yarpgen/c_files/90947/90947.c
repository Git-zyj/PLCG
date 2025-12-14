/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = min(24, (min(75, 219)));
                                var_12 = (((((arr_1 [i_0 + 1]) & (arr_1 [i_0 - 1]))) ^ var_7));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_13 = (max(var_13, (arr_3 [i_0 - 2])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_14 *= 232;
                                var_15 *= ((19 ? (arr_13 [i_5] [i_1] [i_5] [i_6]) : (arr_16 [i_1 + 1] [i_5] [i_5])));
                                var_16 = (min(var_16, ((((arr_0 [i_6]) ? var_6 : (arr_5 [i_1] [i_5] [i_6 - 1] [16]))))));
                                var_17 = (((arr_14 [i_1]) & (var_0 * var_2)));
                                arr_19 [i_0] [i_1] [i_5] [i_1] = var_9;
                            }
                        }
                    }
                    var_18 = (((arr_16 [i_1] [i_1] [i_1]) * (arr_7 [i_5] [i_1] [i_5] [i_0])));

                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        arr_24 [i_1] [i_8] = (((251 | 243) ? 23 : 43));
                        var_19 &= (((arr_4 [i_1 - 2]) != ((-(arr_18 [i_8 - 3] [1] [i_1] [i_0] [1])))));
                    }
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_20 = (!17);
                        var_21 *= ((!(arr_0 [i_1])));
                        arr_27 [i_9 + 3] [i_1] [i_1] [1] = var_9;
                        var_22 = var_1;
                        var_23 = (((!101) ? 121 : (arr_6 [i_1] [i_1])));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_5] [i_1] = 127;
                        arr_31 [i_1] [i_1] [i_5] [i_5] [6] = 226;
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_24 = (((arr_12 [i_0 - 2] [i_0 - 1] [i_1]) ? (arr_9 [i_0 + 1] [i_0 + 1] [i_5] [i_5] [i_11]) : (((arr_6 [i_1] [i_5]) ? 247 : (arr_25 [i_0] [i_0] [i_0 + 1] [i_1 + 1] [i_1] [i_11])))));
                        var_25 += (((arr_6 [i_5] [18]) ? (arr_26 [i_11] [i_1] [i_11] [i_11]) : 242));
                    }
                }
                var_26 = min((arr_20 [i_0 + 1]), (arr_17 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_1 - 1]));
            }
        }
    }
    #pragma endscop
}
