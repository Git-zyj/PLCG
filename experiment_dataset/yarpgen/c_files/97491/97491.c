/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 ^= ((7128781005391534931 ? 11499356930635042320 : 208));
    var_21 = max((((366175654 ? ((max(208, var_15))) : (~48)))), (((var_17 + var_0) ? (228 / var_2) : ((min(var_1, var_18))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_22 = (-(arr_1 [i_0 + 3] [i_0]));
        var_23 &= (-74747206245642297 < 28);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_24 = (arr_1 [i_1] [i_1]);
            var_25 = (max((arr_6 [i_2 + 1] [i_2 + 1]), (arr_7 [i_1] [i_1])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_26 = (~222);
            arr_10 [i_1] [i_1] = (((((((((arr_9 [9] [i_3]) % (arr_1 [i_1] [i_1]))) > ((var_3 ^ (arr_5 [i_1]))))))) * (min(208, 6947387143074509294))));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_13 [i_1] [i_3] [i_4] [i_3] = (6 ? (min((arr_5 [i_4]), (arr_8 [i_4] [i_3]))) : (((max(8066184420973809833, 208)) >> (15859228120034724668 - 15859228120034724641))));
                var_27 -= ((((((214 ? var_4 : 2219020444)) == 197)) ? (min((arr_4 [i_1]), (((-(arr_11 [i_1] [i_1] [i_1] [i_1])))))) : ((((1701216997 && var_14) ? (arr_7 [i_3] [i_4]) : (40 == 27))))));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_17 [i_4] [i_5] = -915789830;
                    var_28 = var_15;
                    var_29 = 1078657495;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_20 [i_1] [i_3] [i_4] [i_5] [i_5] = ((-var_6 ? (((arr_0 [i_4]) ? (arr_14 [i_4]) : 227)) : 55));
                        var_30 = arr_16 [i_4] [i_3] [i_3] [i_3] [i_3];
                        var_31 = (((((var_14 ? (((arr_11 [i_1] [i_1] [i_4] [i_5]) & (arr_4 [1]))) : ((((arr_11 [i_1] [i_3] [i_4] [i_5]) > var_1)))))) ? ((var_12 ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (arr_19 [i_1] [i_3] [i_3] [i_3]))) : 38));
                        var_32 = (min((arr_9 [i_6] [i_3]), var_7));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_33 = var_5;
                        arr_24 [1] [i_3] [i_4] [i_5] [i_7] = ((11499356930635042320 ? 203 : (arr_7 [i_1] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_34 = ((51 ? 1 : 40));
                        arr_27 [i_1] [i_4] [i_4] [i_1] [4] [i_8] [i_3] = (~3555779730292156617);
                        arr_28 [i_5] [i_4] = (arr_25 [i_4] [1] [i_4]);
                        var_35 = ((((arr_3 [i_1]) ? 14890964343417394999 : (arr_3 [i_1]))));
                    }
                }
            }
        }
        var_36 = (((arr_4 [i_1]) % ((~((-(arr_9 [i_1] [i_1])))))));
    }
    #pragma endscop
}
