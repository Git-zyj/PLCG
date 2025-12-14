/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1 + 1] [i_1 + 1] [i_1] [8] &= var_4;

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_13 = ((~((1 << (var_2 - 45)))));
                            arr_13 [i_4] [i_3] [i_1] [i_1 + 2] [i_0] = (9055217101695583801 ^ 17783716678224084255);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_1] = (((arr_6 [0] [i_1 + 1]) ^ (arr_6 [i_1] [i_1 + 1])));
                        }
                        var_14 *= ((-((max(var_7, (arr_11 [i_1 + 2] [i_0]))))));
                    }
                    var_15 = 1;
                }
            }
        }
        var_16 = ((-((max((arr_2 [i_0] [i_0]), (arr_2 [7] [i_0]))))));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] = (var_4 + var_9);
        var_17 = (-var_4 != 1);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_22 [i_6] = ((~((-(arr_21 [i_6])))));
        var_18 = ((26345 ? var_11 : (~-9055217101695583801)));
        arr_23 [i_6] [i_6] = (var_8 + -1271290111);
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_27 [i_7] &= (min((arr_15 [i_7]), 1));
        var_19 = -1271290111;
        var_20 = max(-20101, -25393);
        var_21 = (((((((~var_2) + 2147483647)) << (((arr_24 [10] [i_7]) - 7860604544319642371)))) * (((9055217101695583801 == ((9055217101695583801 ? var_5 : (arr_21 [i_7]))))))));
    }
    var_22 = ((((((var_6 * var_11) >= (var_4 & var_2)))) ^ 20116));
    var_23 = ((((((var_1 - -3245990123266494421) ? -4286 : ((max(38234, var_6)))))) ? (((max(11, var_1)))) : (((var_12 != ((var_2 ? 7705 : var_1)))))));
    #pragma endscop
}
