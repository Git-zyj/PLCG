/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [8] [i_1] = (((var_7 ? (-32757 + 63) : var_9)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = ((((((arr_7 [i_1 + 1] [i_2] [i_2]) ? ((min((arr_8 [i_3] [i_2] [i_1 - 1] [i_1] [i_0] [i_0]), (arr_0 [i_2])))) : (arr_4 [i_1 - 1])))) ? var_7 : -1));
                            var_14 = var_6;
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((max(-2, var_11))) ? var_1 : var_8));
    var_16 = (min(var_3, var_7));
    var_17 ^= (((var_3 ? 203 : ((max(var_3, var_12))))));
    #pragma endscop
}
