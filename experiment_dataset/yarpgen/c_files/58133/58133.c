/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((((max(var_3, var_6))) ? (1284646407 / var_6) : ((min(6014, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((((-((2896 ? 0 : var_1))))) < (((var_0 < 2146585244523464608) ? (min(var_5, var_7)) : ((max(var_1, 0)))))));
                arr_6 [i_1] [i_1] = ((48 >= ((var_2 ? (var_2 * var_4) : var_6))));
                var_13 = (min(var_13, (!-111)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_14 += var_8;
        arr_9 [i_2] = (var_3 % 3459486132);
        var_15 = (min(152, 2146585244523464608));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_16 += (min(((((((min(var_9, var_8)))) < 0))), (((!-2147483634) ? (var_5 != var_6) : 835481167))));
        arr_12 [i_3] [i_3] = var_10;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_17 = (~var_2);
        var_18 = ((var_0 ? (((~3459486132) ? -773453181 : 4294967276)) : ((max((((arr_2 [i_4]) / 12936)), var_0)))));
        var_19 = ((((((((3459486132 - (arr_0 [i_4])))) == 16300158829186087026))) * ((((var_8 != 2) && ((((-9223372036854775807 - 1) ? var_1 : var_8))))))));
        arr_15 [i_4] [i_4] = var_0;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_18 [i_5] = var_2;
        var_20 = (((((0 && (~255)))) == (min(var_5, (~var_3)))));
        arr_19 [i_5] [i_5] = ((((((((var_5 ? 0 : var_10))) ? ((max(var_10, (arr_10 [i_5] [i_5])))) : (min(8394300393952212179, var_1))))) ? (min(((var_9 ? var_2 : -2151326235275982341)), ((((arr_11 [i_5]) ? var_9 : var_8))))) : (((-1417851538 ? (((max(var_8, (arr_16 [i_5]))))) : 1914276693)))));
    }
    var_21 = var_10;
    #pragma endscop
}
