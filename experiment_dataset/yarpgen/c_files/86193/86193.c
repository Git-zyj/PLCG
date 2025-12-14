/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_0 ? (((var_6 ? var_6 : var_1))) : (max(var_3, var_0)))), var_7));
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min((max((~var_6), (min(var_8, var_4)))), (((var_3 ? (min(var_1, var_0)) : ((max(var_7, var_2))))))));
                arr_4 [i_0] = (max((min(var_3, (min(var_3, var_0)))), ((1953998564 ? 396932149 : -99731554))));
                var_13 = (max(((min(var_8, (((var_7 ? var_9 : var_9)))))), (max(var_6, (~var_4)))));
                var_14 = ((!((min((min(var_9, var_6)), ((min(var_5, var_7))))))));
            }
        }
    }
    var_15 |= (((((var_2 ? (min(var_8, var_4)) : (max(var_5, var_4))))) ? (max(var_1, (min(var_7, var_6)))) : (min(((var_9 ? var_1 : var_6)), ((var_8 ? var_1 : var_6))))));
    #pragma endscop
}
