/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 7;
    var_19 = (max(var_19, ((min(var_4, (((((var_10 ? -10 : var_10)) > (~0)))))))));
    var_20 &= ((((-((min(0, var_13))))) > (max(var_16, 28047))));
    var_21 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 ^= -28045;
                    var_23 = (max(var_23, ((min((5216832069168940076 ^ 1096842839584753589), 24)))));
                    var_24 += (((((var_10 ? ((((arr_0 [i_0] [i_1]) == (arr_3 [i_1] [i_1])))) : (~-7)))) ? (min((arr_1 [i_0 + 1]), var_17)) : (53 & var_3)));
                }
            }
        }
    }
    #pragma endscop
}
