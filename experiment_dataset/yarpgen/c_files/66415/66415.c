/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = ((((max((var_5 ^ -5500), (var_9 && var_1)))) ? var_4 : 39486));
    var_12 = (max(var_12, (((var_9 ? (((((var_6 ? var_4 : var_1))) ? 5504 : var_5)) : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (max(var_13, 458752));
                var_14 = 992;
            }
        }
    }
    #pragma endscop
}
