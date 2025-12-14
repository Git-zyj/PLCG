/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_17, ((min(2147483647, (~var_9))))));
    var_19 = ((((max(var_15, var_6))) ? 3015946534 : var_17));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((-var_14 ? (((!(~var_16)))) : (arr_4 [20] [i_1] [i_0]))))));
                    var_21 = (max(((min(1, var_3))), var_13));
                }
            }
        }
    }
    var_22 = ((((max(var_6, var_5))) ? ((((max(var_9, 1)) ? var_1 : var_10))) : ((var_11 ? (var_8 & var_2) : 1))));
    #pragma endscop
}
