/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((arr_3 [i_0]) * (arr_1 [2])));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_18 = ((((((arr_5 [i_1 - 1]) * var_5))) ? (arr_6 [i_1 + 1] [i_1 - 1]) : (arr_1 [i_0])));
            var_19 += (((arr_6 [i_1 + 2] [i_1 + 2]) ? ((var_3 ? 0 : var_9)) : (235 || var_4)));
            var_20 = var_6;
            var_21 = (min(var_21, -20));
            var_22 = (arr_3 [i_0]);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [1] [i_2] [14] = (((arr_8 [i_0]) >= (((0 ? (arr_7 [i_0] [i_2]) : var_4)))));
            var_23 = (((arr_6 [i_2] [i_0]) || (arr_2 [i_2] [i_0])));
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_16 [i_3] [16] = var_2;
                var_24 = var_9;
            }
            var_25 = ((28 ? (arr_6 [i_3 - 2] [i_3 - 2]) : 206));
            var_26 = 116;
            var_27 = (arr_14 [i_0] [i_3] [i_3]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_28 = (((arr_12 [i_5] [i_5] [i_5]) / (arr_9 [11] [11] [i_5])));

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                var_29 = ((+((1 ? (arr_1 [i_5]) : var_9))));
                arr_23 [i_5] = (((arr_20 [i_6 + 1] [i_5]) <= var_4));
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_34 [i_5] [11] [i_7] [8] = var_8;
                            var_30 = (227 ? (arr_19 [i_7 + 1] [i_7] [i_7] [i_5]) : (arr_19 [i_7 + 1] [10] [i_7 + 1] [i_5]));
                            var_31 = (((((-(arr_0 [i_5])))) ? (arr_11 [i_5] [i_5]) : (((arr_33 [i_0] [i_7] [i_5] [i_8]) ? 5146855355557657081 : (arr_25 [1] [i_5] [i_5])))));
                            arr_35 [i_5] [i_5] [i_7 + 1] [i_5] = (((arr_13 [i_5] [i_7 + 1] [i_5]) + -var_12));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_32 &= (((((((arr_14 [i_7 + 2] [i_11] [i_7]) - (arr_26 [i_11]))) + 2147483647)) >> (var_11 + 117)));
                            var_33 |= (((((var_10 ? var_15 : (arr_27 [i_0] [i_0] [i_11] [i_10])))) ? 192 : (((var_14 && (arr_6 [i_0] [i_11]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_34 = var_2;
                            var_35 = ((var_13 ? (arr_43 [i_5]) : 8));
                            var_36 = ((!(((var_0 << (var_10 - 9426815280941671912))))));
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_37 = ((116 ? (((1 << (var_9 - 20156)))) : 9223372036854775808));
                    arr_51 [i_5] [i_5] [i_7] [i_14] = (((arr_15 [i_7] [i_7 - 1] [i_5] [i_7 + 2]) - ((var_0 ? -48 : var_15))));
                    var_38 = (((arr_31 [i_14] [i_5] [i_14] [12] [i_5] [8]) ? (arr_31 [1] [i_5] [1] [i_7 + 1] [i_5] [1]) : (arr_31 [i_0] [i_5] [i_7] [0] [i_5] [i_0])));
                }
            }
            for (int i_15 = 1; i_15 < 14;i_15 += 1)
            {
                var_39 = var_10;
                var_40 = (arr_39 [i_5] [i_15 + 3] [11] [i_15 + 1] [i_5]);
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_41 = ((-(arr_17 [i_16] [16] [i_16])));
        var_42 = ((var_6 < (arr_40 [i_16] [i_16] [i_16] [2] [i_16])));
    }
    var_43 -= 0;

    /* vectorizable */
    for (int i_17 = 4; i_17 < 9;i_17 += 1)
    {

        for (int i_18 = 1; i_18 < 8;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                arr_65 [7] [i_18 - 1] [i_19] [i_19] = (arr_13 [i_18 + 2] [i_18 + 2] [i_17]);
                var_44 = (!23);
                arr_66 [i_17] = var_12;
            }
            arr_67 [i_17 + 1] [i_18 + 2] [i_18] = 195;
        }

        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            var_45 = ((9235161347137163252 ? var_0 : (arr_63 [i_17 - 2] [i_17 - 2])));
            arr_70 [i_17 - 2] = arr_25 [i_17] [i_17] [i_20];
            arr_71 [i_17] [i_20] [i_20] = (((arr_28 [i_17] [i_20] [i_17] [i_17 - 3]) & (arr_24 [i_17 - 2] [i_17] [i_17])));
            arr_72 [i_17 - 3] = (((((arr_61 [i_20]) > var_4)) ? (arr_46 [i_17] [i_20] [i_17]) : (((arr_50 [2] [i_17] [i_20] [i_20]) >> (var_4 + 17)))));
        }
        var_46 = (arr_0 [i_17 - 2]);
    }
    var_47 = (max(var_47, ((((var_8 ^ var_14) & (max((max(var_10, var_10)), ((var_11 ? var_13 : 11358229920805651853)))))))));
    #pragma endscop
}
