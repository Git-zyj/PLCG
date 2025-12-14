/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_9 >> (((var_0 * 1) + 39650864))))) ^ var_5));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 *= ((((((arr_0 [16]) ? (arr_1 [i_0] [i_0]) : (min(50, 7))))) ? (((max(var_4, var_11)))) : ((~((-26458 ? -16 : 356016354))))));
        var_14 = ((~((var_9 ? var_11 : var_6))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_15 = (max(var_15, (arr_3 [i_0 - 1] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] = ((356016374 ? var_11 : (((((2147483634 ? var_2 : 12639267203056019120))) ? (var_3 >> 1) : (var_5 ^ 1)))));
                            var_16 = (max(4294967295, -40));
                            arr_13 [i_0] [i_0] = ((((max((!1), (arr_6 [23] [1] [1] [i_1] [i_1] [1])))) ? ((min(var_3, ((((arr_6 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) && var_6)))))) : (min(0, (var_3 ^ 5083135721995616131)))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_18 [i_0] [i_3] [i_2] [i_1 + 1] [i_0] = max((2203244611 ^ 106), var_4);
                            var_17 = (min(((var_4 ? (((-(arr_2 [i_1])))) : (var_5 ^ -14851))), (arr_1 [i_0] [i_0])));
                            arr_19 [i_0] [i_1] [21] [i_3] [i_5] = (((((arr_5 [i_3 + 3] [i_1 + 1] [i_0 - 1] [i_0 - 1]) ? -91 : -800000058)) * ((max((arr_11 [i_0] [i_0] [20] [i_3] [1]), (arr_8 [i_3]))))));
                        }
                        arr_20 [i_1] [i_0] = var_5;
                        arr_21 [i_3] [i_0] [i_0] [i_0] = ((((var_2 / ((1683718964 ? (-2147483647 - 1) : -17620)))) ^ (~var_7)));
                        var_18 = var_9;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_6] = -1683718972;
            var_19 = ((236 ? 1 : 2091722684));
            var_20 = (min(var_20, (((var_7 >> ((((var_9 ? 1482205394 : (arr_14 [8] [i_6] [i_6] [i_0] [i_0] [i_0] [8]))) - 1482205373)))))));
            arr_25 [i_0] [i_6] [i_0] = (~79946445013818658);
            var_21 = ((-var_0 ? ((55679 ? var_2 : 1572016645)) : (arr_11 [i_0 - 1] [i_0] [i_0] [i_6 + 1] [i_6])));
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_28 [i_0] [i_0] [i_7] = ((var_4 ? var_11 : (min((~1), (var_6 * var_0)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_22 += (!(!var_7));
                        var_23 = -71;
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
        {
            arr_38 [i_0] [i_0] = var_9;
            arr_39 [i_0] [i_0] = ((var_10 ? (min((min(var_11, 2422526318)), (arr_6 [i_0 - 1] [i_0] [i_0] [i_10 - 1] [i_10 - 1] [i_10]))) : (((var_7 * ((-490659585 ? (arr_2 [i_0 - 1]) : var_11)))))));
        }
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_24 = (min(var_24, ((((((1099510579200 ? -1457409188 : (var_3 || var_5)))) && (((((62571049 ? 4294967295 : (arr_9 [18] [i_11] [i_11])))) || var_1)))))));
        var_25 = (min(var_25, ((max(18446744073709551615, -92354741)))));
        var_26 -= 1;
        arr_43 [i_11] [i_11] |= (arr_30 [i_11] [i_11] [0]);
        var_27 = ((arr_31 [1] [1] [i_11]) ? ((((((-12955 + 2147483647) >> (36 - 30)))) * (min(2422526318, var_4)))) : (((-48 ? (((arr_27 [22] [22]) * 54)) : (arr_27 [i_11] [1])))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        var_28 = (((var_6 - var_9) ? (73 ^ 2422526310) : var_1));
        arr_48 [4] = var_5;
        var_29 = (max(var_29, var_1));
    }
    #pragma endscop
}
