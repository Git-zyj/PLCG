/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((((max(var_6, -1610509833))) ? var_4 : (~var_1))), ((((0 != 7) >= var_4)))));
    var_13 |= var_11;
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_15 -= var_6;
                var_16 += ((var_9 << ((((var_1 ? var_0 : 0)) - 1816313027))));
                var_17 = var_2;
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_18 &= ((((((0 > var_3) ? ((min(var_9, (arr_5 [5] [i_1])))) : (arr_5 [i_1] [i_3])))) ? 0 : 4294967295));
                var_19 = ((((var_11 ? var_10 : var_8))));
            }
            var_20 = (min(var_20, (var_0 / 4294967284)));
            arr_10 [i_0] [i_1] = (arr_5 [1] [i_0]);
            arr_11 [i_1] [i_1] = (arr_6 [22] [i_1] [i_0]);
            var_21 += (4294967259 && 4294967270);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_22 = var_7;
            var_23 = 4294967239;
            var_24 = var_2;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_25 -= (((arr_5 [i_0] [i_5]) ? var_8 : (((11 ? var_1 : 4294967288)))));
            arr_17 [i_0] [i_5] [i_5] = var_7;
            arr_18 [i_0] [i_5] = var_6;
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_21 [i_0] [i_6] [i_0] = ((((((arr_3 [i_0]) ? 29 : (arr_3 [i_0])))) ? (((var_7 ? var_1 : var_3))) : (max(4294967278, var_4))));
            var_26 -= (((arr_19 [i_6] [i_6] [i_6]) >= (arr_0 [i_0] [i_6])));
        }
        arr_22 [i_0] = 10;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_27 ^= var_1;
        var_28 = var_7;
        var_29 = (max(var_29, var_6));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_30 = (((arr_14 [i_8] [1]) ? var_10 : var_8));
        arr_28 [i_8] [i_8] = ((~(arr_20 [i_8] [i_8] [i_8])));
        arr_29 [i_8] = ((21 ? 4294967284 : 12));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_31 = (min(var_31, (arr_32 [i_9])));

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_32 = ((arr_15 [i_9] [i_9] [i_9]) ? (arr_35 [i_9] [i_10]) : (arr_15 [i_9] [i_10] [i_9]));
            var_33 *= -4294967281;
        }
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            var_34 = (arr_14 [i_9] [i_9]);

            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                arr_41 [i_11] [i_11] [19] = (((var_2 ? var_0 : (arr_40 [i_9] [16] [i_12] [i_9]))));
                var_35 = (var_1 - 6);
                var_36 = (arr_7 [i_11] [i_11] [i_11]);
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
            {
                var_37 += (arr_39 [i_11 + 3]);
                var_38 = (max(var_38, 24));
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                arr_46 [i_14] [i_11] = (((!var_0) + ((4294967278 ? var_0 : var_5))));
                var_39 = (((var_1 | var_4) ? 7 : (!var_4)));
            }
            var_40 = (arr_39 [i_9]);
            arr_47 [i_11] = var_6;
        }
        for (int i_15 = 1; i_15 < 20;i_15 += 1)
        {
            var_41 = (var_9 == (((arr_26 [7]) - 4294967293)));

            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_42 *= ((20 ? 4294967276 : 4294967295));
                    arr_55 [i_9] [i_16] = ((var_10 >> (4294967285 - 4294967259)));
                    var_43 -= var_5;
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    var_44 = (var_3 <= var_1);
                    var_45 = 4294967295;
                    var_46 = (max(var_46, var_9));
                    var_47 = ((4294967276 ? 4294967264 : ((((arr_30 [i_15] [i_16]) - var_11)))));
                }
                arr_58 [i_9] [21] [0] [21] = ((22 ? ((var_2 ? (arr_36 [i_15] [i_9]) : var_5)) : var_9));

                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    var_48 = (4294967278 * 3);
                    var_49 = ((((((arr_56 [i_9]) ? var_2 : 4294967276))) ? (arr_6 [i_9] [i_16] [i_9]) : (((arr_35 [i_9] [i_15]) ? var_11 : 4294967283))));
                    var_50 -= var_6;
                    arr_61 [i_19] [i_16] [i_16] [i_15 + 1] [i_9] = (arr_51 [i_19]);
                }
                arr_62 [i_9] [i_15 + 1] [i_15 + 1] = (arr_0 [i_9] [i_15 + 3]);
            }
            var_51 *= ((var_11 | ((var_11 ? var_9 : 4294967282))));
            var_52 *= (var_9 / var_11);
        }
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            var_53 = ((var_2 / (arr_53 [i_9] [i_20] [i_20] [i_9] [i_9] [3])));
            arr_66 [i_9] [i_20] [i_9] = ((4294967275 <= (arr_30 [i_20] [i_9])));
            var_54 = ((var_3 ? (arr_13 [i_20] [i_9]) : 4294967272));
        }
        var_55 -= 4294967284;
        var_56 = (~0);
    }
    var_57 |= (max(((var_1 >> (var_11 - 49))), var_7));
    #pragma endscop
}
