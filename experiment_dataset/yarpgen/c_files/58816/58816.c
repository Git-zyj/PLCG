/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((max(((((arr_2 [i_0 - 1] [i_1]) ? -1 : 1))), (((arr_3 [i_1] [i_0]) | 26249)))) < 26270));
                arr_5 [i_0] = (min((((var_5 > 8367626440999838397) ? ((2 ? -3759764686535993423 : 65535)) : (arr_3 [i_0 + 2] [i_0 + 1]))), ((min(((max(26249, -26268))), var_1)))));
            }
        }
    }
    var_15 = ((((((min(var_8, var_5))) ? (0 < var_5) : (-26268 & var_5))) - (max(((var_9 ? var_5 : 34013)), -280516125))));
    #pragma endscop
}
