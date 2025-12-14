/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 -= ((-(((((var_5 ? var_9 : var_9)) == 1)))));
                arr_7 [1] [i_1] [i_1] = ((~((max((min(132, var_3)), 1)))));
                var_13 = var_0;
            }
        }
    }
    var_14 = ((~((max(var_2, 0)))));

    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_15 *= min(((((arr_8 [i_2 - 1]) >= 1013085203))), (min((arr_10 [i_2 + 4] [i_2 + 2]), 1)));
        var_16 = min((((!(((arr_8 [i_2]) >= var_10))))), ((((max((arr_9 [i_2] [i_2]), var_7))) ? 29707 : (arr_9 [5] [i_2]))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 = ((((((-32767 - 1) ? (arr_11 [i_3]) : var_10))) ? (arr_9 [i_3 - 1] [i_3 + 4]) : (~var_9)));
            var_18 = (~-var_9);
            var_19 = (2849959967 & (arr_8 [i_3 + 3]));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_3 + 3] [i_3 + 3] [i_3] = ((~(arr_14 [i_3 + 3])));

            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_20 = (((arr_13 [i_3 + 3]) ? 12 : var_7));
                    var_21 = (min(var_21, ((((arr_8 [i_3 + 3]) | (~var_0))))));
                    var_22 = 1;
                    var_23 -= ((3381 ? 1 : -4630));
                }
                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {
                    var_24 = (((((~(arr_24 [i_3] [i_5] [i_6] [i_6])))) ? (!var_2) : var_8));
                    var_25 = (1984582494 || -var_8);

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_26 = var_1;
                        var_27 = var_4;
                    }
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        var_28 = (min(var_28, ((-(((!(arr_11 [i_6]))))))));
                        var_29 = (arr_24 [i_3] [i_6] [i_8] [i_10 - 1]);
                    }
                    arr_33 [i_3] [i_3] [1] [i_3] [i_8] [i_3] = var_3;
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        var_30 = (~-2913);
                        var_31 = var_0;
                        arr_40 [i_6] |= ((15 << (((((var_2 + 2147483647) << (var_4 - 70))) - 2147483023))));
                        var_32 &= (((~8276) ? (arr_11 [i_6]) : ((var_11 ? var_6 : 27870))));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_33 = (max(var_33, 252));
                        var_34 = (max(var_34, (((751479691 << (((var_0 + 10213) - 22)))))));
                        arr_43 [i_3] [i_5] [i_5] [i_5] [i_5] = (arr_13 [i_3 - 1]);
                        var_35 -= (!var_9);
                    }
                    arr_44 [i_3] [i_3] [i_3] [22] = ((!(!235)));
                    var_36 = (arr_38 [i_3 + 2] [i_5] [i_6] [i_5]);
                    arr_45 [i_3] [i_3 + 1] [i_5] [i_3] [i_11] = (((((~(arr_11 [i_3])))) ? var_0 : var_0));
                }
                for (int i_14 = 2; i_14 < 24;i_14 += 1)
                {
                    var_37 = (max(var_37, (-var_4 && var_6)));
                    var_38 -= (((arr_10 [i_5 - 1] [i_3 + 4]) ? var_5 : (arr_27 [i_3 + 2])));
                    var_39 = var_2;
                    var_40 -= (((arr_14 [i_5 - 1]) | var_11));
                }
                var_41 |= ((64 ? (arr_27 [i_5 - 1]) : (arr_26 [i_6] [i_3 + 2] [i_6])));
                arr_49 [i_3] [i_3] [i_3] [i_3] = (((arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1]) : -22959));
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    var_42 = var_10;
                    var_43 += (((arr_21 [i_3] [i_3 + 4]) ? (arr_25 [i_3 + 1] [i_3 + 3] [i_5 - 1]) : (arr_21 [5] [i_3 + 1])));
                }
                for (int i_17 = 2; i_17 < 23;i_17 += 1) /* same iter space */
                {
                    var_44 = ((1 != (0 + 32758)));
                    var_45 = arr_55 [i_3] [i_5 - 1] [i_5 - 1] [i_17];
                }
                for (int i_18 = 2; i_18 < 23;i_18 += 1) /* same iter space */
                {
                    var_46 = (min(var_46, ((((arr_54 [i_18] [i_15] [i_3] [i_3]) ^ var_3)))));

                    for (int i_19 = 1; i_19 < 24;i_19 += 1)
                    {
                        var_47 += -968924924;
                        var_48 = (max(var_48, (arr_16 [i_18 + 1])));
                        var_49 *= (--2634129473);
                    }
                }
                var_50 = ((var_3 ? 1 : (arr_13 [i_3 + 2])));
                arr_62 [i_3] [i_3] [i_15] [19] = ((var_6 ^ (~27256)));
            }
        }
        arr_63 [14] |= (((arr_11 [14]) / ((-760944785 ? var_0 : var_9))));
        arr_64 [i_3] [i_3] = (-32767 - 1);
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 21;i_20 += 1) /* same iter space */
    {
        var_51 = (((arr_54 [i_20] [i_20] [i_20] [i_20 - 1]) && (arr_54 [i_20] [11] [i_20] [i_20 - 1])));
        arr_68 [i_20 + 1] = ((var_0 % ((16376 ? var_7 : 1))));
        arr_69 [i_20] [i_20] = ((var_2 | (((arr_29 [i_20] [i_20] [i_20] [i_20]) ? 28643 : var_10))));
    }
    var_52 -= (max(var_0, ((((var_9 ? var_6 : var_5))))));
    #pragma endscop
}
