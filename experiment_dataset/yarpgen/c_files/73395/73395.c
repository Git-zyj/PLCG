/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((((((-9223372036854775807 - 1) ? 10459 : var_0))) || -var_4)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] = (~var_1);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_17 [i_2] [i_2] [i_2] [i_3] [i_4] [i_3] &= ((((26388279066624 ? 1 : (arr_9 [i_2] [i_2] [i_4]))) << (231286801 - 231286772)));
                            var_11 = (~6);
                            arr_18 [i_0] [3] [4] [i_2] [i_2] [3] [i_4] = var_5;
                            var_12 += (((arr_10 [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_3 - 3]) ? (arr_1 [i_0 - 2] [i_0 + 1]) : (arr_1 [i_0 - 2] [i_0 + 1])));
                            var_13 = (((arr_15 [i_0] [i_0 - 2]) ? ((var_2 ? var_2 : var_2)) : (var_3 > 38)));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            var_14 *= (((arr_22 [i_6 + 1] [i_6] [i_6 + 1] [12] [i_6] [i_6 + 1] [i_6]) ? 1396 : (~var_2)));
                            var_15 = var_0;
                            arr_24 [i_0] [i_0] [13] [7] [i_2] = var_1;
                        }
                        arr_25 [i_0 - 1] [14] [i_2] [i_5] = (-1 ^ -1262507560801412972);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [13] [13] [i_7] |= (((arr_21 [i_0] [i_0] [i_0] [1]) ? var_9 : (((-(arr_10 [i_0] [i_1] [4] [i_7]))))));
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_0] |= ((-(((var_5 || var_4) ? (max(6780490787839754215, -90)) : (1396 && -231286802)))));
                        arr_30 [i_0] [1] [i_1] [i_0] = (~var_5);
                        arr_31 [3] [i_1] [i_2] [i_7] = (min(1403, (!-381129676)));
                        arr_32 [i_0] [i_0] [13] [4] [i_0] = 86;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_16 = (min(var_16, (((~((~(arr_15 [i_1] [i_0]))))))));
                        arr_35 [i_8] [i_1] [i_8] [i_8] [i_8] [i_0] = (arr_14 [i_0 - 1] [i_1] [i_2] [i_8] [i_1] [8] [i_8]);
                    }
                    var_17 |= ((1020 ? 1 : 8219));
                }
            }
        }
    }
    #pragma endscop
}
