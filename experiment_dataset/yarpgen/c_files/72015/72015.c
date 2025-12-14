/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((max(var_10, var_7))) ? ((max(0, var_4))) : ((var_7 ? (((max(-1, 0)))) : ((var_2 ? var_10 : var_12))))))));
    var_17 = (((((31744 ? 1 : 3721387380))) >= (max((((var_12 ? 2041373581 : var_0))), var_3))));
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 |= (max(((max(13524, (arr_4 [8])))), ((var_3 ? var_8 : (max((arr_1 [6]), 3721387381))))));
                arr_6 [i_1] = ((573579915 ? (((max((arr_3 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1 - 1]))))) : ((0 ? 3721387381 : -4))));
                arr_7 [i_0] [i_1] = 18847;
            }
        }
    }
    #pragma endscop
}
