/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max((min(((var_2 ? var_3 : var_4)), var_1)), (((-((var_8 ? var_8 : var_5)))))));
    var_11 = (~var_0);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (!3407269687);
        arr_5 [i_0] = (max(((min((!var_6), (131 <= 47429285)))), (-121 | 143)));
        arr_6 [i_0 + 1] &= ((0 | (((((-16 ^ 483232596) && ((max(var_1, (arr_1 [i_0 - 1]))))))))));
        var_12 = (min(((~(0 - var_5))), ((((var_9 & var_1) > 338361171)))));
        var_13 = (min(var_13, -73));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 &= (((((!(arr_8 [i_1] [i_1])))) <= ((2147483647 ? 1 : -444949466))));
        arr_11 [i_1] [i_1] = (arr_9 [i_1] [0]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = ((var_3 | (((arr_12 [i_2]) ? var_0 : -395226261088096075))));
        var_15 = (arr_9 [i_2] [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_16 = (min((arr_16 [i_4]), ((48 ? 7558277755168585994 : -115))));
                var_17 |= (arr_10 [i_4]);
                arr_22 [i_3] = 1109536286;
                var_18 = (((arr_12 [i_3]) / ((max(1, 40)))));
                arr_23 [i_3] [i_3] = var_5;
            }
        }
    }
    #pragma endscop
}
