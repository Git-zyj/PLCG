/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [10]) : (((arr_2 [i_0] [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_1 [9] [i_0])))));
                var_18 -= var_1;
            }
        }
    }
    var_19 = var_3;
    var_20 = var_10;
    var_21 *= (min(((max(var_7, (-12 * var_9)))), var_12));
    #pragma endscop
}
