/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((1 | 1) ? -1 : var_4)));
    var_14 = (min(var_4, (max(1, -25))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [1] [i_2] [i_2] [i_4] = min((min(((max(32643, -17763))), ((-(arr_1 [i_0]))))), (arr_3 [i_0 + 2] [i_3]));
                                var_15 = (min(66, 66));
                                arr_15 [i_2] [i_3] [i_2] [i_2] = (((((1073741823 - 9960749815800256208) ? (~-2387708911598822376) : (-1068946006 >= 32643)))) ? ((+(((arr_13 [i_4] [i_1] [i_2] [i_2] [i_0 - 1] [i_3]) ^ (arr_0 [i_0]))))) : (((arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]) & 1)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_16 = 14497;
                                var_17 = ((~((max((arr_22 [i_7 - 1] [i_7 - 2] [i_7] [i_7] [i_7 - 2] [i_0 + 1]), (arr_22 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 1] [i_0 + 1]))))));
                                var_18 = (min(var_18, ((min(((max(0, (min((arr_11 [i_1] [i_7] [i_6] [i_5] [i_1] [i_1]), 247))))), (max(-18383755292136941884, -14499)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
