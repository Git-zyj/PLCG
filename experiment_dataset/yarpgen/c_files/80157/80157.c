/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((607198886 ? ((max(var_9, var_3))) : ((var_4 ? var_10 : var_4)))) - (min((var_4 * var_3), (var_4 - -607198873)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 += var_2;
                arr_5 [i_0] [i_0] [i_0] = var_6;
            }
        }
    }
    #pragma endscop
}
