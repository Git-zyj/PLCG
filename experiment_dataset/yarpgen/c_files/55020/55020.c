/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, 61261));
                            arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_2] [i_3] = ((~((var_0 ? (arr_8 [6] [i_0] [i_2 - 1] [i_3]) : ((var_11 ? 11361894365008638407 : var_1))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 *= ((var_14 ? (max((arr_8 [i_0] [i_6] [i_4] [i_6 + 3]), (((135 ? 61253 : 135))))) : (((-(var_8 + var_10))))));
                                var_19 &= ((~((~(arr_16 [i_6] [i_6 - 1] [i_6] [8] [i_4] [i_1])))));
                                var_20 = 4287;
                                var_21 = (min((max((arr_16 [i_0] [i_6 - 2] [i_0] [i_5] [i_6] [1]), (((arr_12 [i_0] [i_4] [i_0] [i_6]) ? var_3 : var_4)))), ((max((max(61253, (arr_6 [i_0]))), (!var_13))))));
                            }
                        }
                    }
                }
                var_22 ^= (((((((arr_0 [10]) ? var_2 : -1758113108)) < ((-(arr_11 [1] [i_1] [i_1] [i_0]))))) ? ((-(arr_2 [10] [10]))) : (((!(arr_9 [i_0] [i_1] [i_1]))))));
                arr_17 [i_0] [i_0] [i_1] = ((((((((-(arr_3 [i_1]))) == (arr_5 [i_0] [i_0] [i_0]))))) ^ (((arr_0 [i_0]) & (((var_14 ? var_4 : var_10)))))));
            }
        }
    }
    var_23 += var_8;
    var_24 = -135;
    var_25 ^= ((var_0 | (!var_12)));
    #pragma endscop
}
