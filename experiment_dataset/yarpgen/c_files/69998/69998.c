/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] [i_1] = (((!var_4) * var_2));
                var_10 = var_0;
                arr_7 [i_0] [i_1] [8] &= (max(((-(~var_9))), (((var_6 != (arr_1 [4]))))));
                var_11 = (((((!407258157) == -7488)) ? ((((!2144503405) < (var_9 & var_3)))) : 127));
            }
        }
    }
    var_12 = (max(var_12, var_8));
    #pragma endscop
}
