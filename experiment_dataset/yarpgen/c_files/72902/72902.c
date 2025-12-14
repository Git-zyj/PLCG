/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [1] [i_1] [i_1] [i_1] [1] [i_1] = (((min(((min(119434135, -1387131658532581031))), (min(var_6, var_0)))) & (arr_0 [i_4])));
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_4] = (arr_10 [0] [i_1] [i_2] [i_3] [i_2]);
                                var_18 = ((~(((((~(arr_5 [i_0 - 1] [i_1] [i_4])))) & (min(4979925434001436396, 11075713732512085797))))));
                                var_19 -= (!var_2);
                                arr_17 [i_1] = (((arr_9 [i_1]) >= (min((arr_5 [i_3 + 2] [i_3 + 1] [i_0 + 3]), (((8120203120836605828 <= (-9223372036854775807 - 1))))))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [i_2] = ((((arr_10 [i_2] [i_2] [i_1] [i_0] [i_0]) ? (min((arr_8 [19] [i_1] [i_1]), 47)) : var_4)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_25 [i_5] [i_1] [i_2] [i_5] [i_6] = ((~(arr_2 [i_0 + 2])));
                                var_20 = (min(var_20, var_16));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = -var_10;
    var_22 = var_3;
    #pragma endscop
}
