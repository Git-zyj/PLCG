/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((var_0 ? var_3 : var_9)) * (142 <= var_5)))) <= ((var_9 ? ((var_0 ? var_2 : var_8)) : var_9))));
    var_11 = (max(var_0, var_4));
    var_12 = (var_3 << ((((var_3 ? var_4 : ((var_1 ? 0 : var_1)))) - 2960548835)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = var_1;
        var_14 = 243;
        var_15 = (((((var_4 ? var_8 : 255)) << (2969570584 - 2969570578))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 += (((((var_8 && (arr_4 [i_1])))) << (((((arr_4 [i_1]) ? (arr_4 [i_1]) : var_9)) - 119))));
        var_17 &= ((((((min(var_0, 13)) / -946493792))) ? ((((((1 ? 237 : var_5))) == (((arr_4 [i_1]) ? 14 : var_4))))) : (((!(arr_4 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_18 = (max(10047967030529668753, 1860486702766933016));
                    var_19 = var_7;
                    var_20 = (~(((((arr_5 [i_2] [i_1]) * 18446744073709551615)) * (arr_5 [i_2] [i_2]))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = ((-(!298465983)));
                        arr_13 [i_3] [i_3] [i_3] [i_2] [i_3] [i_1] = var_9;
                    }
                }
            }
        }
    }
    var_22 = min(var_1, var_3);
    #pragma endscop
}
