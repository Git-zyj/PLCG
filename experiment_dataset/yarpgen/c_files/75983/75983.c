/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((59 ? -25724 : 610449815));
    var_20 = (max(24484, 610449815));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 += min(var_17, ((var_5 ? (((arr_8 [2] [10] [i_0] [2]) ? var_17 : var_3)) : var_7)));
                    arr_9 [i_0] [i_1] [i_0] = (arr_1 [i_0]);
                    arr_10 [i_1] [1] [i_2] [i_2] = ((24504 ? 57111 : ((~(arr_4 [i_0] [i_0])))));
                    var_22 += (arr_6 [0]);
                }
            }
        }
    }
    #pragma endscop
}
