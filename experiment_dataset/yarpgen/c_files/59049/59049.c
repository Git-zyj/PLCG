/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_0, var_1));
    var_18 -= min((((((4012562314 ? var_2 : 0)) & ((max(65525, 10)))))), (0 & var_8));
    var_19 &= (((((-((var_5 ? -640658605 : var_13))))) ? (+-4016793225) : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 ^= (max((((var_10 + 0) ? -var_8 : 18)), ((max((arr_1 [i_0]), ((min((arr_0 [i_0] [i_0]), -20))))))));
        var_21 = (min(((12288 ? ((var_9 ? var_9 : var_0)) : (arr_0 [i_0] [i_0]))), ((((arr_1 [i_0]) / (arr_1 [i_0]))))));
        var_22 = (min((((arr_1 [i_0]) ? var_0 : var_5)), ((max((arr_1 [i_0]), 65515)))));
        var_23 ^= -1789397384576340064;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_24 = ((+((min((arr_3 [i_1]), (arr_3 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_25 = (min(var_25, ((((((((max(var_3, 285268059))) ? var_5 : var_11))) ? 1073709056 : (max(-65519, (((arr_5 [i_3]) ? var_12 : var_16)))))))));
                    arr_13 [2] = (arr_7 [5] [5] [i_3]);
                    arr_14 [i_1] [i_1] [1] [i_3] = -19;
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_26 = ((+(((((arr_15 [i_4 + 1]) ? 3039537487 : var_4)) >> (((max((arr_15 [i_4]), (arr_15 [i_4]))) + 294325290810965895))))));
        var_27 = ((((((((var_1 ? var_4 : 1895504217))) ? (65520 != 236) : 7214505419533429242))) ? (min(var_3, var_11)) : ((((!(arr_16 [i_4])))))));
        var_28 = ((max(15, ((var_6 ? 3266 : (arr_16 [i_4]))))));
        var_29 = 240;
        var_30 ^= (((-8115687315654671015 ? (((var_1 ? 111 : (arr_16 [6])))) : (max((arr_16 [4]), (arr_15 [i_4 - 1]))))));
    }
    #pragma endscop
}
