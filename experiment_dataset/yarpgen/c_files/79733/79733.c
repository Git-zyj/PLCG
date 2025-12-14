/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 2] = -87;
        arr_3 [i_0] = ((~(arr_1 [i_0 - 3])));
        var_19 &= var_14;

        for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((((min((arr_9 [i_0 + 2] [i_3 + 2] [i_2]), var_11))) ^ (arr_9 [i_0] [i_3 + 3] [i_2 - 1])));
                        var_20 = ((+(((arr_10 [i_0] [i_0] [i_0 - 3]) ? (arr_11 [i_0] [i_0] [i_0 - 3] [i_3] [i_3 + 1] [i_3 + 1]) : (arr_11 [i_0] [i_0] [i_0 - 3] [i_2 - 1] [i_2 + 1] [i_3])))));
                        var_21 = (min(var_21, (((((((max((arr_8 [i_0] [i_0]), 1385640385581175257))) ? (arr_8 [i_1 + 1] [i_1 - 1]) : (!-3804241455478112804)))) ? 181239519021199640 : -181239519021199640))));
                        arr_13 [i_3 + 2] [i_3] [i_2] [i_1] [i_1] [i_0 - 3] = ((+(min(((var_2 ? (arr_0 [i_2 + 1]) : var_16)), (!var_15)))));
                    }
                }
            }
            var_22 = ((((((arr_11 [i_1 - 2] [i_1 - 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 3]) ? (arr_11 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2] [i_0 + 1] [i_0 - 3]) : (arr_11 [i_1 - 2] [i_1 + 2] [i_1] [i_1] [i_0 - 3] [i_0 + 3])))) ? ((-5445026880379505662 - (arr_11 [i_1 - 1] [i_1 + 2] [i_1] [i_0] [i_0 + 3] [i_0 - 3]))) : -5445026880379505663));
            arr_14 [i_0] [i_0] [i_0] = ((((((arr_0 [i_0 + 2]) + 9223372036854775807)) >> (((arr_10 [i_1 - 1] [i_0 - 3] [i_0 + 1]) - 2738414508)))) / ((min((arr_10 [i_1] [i_1] [i_0]), var_6))));
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_23 -= (min((arr_5 [i_4 - 2]), var_6));
            arr_19 [i_0] [i_4] = ((((min(-85, 63))) ? (max(-2147483584, var_16)) : (max((~var_12), ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4]) ? -85 : var_9)))))));
            var_24 += (min(((((-(arr_18 [i_0] [i_4 + 1] [i_0]))))), 5445026880379505663));
            var_25 += (arr_0 [i_0]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_5] [i_0] |= (((((var_10 ? (arr_7 [i_0] [i_0] [i_5] [i_5]) : (arr_17 [i_5 + 1])))) ? -2361209006334224960 : 28));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    {
                        var_26 = (((((~(arr_5 [i_7])))) ? (arr_1 [i_0]) : ((var_15 ? -5445026880379505662 : var_12))));
                        var_27 = (max(var_27, (arr_17 [i_7 + 1])));
                    }
                }
            }
            arr_28 [i_5] [i_0] [i_0] = (-(arr_16 [i_5 + 1] [i_5 - 2]));
            var_28 = var_1;
        }
        var_29 = (min(var_8, ((var_4 ? (arr_4 [i_0] [i_0 + 2]) : var_6))));
    }
    for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_30 = ((((var_4 ? (arr_9 [i_8 - 3] [i_8 - 1] [i_8 + 1]) : (arr_7 [i_8] [i_8] [i_8 - 2] [i_8 + 1])))) ? (min((arr_7 [i_8 + 3] [i_8] [i_8 - 2] [i_8 - 3]), (arr_7 [i_8] [i_8] [i_8 - 3] [i_8]))) : var_14);
        var_31 = -96;
        var_32 = ((var_15 ? -106 : -5445026880379505663));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_33 = ((~((max((arr_35 [i_9] [i_9]), var_16)))));
        arr_36 [i_9] = ((var_2 && (((((min(var_5, var_11))) ? var_15 : (~-2147483585))))));
        var_34 = (min(var_34, -108));
        var_35 = (max(var_35, (((((min(var_2, (arr_32 [i_9])))) ? ((((!var_6) * ((((arr_33 [i_9] [i_9]) || (arr_34 [i_9]))))))) : (arr_33 [i_9] [i_9]))))));
    }
    #pragma endscop
}
