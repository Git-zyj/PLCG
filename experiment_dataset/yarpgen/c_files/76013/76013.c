/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = 13036589181497675462;
        var_19 = ((((((((7221973054079276998 ? var_11 : var_17))) ? ((((arr_1 [i_0] [i_0]) == 23762))) : (((arr_1 [i_0] [i_0]) + var_15))))) ? (((!(var_6 == var_12)))) : var_1));
        var_20 = -23778;
        var_21 = (((((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10))) ? (((arr_1 [i_0] [i_0]) ? var_9 : 8094521006571472095)) : var_3))) ? (((~(65237 != var_7)))) : -8094521006571472095));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 -= (((((((var_11 ? 150 : var_16))) & (((arr_2 [i_1]) ? var_10 : (arr_2 [i_1]))))) + ((((((6444082076153386029 == (arr_3 [i_1] [i_1])))) % ((69 ? 515 : (-32767 - 1))))))));
        var_23 = (((65530 ? var_3 : ((var_10 ? var_3 : var_11)))));
    }
    var_24 = var_2;
    var_25 = (((((32760 ? 18224 : 14191))) ? (max(-3719, (~-1))) : (((!(((-14185 ? var_13 : 105))))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_26 += ((-((var_4 * ((var_1 * (arr_6 [i_3])))))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_27 = ((((-6212 ? 255 : -var_8)) << (((((((var_13 ? 3719 : (arr_10 [i_2])))) ? ((var_6 ? (arr_9 [i_2] [i_2] [i_4]) : var_1)) : (arr_8 [i_3]))) - 16971))));
                            var_28 = var_7;

                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                var_29 *= ((var_5 && ((((var_8 ? var_7 : var_16))))));
                                var_30 = (((((((((arr_2 [i_5]) != var_14))) * ((6917529027641081856 ? 94 : (-32767 - 1)))))) ? (arr_12 [i_6 + 1]) : (arr_10 [i_2])));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                var_31 &= (((2044 && -25064) ? ((10352223067138079511 ? (arr_2 [i_5]) : var_4)) : (arr_15 [i_7] [i_2] [i_4] [i_3] [8])));
                                var_32 *= ((((~(arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]))) == (((arr_0 [i_7]) ? 5 : var_2))));
                                var_33 = 49152;
                            }
                            var_34 += (((((((var_2 << (((arr_13 [i_2] [i_3] [i_3] [i_2] [i_3] [i_2]) - 18631)))) ^ ((~(arr_9 [i_2] [i_2] [i_2 - 2])))))) ? ((15520 ? (((1091 ? 15521 : var_15))) : (var_12 * 1251633565984229913))) : ((((((-(arr_10 [i_4 - 4])))) ? ((var_9 ? 26534 : 4095)) : (-9770 ^ var_8))))));
                        }
                    }
                }
                var_35 = ((((((((var_11 ? var_5 : 43856))) ? (-29240 == var_10) : -32645))) ? -1750 : (((((145 ? var_5 : (arr_7 [i_3])))) ? 75 : var_13))));
            }
        }
    }
    #pragma endscop
}
