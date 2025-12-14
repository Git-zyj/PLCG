/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 ? (((((((1859783931 ? 1859783931 : var_8))) && (((var_0 ? var_10 : var_8))))))) : (max(var_2, (((var_6 ? var_7 : var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max((arr_0 [i_0] [i_0]), (((~var_2) ? (arr_0 [i_1] [i_0]) : -111)))))));
                arr_7 [i_1] = (-668006008 ? (((((384 ? (arr_5 [i_1] [i_1]) : 1554736025))) ? 1859783931 : 65530)) : (arr_5 [i_0] [i_0]));
            }
        }
    }
    #pragma endscop
}
