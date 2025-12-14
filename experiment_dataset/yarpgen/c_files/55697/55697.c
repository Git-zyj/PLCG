/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = 5;
                                var_22 = ((min(1, (arr_10 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 1]))));
                                var_23 = ((7339190983477929504 ? 2147483647 : 4294967292));
                                arr_11 [8] [i_1] [i_1] [i_1] [6] [i_1] &= (((((-(-13497 | 32255)))) ? ((-1744885759 ? -2147483638 : 32)) : (((var_12 ? ((((arr_0 [i_1]) || (arr_8 [1] [i_1])))) : (15295 / 2147483647))))));
                            }
                        }
                    }
                }
                var_24 -= (min(6261, (arr_8 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            var_25 = 9;
                            var_26 = (arr_10 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]);
                            var_27 &= (max((((arr_14 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]) & 1)), (((!(((var_13 ? (arr_9 [i_0] [i_1] [i_1] [i_6 + 1] [i_6 + 1]) : (arr_4 [i_0])))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
