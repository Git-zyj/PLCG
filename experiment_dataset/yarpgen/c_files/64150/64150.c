/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_19 = -var_11;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 - 2] [i_2] [3] [i_3] = ((~(arr_7 [i_2 + 1] [i_1 + 1] [i_0] [i_1] [i_2])));
                        var_20 &= ((((~(((arr_8 [i_0] [i_1] [i_2]) ? var_0 : -9140141038173951947))))) ? -9140141038173951946 : (~var_17));
                        var_21 = (min(var_21, var_18));
                        var_22 = ((min((arr_7 [i_0] [9] [8] [i_2] [i_3]), (arr_9 [12] [i_0] [i_0]))));
                        var_23 *= ((((min((arr_7 [i_0] [i_0] [i_2 + 1] [i_1 + 1] [i_1]), (arr_0 [i_0] [i_1])))) ? (min((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_3]))) : (((arr_1 [2] [i_1 + 1]) ? (arr_7 [i_1] [i_2] [i_2 - 2] [i_1 + 1] [i_0]) : (arr_1 [3] [i_3])))));
                    }
                }
            }
            arr_11 [i_0] = var_13;
        }
        var_24 = (min((arr_5 [i_0]), (arr_8 [i_0] [4] [i_0])));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_19 [8] [9] = ((((((arr_8 [i_5] [i_4] [i_0]) ? var_18 : (arr_8 [i_5] [3] [i_0])))) ? -1294103345 : (arr_9 [i_0] [i_6 - 1] [i_5])));
                        arr_20 [i_6 - 1] [i_5] [4] [i_0] [i_0] = ((arr_18 [i_5]) ? var_16 : (((~((-7240088624601487950 ? 201 : (arr_5 [i_5])))))));
                        arr_21 [i_6] [5] [3] [6] = (min(((var_18 ? (arr_17 [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_6] [i_5] [i_5]) : (arr_17 [i_6 - 1] [i_6 + 1] [13] [13] [i_5] [i_5]))), (arr_17 [i_6 - 1] [i_6 + 1] [13] [11] [i_5] [10])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_24 [i_7] = 7499145784084577369;

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_25 |= (~34);
                            var_26 = (arr_32 [i_10] [i_10 + 2] [i_10] [i_10 - 1]);
                        }
                    }
                }
            }
            var_27 ^= (+(((arr_18 [7]) ? (arr_25 [i_7]) : var_1)));
        }
        for (int i_12 = 2; i_12 < 7;i_12 += 1)
        {
            arr_39 [i_12] = 249;
            arr_40 [i_12] = ((~(arr_8 [i_12 + 4] [3] [i_12 + 3])));
        }
        var_28 = (max(var_28, (arr_30 [i_7] [i_7] [i_7] [i_7])));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        var_29 = ((((var_18 ? var_9 : (arr_47 [i_14] [i_15] [i_16])))));
                        arr_51 [i_13] [i_14] [i_13] = 34;
                        var_30 = (min(-7499145784084577369, 16));
                        arr_52 [i_13] [i_13] [i_13] [i_13] [i_13] = (min((arr_45 [1] [i_15 + 2] [i_15]), ((9223372036854775807 ? -8447256567880428121 : 562812514467840))));
                        arr_53 [2] [15] [i_15] [3] = ((!((((((-69 ? (arr_47 [i_13] [i_13] [5]) : (arr_44 [i_13] [i_14])))) ? (arr_48 [i_16] [i_15 + 3] [i_14] [i_13]) : (arr_49 [i_14] [i_15 - 1] [i_15 + 1] [i_15 - 1]))))));
                    }
                }
            }
        }
        arr_54 [i_13] = (~-105);
    }
    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
    {
        arr_58 [i_17] = ((-(((arr_55 [14]) ? (arr_44 [i_17] [i_17]) : ((255 ? -2368272567103395686 : (arr_57 [i_17])))))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    {
                        var_31 = (~((207 ? 64 : (arr_57 [i_17]))));
                        arr_67 [i_20] &= (arr_42 [i_17] [i_18]);
                    }
                }
            }
        }
        arr_68 [i_17] = min(64, ((((arr_65 [i_17] [i_17] [13] [16] [1]) > var_17))));
    }
    var_32 = (((-9223372036854775807 / var_11) ? var_13 : var_2));
    var_33 &= var_18;
    var_34 = var_11;
    #pragma endscop
}
