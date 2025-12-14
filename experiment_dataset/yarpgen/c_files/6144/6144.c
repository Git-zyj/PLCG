/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = var_7;
                                var_15 = (((((((var_2 || (arr_8 [i_2] [i_2] [i_2])))))) ? (((~(arr_7 [i_0] [i_0] [i_4] [i_2] [i_1 - 1] [i_2])))) : (min(4, 11290066455373811695))));
                                var_16 = ((((!(((var_6 ? var_6 : var_9)))))) - ((-25801 ? -25814 : var_5)));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = ((max(var_12, var_2)));
                                var_17 = -95;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_18 = (~var_13);
                                var_19 = (min(3232596447, ((0 ? 3618350395 : var_4))));
                            }
                        }
                    }
                    var_20 = (!4943);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_21 = (((var_13 * -var_5) * (((~var_4) ? (((~(arr_10 [i_1])))) : 254973690186810335))));
                                var_22 *= (arr_14 [i_8] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((var_5 / var_10) ? var_9 : var_9));
    #pragma endscop
}
