/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4721896075556913606;
    var_18 = ((var_14 ? (((max(0, -65)))) : (min((((var_10 ? var_5 : 1))), (-5 / -9223372036854775806)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = (~1);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min(13391311932513747101, 1)))));
                                var_20 = (arr_15 [i_1] [1]);
                                arr_16 [i_3] [i_3] [i_2 + 2] [i_3] [i_4] [i_3] = 18032;
                            }
                        }
                    }
                }
                var_21 += 7438349476400146889;
                var_22 += (((((3 ? ((min(48795, (arr_11 [i_1 - 4] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) : (arr_7 [i_1 + 1])))) ? (max((3 / 15), (arr_8 [i_0] [i_1] [i_1 - 2] [i_0]))) : (((arr_13 [i_0] [6] [14] [i_1 - 3] [14]) << (((!(arr_4 [i_0] [i_1 - 3]))))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_23 = ((((arr_3 [i_5] [i_5]) | (((1048448 == (arr_15 [i_5] [i_5])))))));
        var_24 *= 536870912;
        arr_19 [i_5] = 224;
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_22 [i_6] = -8;
        arr_23 [i_6] = ((var_7 ? (((arr_20 [i_6]) ? var_15 : var_15)) : ((max((((-(arr_21 [i_6] [i_6 - 1])))), (max(255, 4256274571)))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_25 = (((max(15, (arr_26 [i_10] [i_7 + 2] [i_7 + 2] [i_6 + 1])))));
                                var_26 = arr_28 [i_6 + 1] [i_6 - 1] [17] [i_6 + 1];
                                var_27 = (min(5978, 2147483647));
                            }
                        }
                    }
                    var_28 += (((((((min((arr_28 [i_8] [i_7] [0] [i_6]), var_7))) << ((((127 ? 65535 : 30720)) - 65520))))) ? ((((max(var_1, -5090284146555562395))))) : (((arr_28 [i_6] [i_6 - 1] [1] [i_6 - 1]) ? -12 : 64))));
                    arr_32 [i_6] [i_7 + 4] [i_8] [i_6] = ((((min((arr_30 [i_6 - 1] [i_6 - 1] [i_6 - 1] [0] [i_6] [i_6]), (19624 | var_7)))) ? (max((arr_20 [i_6]), (((!(arr_30 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))) : -32757));
                }
            }
        }
        var_29 = ((-13196 <= ((((1800371477 & 186) % 30720)))));
        arr_33 [i_6] = -5090284146555562395;
    }
    var_30 += (max(32757, var_16));
    #pragma endscop
}
