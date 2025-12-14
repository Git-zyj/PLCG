/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (max(var_17, ((((var_9 * var_5) != (var_4 > var_11))))));
        var_18 = (min(var_18, (18 == 209)));
        var_19 = (min(var_19, (-5331 && -32748)));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_20 = (((((min(var_8, var_5)))) > (((min(var_13, var_7))))));
        var_21 = (((((((var_14 + var_4) == (var_12 - var_7))))) - ((var_14 >> ((((min(-94, -91))) + 107))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 = (max(var_22, ((min((min(-32761, -245)), (((4474393274796436921 && -29295) + -95)))))));
                    var_23 += var_1;
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_24 = (((min((min(var_0, var_3)), (var_9 & var_15))) >= ((((min(3875190392946666708, -8334746810111591984)))))));
        var_25 = (max(var_25, ((min(var_14, (min((var_12 / var_7), var_13)))))));
        var_26 = (181 <= 3248);
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_27 = ((var_6 - (-var_14 + var_10)));
        var_28 += (min(var_12, (var_13 > var_14)));
        var_29 &= var_13;
        var_30 = (min(var_30, ((((((min(var_10, var_11)) / (var_8 & var_10))) > (((min(var_4, var_7)))))))));
    }
    var_31 = (((((~var_3) ^ (min(var_5, var_3)))) * (((min(var_14, var_11)) >> (var_8 > var_11)))));
    #pragma endscop
}
