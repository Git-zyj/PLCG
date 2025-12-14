/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 || (((min(10601754998944304669, var_9))))));
    var_18 = ((((min(((-64 ? 37189 : var_0)), 9223372036854775791))) <= ((9223372036854775807 ? (var_4 || 64) : ((var_1 ? var_2 : var_2))))));
    var_19 = ((var_7 < ((((min(var_4, var_0))) ? ((var_5 ? var_16 : var_13)) : var_9))));
    var_20 = var_12;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 = (((2578509254 + ((min((arr_0 [i_0]), var_5))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_22 |= (max(((1463791546 ? 12321290205494873365 : (((var_12 ? var_13 : var_16))))), (min((arr_4 [i_0] [i_0] [20]), -9223372036854775791))));
                        var_23 = (((52481 % var_2) ? (((((min(122, var_10))) ? -127 : (111 + 65521)))) : (max(((((arr_5 [i_0]) || var_11))), (max((arr_5 [i_2]), (arr_2 [6])))))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((var_10 + (((((min(var_0, var_14))) ? (((var_6 ? (arr_1 [5]) : var_10))) : (max(var_8, var_16)))))));
                    }
                }
            }
        }
        arr_11 [i_0] = -183;
    }
    #pragma endscop
}
