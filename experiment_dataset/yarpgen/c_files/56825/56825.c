/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (min(var_15, var_3));
                arr_4 [i_0] [i_0] [i_1] = (min((arr_0 [i_0]), -var_12));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_16 = ((var_11 ? ((-884237055 ? 20858 : (arr_6 [i_3 - 4]))) : var_1));
                    var_17 = (max(var_17, var_5));
                    var_18 = max((arr_2 [i_4]), (arr_1 [i_3] [i_3]));
                    arr_13 [i_3] = (arr_11 [i_3]);
                    var_19 = var_8;
                }
            }
        }
    }
    var_20 = (min(var_20, var_7));
    #pragma endscop
}
