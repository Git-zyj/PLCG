/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_7 ? ((((var_5 | var_2) ? var_5 : (!var_7)))) : ((-((var_8 ? var_7 : var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_4] [i_0] = arr_4 [i_0];
                                var_11 = (arr_2 [i_0]);
                            }
                        }
                    }
                    var_12 = (max((arr_5 [i_1] [i_0]), (arr_1 [i_0])));
                    var_13 = (min(var_13, (((~((0 ? -105 : (max((arr_6 [i_0] [i_0] [i_2]), 0)))))))));
                }
            }
        }
    }
    #pragma endscop
}
