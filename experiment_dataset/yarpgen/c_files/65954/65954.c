/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -192;
    var_19 = ((~((var_12 ? (((155 ? var_13 : var_2))) : var_4))));
    var_20 = (min(((min(373444957, var_3))), var_14));
    var_21 = ((!(var_14 && var_16)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [1] [i_0] = ((max(var_8, (arr_0 [i_0]))));
                var_22 = ((((min((arr_5 [i_0] [i_1] [i_1]), (min((arr_6 [10] [i_1] [i_1]), 27628))))) ? -5339867222879001481 : ((6847815542425700946 << (((arr_2 [i_0] [i_0]) - 1520383007848650614))))));
            }
        }
    }
    #pragma endscop
}
