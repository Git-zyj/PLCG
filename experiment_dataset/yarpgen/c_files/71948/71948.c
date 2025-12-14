/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(var_11, (var_11 % var_16))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_21 += (arr_2 [i_3 - 2] [i_1]);
                        arr_11 [i_0] [i_1] [i_1] = (((arr_10 [i_3 + 1] [i_1]) + (((-(arr_4 [i_1] [i_2] [i_3 + 1]))))));
                        var_22 = var_3;
                        var_23 = ((-((((arr_9 [i_1]) != -3347196588688988273)))));
                        var_24 = -3347196588688988273;
                    }

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_25 = (((arr_0 [i_2]) < 3347196588688988272));
                        arr_16 [i_1] [i_1] = (((var_14 < var_18) ? (arr_8 [i_1] [i_2] [i_1] [i_1]) : (arr_9 [i_1])));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((((255 | (arr_13 [8] [i_0] [i_0] [i_2] [i_4]))) << (((((((arr_4 [i_1] [i_2] [6]) ? (arr_10 [i_1] [i_1]) : -20)) + 2012104729912171378)) - 25))))) : (((((255 | (arr_13 [8] [i_0] [i_0] [i_2] [i_4]))) << (((((((((arr_4 [i_1] [i_2] [6]) ? (arr_10 [i_1] [i_1]) : -20)) + 2012104729912171378)) - 25)) - 5900774758461814961)))));
                        var_26 = 241;
                        arr_18 [14] [i_1] [i_1] [i_1] [i_4] = ((33410 ? -5053844959835762183 : 33411));
                    }
                }
            }
        }
        arr_19 [i_0] = (((arr_10 [i_0] [i_0]) ^ (((arr_5 [i_0] [i_0]) ? 255 : (arr_14 [i_0] [i_0] [i_0])))));
        arr_20 [i_0] = (arr_3 [i_0] [1]);
        var_27 = (((-3 > 120) < var_2));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = (arr_14 [i_5] [i_5] [i_5]);
        var_28 = (((arr_12 [i_5] [i_5] [4] [i_5]) >= (((arr_3 [i_5] [i_5]) ? var_14 : (arr_6 [i_5])))));
        arr_24 [i_5] = arr_12 [i_5] [i_5] [i_5] [18];
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_29 *= (~18);
        arr_27 [i_6] [i_6] = var_17;
        arr_28 [i_6] [i_6] = (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]);
    }
    var_30 &= var_11;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_31 [i_7] = var_2;
        arr_32 [i_7] = ((-((((arr_29 [i_7] [i_7]) >= (arr_29 [0] [i_7]))))));
    }
    #pragma endscop
}
