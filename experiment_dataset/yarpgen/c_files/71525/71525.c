/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_4));
    var_21 = var_19;
    var_22 = 102;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_23 = (max((max((496 & 255), (max(-896684802088737090, (arr_0 [i_0]))))), ((((16777208 ? 127 : 65281))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (arr_0 [i_0 - 1]);
            var_24 *= (arr_3 [i_0] [0] [i_0]);
        }
        var_25 = (min(var_25, ((max((max(65281, -22)), 255)))));
        var_26 -= max((((arr_0 [i_0 - 1]) ? 263 : (arr_2 [i_0 + 1]))), (((!(arr_0 [i_0 - 1])))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = ((14336 ? ((1623 ? ((max(65281, -7813))) : -30520)) : ((-(((-32767 - 1) ? 65273 : (-32767 - 1)))))));
        var_27 = (max((arr_6 [i_2]), (arr_6 [i_2 - 2])));
    }
    var_28 = ((((((((max(292, 65272)))) - (max(var_9, var_0))))) ? (((max(4294967295, var_8)))) : (max(((max(252, 0))), (max(var_0, -32755))))));
    #pragma endscop
}
