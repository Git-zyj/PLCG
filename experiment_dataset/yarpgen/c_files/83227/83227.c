/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((var_6 ? (var_3 * var_2) : 1))) ? 53579 : var_1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = ((min(var_3, var_8)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (arr_0 [i_2]);
                            var_13 -= (max(((((min((arr_1 [i_0 - 2]), 2331446109))) - (arr_9 [i_0 + 3] [i_3] [i_3] [i_3] [i_3]))), ((((arr_4 [i_2 - 1]) < (arr_4 [i_2 - 1]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((!((((~-56) ? 1 : ((7936 ? 0 : 12836674489113264150)))))));
                            var_14 *= 7936;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_15 = max(((~(arr_0 [i_0 - 2]))), ((((((arr_2 [i_0]) ? 5118 : (arr_9 [i_0 + 3] [i_1 - 1] [i_4] [i_5 + 1] [i_4])))) ? -1 : (arr_4 [i_0]))));
                            arr_17 [i_0] [i_1 + 1] [i_4] [i_5] [i_5] [i_5] = ((min((-1 && -1083227836), 6554359483139609607)));
                            var_16 *= (((1 & 3322172286) ? -10098 : (arr_16 [i_0] [i_0] [i_4] [i_0] [i_4])));
                            arr_18 [i_0 - 2] [i_1 + 1] = ((-(max(((0 ? 0 : var_0)), -var_8))));
                            var_17 = (arr_2 [i_4]);
                        }
                    }
                }
                var_18 = (arr_6 [i_0]);
            }
        }
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = var_6;
        var_19 += (min((((arr_4 [i_6]) ? (arr_20 [i_6] [12]) : var_6)), ((max((min(var_4, var_9)), (!var_4))))));
        var_20 = (min(var_8, (max(var_8, var_3))));
    }
    var_21 = ((-(14686067199912224559 <= 240)));
    var_22 = ((((((var_2 * 70) <= (min(var_5, var_4))))) < var_0));
    #pragma endscop
}
