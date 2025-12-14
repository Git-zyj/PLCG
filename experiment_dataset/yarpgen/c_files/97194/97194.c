/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((((arr_5 [i_0] [i_1] [i_2] [9]) / (arr_1 [i_1] [i_1]))))) ? (12 * 243) : ((-var_11 * (((var_3 ? var_8 : 233)))))));
                    var_17 = (min(576460752303423487, (arr_4 [i_0 - 3])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 -= ((var_11 ? (~var_12) : 8));
                                var_19 += (!((min((max(4294967295, 18)), (arr_2 [i_0] [8])))));
                                var_20 = (min(var_9, (((((min((arr_0 [i_2] [i_2]), var_1))) & ((-(arr_2 [i_0] [i_4]))))))));
                                var_21 = (min(var_21, var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                arr_20 [2] &= (max(((~(arr_18 [8] [8]))), (min(((~(arr_15 [i_5] [4]))), (arr_19 [4] [i_6 + 2] [i_5])))));
                var_22 = (max(var_22, (arr_15 [i_5] [7])));
                var_23 -= ((!((max(((max((arr_18 [i_5] [14]), var_0))), (min(var_5, -4988334055658098464)))))));
            }
        }
    }
    #pragma endscop
}
