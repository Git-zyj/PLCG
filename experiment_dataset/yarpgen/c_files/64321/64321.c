/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (((((((-(arr_0 [5]))) - -7918863422509126617))) ? var_6 : (arr_0 [2])));
                var_21 = (-24700 < 1);
            }
        }
    }
    var_22 *= (((((0 ? 1677921770 : 1))) ? (((1677921770 ? -1152626173 : 5977))) : var_17));
    var_23 = (((7918863422509126617 | var_7) & var_6));
    #pragma endscop
}
