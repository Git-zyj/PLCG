/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-2504184988071720907 | (min(var_4, var_18))))) ? var_11 : ((((var_18 ? var_3 : var_12)) ^ var_16))));
    var_20 = (((var_1 & var_7) ? (~var_0) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((~252) ? (~var_6) : var_0));
                arr_6 [i_0] [i_0] = (max((((arr_2 [i_1 - 1]) ? var_15 : (arr_2 [i_1 - 1]))), (((arr_2 [i_1 - 3]) * (arr_2 [i_1 - 1])))));
                var_21 = ((~(min((~4294967295), (~var_4)))));
            }
        }
    }
    #pragma endscop
}
