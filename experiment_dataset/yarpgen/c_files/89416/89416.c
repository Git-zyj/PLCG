/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 -= min(var_16, (min((max(-3805710082010455942, -32518)), var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [2] [i_2] [i_2] = (max((((((var_14 ? var_4 : (arr_1 [1])))) ? (arr_6 [i_0] [i_1] [i_2 - 3]) : (((var_14 && (arr_2 [i_0])))))), (min((arr_1 [i_1]), ((var_1 ? var_3 : (arr_5 [i_2] [i_2] [4])))))));
                    var_19 = (max(var_19, (~var_11)));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_2] = (((max((arr_4 [i_0] [i_1]), 1))));
                }
            }
        }
    }
    #pragma endscop
}
