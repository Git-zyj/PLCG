/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 |= ((!(arr_3 [i_0] [i_1])));
                    var_21 = (min(var_21, var_11));
                    var_22 = var_11;
                    var_23 = (((arr_7 [i_0] [i_1 - 1] [i_2]) ? (((max((arr_7 [22] [i_2 - 2] [i_2]), (arr_7 [i_0] [18] [i_2]))))) : (~0)));
                }
            }
        }
        var_24 = (max((min(112, -9223372036854775797)), ((152 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_25 = ((4033198259 ? (arr_8 [i_0] [i_0] [i_3 - 1] [i_3]) : (arr_4 [i_0] [i_3])));
            var_26 = (max(var_26, (((4095 ? 69 : 126)))));
            arr_12 [1] [23] = (((arr_6 [i_3 - 1]) ? ((0 ? var_2 : 18446744073709551615)) : var_19));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_27 = (((arr_15 [14] [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1]) <= -126));
                        var_28 = var_19;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_22 [i_0] [i_6] [18] = -122;
                var_29 = (min(var_29, (14 - 0)));

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_26 [12] [i_6] [i_7] [i_8] [i_7] [12] = (((arr_2 [i_8] [i_6]) ? (arr_4 [i_6 - 1] [i_6 - 1]) : (arr_21 [i_6 - 1] [i_6 - 1])));

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_30 = ((61 ? (arr_21 [i_7] [i_0]) : (arr_28 [i_0] [i_6 - 1] [i_6 - 1] [i_8] [i_9])));
                        var_31 = var_3;
                    }
                    var_32 = var_10;
                    var_33 &= -91;
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_34 [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_0] [6] [i_0]);

                for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_34 *= (((~(arr_30 [i_6 - 1] [22]))));
                    var_35 = ((!(arr_16 [i_0] [i_6 - 1] [i_10] [i_10] [i_11] [i_11])));
                    arr_39 [i_10] = (((-127 && var_5) ? 0 : (arr_3 [i_0] [i_6])));
                }
                for (int i_12 = 2; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    var_36 = ((-(arr_28 [i_0] [i_0] [i_0] [21] [i_0])));
                    var_37 = (((-1 ? 48 : var_4)));
                    arr_42 [i_0] [i_0] [i_0] [i_0] |= (((arr_30 [i_12 - 2] [i_0]) ? var_10 : var_4));
                    arr_43 [i_0] [i_10] [i_12] = (var_3 ^ var_4);
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        var_38 *= -113;
                        arr_49 [i_13] [i_14] = (0 | var_16);
                        var_39 -= (((arr_28 [i_6 - 1] [6] [i_6 - 1] [7] [i_6 - 1]) * (((39 <= (arr_0 [19]))))));
                        var_40 = (-2147483647 - 1);
                    }
                }
            }
            arr_50 [i_6] [i_0] = ((-1 ? 18446744073709551615 : 189));
            arr_51 [i_0] = (arr_28 [i_0] [i_0] [i_6] [i_6] [i_6 - 1]);
            var_41 = (arr_46 [i_0] [i_6] [i_6 - 1] [i_0]);
        }
        var_42 = (((102 > (max(61445, var_13)))));
    }
    for (int i_15 = 4; i_15 < 14;i_15 += 1)
    {
        arr_55 [i_15] = (min(((((min(-102, 6381964527322184933))) && var_9)), ((!((min(83, var_2)))))));
        arr_56 [4] = min(35280, 17010440329771158513);
        var_43 = ((((0 ? (arr_11 [i_15 + 1] [11]) : (arr_45 [i_15 - 3]))) + (((((((7054832990203198992 || (arr_45 [i_15])))) < var_3))))));
        arr_57 [i_15] = min(var_6, (((((((arr_29 [i_15] [i_15 - 2] [i_15] [i_15] [i_15]) << (((arr_20 [i_15] [i_15] [i_15]) + 24738728045082009))))) ? 21 : -3))));
    }
    var_44 |= (max(((var_10 ? var_19 : var_18)), var_3));
    var_45 = -1;
    #pragma endscop
}
