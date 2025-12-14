/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((23993 ? (min((1 / 116), ((max(0, var_2))))) : (var_15 / var_10)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 = ((!(1 / 96)));
        var_18 = -981189335266161921;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = var_14;
            var_20 = ((1 ? 5638243583703216161 : var_5));
        }
        var_21 = ((var_7 ? 118 : 2188));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = ((min(-4294967295, (9 + 30))));
        var_23 = (84 | var_6);
        var_24 = (max(var_24, ((min(-32741, -1)))));
    }
    #pragma endscop
}
