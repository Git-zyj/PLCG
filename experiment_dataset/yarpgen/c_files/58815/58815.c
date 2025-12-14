/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [11] [i_0] = ((-(((arr_4 [i_0 + 1] [i_0]) ? (arr_4 [i_1 + 3] [i_0]) : var_2))));
                    var_10 |= ((((((((-11684 / (arr_7 [i_0 - 1] [i_1] [i_2] [i_2])))) ? 15 : 32))) | (arr_3 [i_0 - 2] [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = (max((49 || -1), (min(var_3, ((64 ? var_4 : var_3))))));
                                var_11 = (~var_0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 ^= max((((var_0 ? var_1 : var_1))), (((max(var_7, 16197511500893191915)))));
    var_13 = var_5;
    var_14 = (max((var_6 >= var_8), ((var_3 ? (((var_7 ? var_1 : 21))) : var_9))));
    var_15 = ((!((min(var_9, (65535 / 31))))));
    #pragma endscop
}
