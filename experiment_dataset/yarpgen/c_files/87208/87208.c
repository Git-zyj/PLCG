/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [19] [i_1] [19] [i_1] [i_2] [i_3] [i_4] = (10467 == var_4);
                                var_11 += max(((-(63947 >= 3040588029))), 127);
                                arr_16 [i_3] = ((1254379267 ? (max(var_0, (arr_14 [11] [i_1] [i_2] [i_1] [8] [i_4 + 2]))) : 1254379267));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] = (arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_5]);

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_12 = ((-(2706037658 << 1)));
                            arr_22 [13] [i_5] [i_6] [i_5] [i_5] [i_5] [i_5] = -1313396501;
                            arr_23 [i_6] [i_1] [2] [i_1] [i_6] = (max(1254379265, -137065002));
                            var_13 = (((~-2111922952) ^ (((3040588054 ? -10669 : 4294967275)))));
                            arr_24 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1] [i_2] = (((((~(arr_14 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1] [23])))) ? (((((arr_14 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2] [1] [i_5 + 2]) && (arr_20 [i_5 + 1] [i_5] [i_5 - 1] [17] [i_5] [i_5]))))) : (((arr_20 [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5] [i_5 - 1] [i_5]) % var_9))));
                        }
                        var_14 += (50962 % 43260);
                    }
                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        arr_27 [1] [i_7] [i_2] [3] = -7230;
                        var_15 = -10669;
                        var_16 = ((((-(arr_17 [i_7 - 1] [i_7 - 3]))) == 20431));
                    }
                    var_17 ^= ((((((((-(arr_1 [i_1])))) ? 0 : (arr_4 [i_0] [i_1] [i_2])))) ? (137065002 / 8130877392240489053) : -4294967253));
                }
            }
        }
    }
    var_18 = ((var_2 ? var_8 : var_8));
    var_19 = max(((!(((43260 ? 1688230933121378082 : var_0))))), ((var_0 <= (var_7 + var_6))));
    #pragma endscop
}
