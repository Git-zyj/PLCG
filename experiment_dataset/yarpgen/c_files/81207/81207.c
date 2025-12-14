/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 ? var_13 : var_11));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 ^= ((-(arr_6 [i_1] [18])));
                    arr_8 [i_0] [i_1] [i_0] = (((((min(var_2, var_14))) ? (max(var_18, (arr_7 [i_0] [i_0]))) : var_16)));
                    arr_9 [i_0] = ((!((((arr_2 [i_0]) ? ((var_7 ? 55040 : 49784)) : 108)))));
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = ((var_7 >> (((min(var_0, (max(var_18, var_13)))) - 4130401865607731737))));
    var_23 = var_13;
    #pragma endscop
}
