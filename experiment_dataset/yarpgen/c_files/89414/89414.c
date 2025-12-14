/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((16826 / -16827) == ((((var_3 ? (arr_2 [i_0] [i_0] [14]) : 685)))));
                var_15 = var_4;
            }
        }
    }
    var_16 = ((((((178 ? -16826 : -16826)))) ? ((var_12 ? var_13 : (!var_9))) : var_6));
    #pragma endscop
}
