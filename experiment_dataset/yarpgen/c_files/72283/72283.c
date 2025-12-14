/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-var_11);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_1;
        arr_4 [i_0] [i_0] = 15872;
        var_13 |= (((arr_1 [8]) / (arr_1 [10])));
        var_14 = (arr_0 [i_0]);
        var_15 = (((arr_1 [i_0]) && (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [i_1 - 1] = ((((!(((~(arr_5 [2])))))) ? ((((-(arr_5 [i_1]))) / (arr_2 [8]))) : (arr_7 [i_1 - 1] [i_1])));
        var_16 = (min(var_16, (~var_1)));
        arr_9 [i_1] = (((-1054534171 + 2147483647) >> (((arr_5 [i_1]) + 16432))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_17 = (~15860);
        var_18 = (max(var_18, ((((arr_2 [6]) ^ (arr_2 [0]))))));
        arr_14 [i_2 - 1] = (((arr_13 [i_2 - 1]) + (~136)));
        arr_15 [i_2] = (arr_0 [i_2 - 1]);
        arr_16 [i_2] = (((arr_11 [i_2 - 1]) ? (arr_11 [i_2 - 1]) : 119));
    }
    var_19 |= var_6;
    var_20 = var_0;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 *= ((49664 ? (!var_7) : 102));
        arr_21 [i_3] = -1054534171;
        var_22 = var_5;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_23 = (max(var_23, var_10));

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                arr_30 [i_4] [10] [i_4] = ((~(arr_19 [i_4] [i_5])));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_24 = (((!0) && (((var_3 ? 1375465205 : var_9)))));
                    arr_34 [i_6] [i_6] [i_4] [i_4] = var_10;
                }
                arr_35 [i_6] [i_5] [i_6] &= (arr_33 [i_4] [18] [i_6] [i_6]);
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_25 |= (((((arr_32 [i_4] [i_4] [i_5] [i_4] [15]) <= (arr_31 [i_4] [15]))) ? (arr_33 [i_4] [i_4] [i_8] [i_8]) : var_10));
                arr_39 [i_4] [i_4] [i_4] [i_4] |= (((arr_22 [i_5]) ? var_2 : (arr_22 [i_4])));
                var_26 ^= 0;
                arr_40 [i_4] [i_4] [i_4] [i_4] = (((((arr_31 [0] [i_8]) <= (arr_27 [i_8] [13]))) ? (var_0 / var_11) : ((((arr_33 [i_4] [i_5] [i_4] [i_4]) ? -99 : (arr_28 [i_4] [i_4] [i_4]))))));
                var_27 = (((arr_32 [i_8] [i_4] [i_5] [i_4] [i_4]) ? (arr_32 [i_4] [i_5] [i_5] [i_4] [i_8]) : var_2));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_43 [i_4] [i_4] [6] = arr_22 [i_4];
                arr_44 [i_4] [i_4] = var_10;
            }
            arr_45 [i_4] [i_4] [i_4] = ((!((!(arr_26 [i_4])))));
            var_28 = ((((3 >= (arr_37 [i_5]))) ? ((((arr_32 [i_4] [i_4] [i_4] [i_5] [i_5]) || var_3))) : (!139)));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_29 = (((~var_5) + ((8646911284551352320 ? 9223372036854775807 : 6159904374409784062))));
            var_30 -= -var_11;
        }
        var_31 = ((-(arr_27 [i_4] [i_4])));
        var_32 = ((~(-9223372036854775807 - 1)));
    }
    /* vectorizable */
    for (int i_11 = 4; i_11 < 8;i_11 += 1)
    {
        var_33 ^= ((var_10 ? 47 : -16));
        var_34 ^= ((((63380 != (arr_11 [i_11]))) ? var_4 : (arr_41 [9] [i_11 - 4] [i_11 - 3] [i_11 - 1])));
        var_35 += (((((var_11 ? 2912735676902369364 : -9223372036854775807))) ? var_9 : (arr_10 [i_11 + 1])));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_36 = (128 + (min(-25052, 7705155602910437223)));
        arr_54 [i_12] = ((~((~(~0)))));
        arr_55 [i_12] = ((4294967295 ? ((-(min(1122061566281729488, var_10)))) : ((((max(-2912735676902369367, var_10))) ? (arr_25 [i_12] [i_12]) : (((min(var_5, (arr_31 [20] [i_12])))))))));
    }
    #pragma endscop
}
