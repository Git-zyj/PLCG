/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((var_5 >> var_7) ? ((max(909367327, var_2))) : ((-(max(var_10, -5239174846632413211)))))))));
                    var_14 = (min(var_14, (arr_4 [4] [i_2] [6])));
                    var_15 |= ((((~((1945179589 ? var_6 : var_0)))) >= var_12));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            {
                var_16 = (max(var_16, (((var_9 ? -1945179583 : (arr_6 [i_3] [i_4 - 2]))))));
                var_17 = (min(var_17, (((var_11 ? var_12 : (max(-1945179592, (arr_9 [i_4] [9] [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
