/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_3;
    var_15 = var_3;
    var_16 = ((var_6 ? (((var_8 ? -2595276834951010112 : var_4))) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_17 = (~2814938325);
                        arr_10 [i_2] [9] = 26;
                        arr_11 [i_0] [i_0] = (arr_9 [i_0] [14] [i_3]);
                        arr_12 [i_0] [11] [i_2] [i_0] [i_0] = 14228051433011546984;
                        var_18 *= (arr_7 [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] = (arr_16 [i_4 - 2] [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4 + 1]);
                            var_19 = 65511;
                            arr_18 [i_0] [i_0] = (((arr_13 [i_0]) ? (arr_1 [i_0]) : (((arr_7 [i_5] [1] [i_2]) ? (arr_16 [i_0] [i_1] [i_2] [i_4] [i_5] [i_0]) : 8310599326605655055))));
                            arr_19 [i_0] [i_0] = ((~(arr_4 [i_0] [i_1] [i_1])));
                        }
                        arr_20 [i_0] [i_0] [1] [i_0] [1] &= (((arr_16 [14] [10] [i_2] [i_1] [7] [i_0]) ? (((62 ? 24 : 32768))) : (((arr_2 [3]) ? 30 : (arr_15 [i_0] [i_1] [i_2])))));
                        arr_21 [7] [i_1] [18] [14] [i_4] = ((4218692640698004631 ? 38 : 210));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_20 = (((((65511 ? (14228051433011546999 ^ 1) : ((((arr_1 [2]) ? (arr_28 [i_0] [i_1] [i_6] [i_6] [i_7]) : (arr_9 [i_0] [9] [i_7]))))))) ? (min((arr_22 [i_0] [i_1] [i_0] [i_6] [i_7] [i_0]), 4218692640698004638)) : (((min((min((arr_28 [i_0] [i_1] [i_6] [i_6 + 1] [i_7]), 1)), 7))))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = (max(-32739, 0));
                                var_21 *= (((~(arr_3 [1] [i_1]))));
                            }
                        }
                    }
                    arr_31 [12] [15] [12] [i_0] = (-127 - 1);
                    var_22 ^= ((+(max((arr_25 [i_0] [i_0] [i_0] [i_0]), (arr_29 [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
