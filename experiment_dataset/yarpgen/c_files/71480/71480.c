/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((var_0 ? ((5386810124879879538 ? 64151 : var_0)) : 24576)), (((((2487899486 ? 62287 : 1))) ? var_15 : ((var_14 ? var_6 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 ^= ((62053 - (3497 || var_5)));
                var_22 ^= (arr_2 [i_0]);
            }
        }
    }
    var_23 = (max(var_23, var_12));
    #pragma endscop
}
