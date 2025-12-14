/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88153
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
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (0 || 51);
                                arr_11 [i_4] [i_3] [i_0] [i_0] [i_0] = (((-(arr_7 [i_2] [i_0] [15]))));
                                var_16 = (((max(var_0, (arr_0 [i_2]))) << ((((((((-52 ? var_3 : var_13)))) + 86)) - 8))));
                            }
                        }
                    }
                    var_17 = ((((!(arr_2 [i_0] [i_0]))) ? ((var_13 ? (arr_2 [i_0] [i_1]) : var_11)) : (max((arr_2 [i_0] [i_1]), 4611686018427387840))));
                }
            }
        }
    }
    var_18 = var_10;
    var_19 *= var_8;
    var_20 = ((var_4 ? ((((var_7 || (((var_9 ? -23223 : var_13))))))) : (max(var_4, (min(224, var_11))))));
    #pragma endscop
}
