/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [9] [i_1] [1] = (max(((var_6 ? var_13 : -9427)), -9427));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = 1182251178;
                                arr_14 [i_0] [i_1] [21] [i_3] [21] = ((var_5 ? (((((min(var_3, 31))) ? (arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) : -9427))) : (((arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 2] [19] [i_2 - 2]) ? (arr_8 [i_2] [0] [i_2 + 3] [i_2] [i_2 - 2]) : var_0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(716065679, 196));
    var_16 -= ((((var_1 & (~var_3))) | var_3));
    #pragma endscop
}
