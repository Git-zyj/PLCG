/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_2 ? var_2 : var_0))) ? ((var_6 ? var_3 : var_2)) : ((var_3 ? var_3 : var_8))))) ? var_3 : ((var_2 ? (((var_3 ? var_9 : var_2))) : ((var_0 ? var_4 : var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = ((((((((var_1 ? var_0 : var_10))) ? ((32752 ? 32752 : 0)) : var_10))) ? (((var_2 ? var_10 : ((var_2 ? var_3 : var_7))))) : var_4));
                    var_13 += ((((((((var_4 ? var_6 : var_10))) ? var_1 : (((var_1 ? var_0 : var_0)))))) ? (((((var_0 ? var_0 : var_3))) ? var_1 : ((var_2 ? var_5 : var_1)))) : ((((((var_4 ? var_8 : var_7))) ? ((var_0 ? var_2 : var_10)) : var_2)))));
                }
            }
        }
    }
    var_14 = ((((((((var_9 ? var_8 : var_8))) ? ((var_2 ? var_6 : var_9)) : (((8066828063160834155 ? -85 : 1730562998)))))) ? var_3 : var_5));
    #pragma endscop
}
