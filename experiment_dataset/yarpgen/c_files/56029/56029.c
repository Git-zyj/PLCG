/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 9693486833910863966));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_0] [i_1 + 3] [i_0] |= (arr_5 [i_0] [i_0] [i_2] [i_0]);
                    var_18 -= (((((((0 && (arr_4 [i_0]))))) & var_11)) | (((1 ? 9693486833910863964 : 20977))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] |= ((((var_15 ^ (var_13 - 1))) % var_15));
                                var_19 -= (arr_14 [i_5] [i_1] [1] [i_4] [i_5] [i_3] [i_0]);
                                arr_17 [i_0] [2] [i_0] |= ((((arr_4 [i_1 + 3]) == var_4)));
                                arr_18 [i_0] [i_1 + 4] [i_0] [0] [4] [i_0] |= (((((arr_14 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_5] [i_5]) == (arr_12 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1]))) && (((arr_14 [i_0] [i_1] [i_1 + 4] [i_1] [i_1 + 1] [i_3] [i_4]) == (arr_14 [i_1 + 3] [1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_5] [i_5])))));
                                var_20 |= (min((65535 || 65535), (((((arr_1 [i_3] [i_4]) - var_14)) << (((-6 < (arr_9 [0] [i_0] [i_0] [i_5]))))))));
                            }
                        }
                    }
                    var_21 ^= (arr_10 [i_1 + 2] [i_1] [i_0] [i_0] [i_1]);
                    var_22 = ((-(15667749704045377472 || 1)));
                    arr_19 [i_0] [i_0] [i_1] [i_3] |= ((((((var_15 ? 1 : (arr_7 [i_0]))) - 0)) | ((var_14 ? (arr_13 [i_0] [i_0] [i_1] [i_0] [i_0]) : 9693486833910863964))));
                }
                var_23 = (min(var_23, ((((min((~var_13), (var_2 == var_6))) * 0)))));
                var_24 = (min(var_24, ((!(((14183519963359762382 ? 1 : 0)))))));
                var_25 += (arr_10 [i_0] [i_0] [i_0] [i_1 + 4] [i_1 + 3]);
            }
        }
    }
    #pragma endscop
}
