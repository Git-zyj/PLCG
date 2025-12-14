/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((13796 ? (3 * var_1) : -var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = var_9;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) * (var_11 % var_9)));
                        arr_13 [i_1] = (((arr_5 [i_1]) ? (((arr_4 [i_0]) & (arr_5 [i_2]))) : var_14));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_0] [i_4] [i_3] = (((~var_13) ? -1536 : (var_16 | var_11)));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = var_9;
                            arr_19 [i_0] [i_1] [i_3] [i_4] = (-1546809948 / (arr_14 [i_0] [i_2] [i_2] [i_0] [i_2]));
                            var_20 = (3 ^ 57045);
                            var_21 = (max(var_21, (((~((~(arr_6 [i_1] [i_3] [i_4]))))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 = ((-((min(2854416293, var_13)))));
                        var_23 = var_10;
                        var_24 -= (+(((arr_21 [i_0] [i_1] [i_2] [i_5]) % (((arr_5 [i_5]) ? (arr_3 [i_0]) : 8476)))));
                        arr_23 [i_0] = ((121 << (4294967295 - 4294967295)));
                    }
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        var_25 = ((1369100711742316816 ? ((13789 ? -1457313868 : 15304542552907692148)) : ((max(4205100436448962025, 213)))));
                        var_26 = (max(var_26, -var_16));
                        arr_27 [i_0] [i_1] [i_2] = (max(226, var_6));
                    }
                }
            }
        }
    }
    #pragma endscop
}
