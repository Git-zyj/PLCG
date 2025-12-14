/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 *= var_1;
                var_12 = (min(var_12, var_3));
                var_13 = (((((max(13, (arr_3 [i_0] [i_1]))))) <= ((max(51, var_1)))));
            }
        }
    }
    var_14 = (max(((var_5 ? var_6 : var_0)), var_6));
    var_15 = var_4;
    #pragma endscop
}
