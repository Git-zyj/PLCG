/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (!var_1);
    var_19 |= (var_12 ? (((-1591873655336005629 < (((-9223372036854775807 - 1) & -2022082609))))) : -1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (~(((var_2 != (arr_0 [i_0])))));
                var_20 |= ((((min(1, -996962536))) ? ((0 ? -1 : 1)) : 696047372));
                var_21 = -0;
                arr_6 [i_0] [12] [i_1] = var_14;
            }
        }
    }
    #pragma endscop
}
