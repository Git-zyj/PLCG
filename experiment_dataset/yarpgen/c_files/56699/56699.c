/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_13 ^= (((((arr_2 [i_0] [i_1]) >= 222))) * (((!(arr_0 [i_1])))));

            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_2] [i_0] = var_0;
                var_14 = (1 || (((arr_5 [i_0] [i_1] [i_2 + 1]) && 95)));
                var_15 &= 1;
                var_16 = (((~1) ? (arr_0 [i_2]) : ((((((arr_3 [i_0] [i_0] [i_0]) & 84))) ? (arr_3 [i_0] [i_1] [i_2 - 2]) : (arr_5 [i_0] [i_1] [5])))));

                for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_17 = ((((((arr_6 [i_3 + 1]) ? 172 : ((-(arr_7 [i_0] [i_0])))))) || (1 ^ 76)));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_18 *= (arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]);
                        arr_15 [i_0] [i_0] = (((-977232714 > 0) > 63));
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0] = (var_9 == var_6);
                        var_19 = (min(var_19, ((((!1) >> 1)))));
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_0] = ((3214131838 + (arr_7 [i_3 + 1] [i_3 + 1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_0] [i_2 + 1] [i_3] [i_3] = -var_3;
                        arr_22 [i_0] [i_3] [i_2] [i_0] [i_0] = (!739826109);
                    }
                    var_20 ^= var_5;
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] = ((((((-28170 - (arr_2 [i_0] [i_2]))))) >= ((((93 <= 93) && 1)))));
                    arr_26 [i_0] = (~1955737746);
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_38 [i_0] [i_0] [i_1] [i_9] [i_0] = var_7;
                            var_21 *= (-340963058 >= 1);
                            var_22 &= -1;
                        }
                    }
                }
                var_23 += 223;
            }
            var_24 = (min(var_24, (arr_3 [i_1] [i_1] [i_0])));
        }
        var_25 = var_7;
        var_26 = (min(var_26, (arr_4 [i_0] [i_0] [i_0])));
        var_27 &= (max((min((((!(arr_23 [17] [i_0] [17] [i_0] [i_0])))), (((arr_2 [i_0] [i_0]) + var_5)))), 1));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_42 [i_10] [i_10] = ((+(((1 & -144) ^ (4095 && 1)))));
        var_28 = (max(var_28, ((max(1, 1)))));
        var_29 = var_1;
        var_30 = (max(var_30, ((max((195 * var_6), 1588323861)))));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_47 [i_11] [i_11] = (((var_11 & 4294967295) >> (!var_9)));

        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_31 *= ((((((arr_28 [i_11] [i_11] [i_11]) ? (arr_27 [i_11] [i_12] [i_11]) : (var_0 && var_7)))) ? (max(2307291309, 0)) : (((max((arr_10 [i_11] [i_12] [i_11] [i_11] [i_12] [i_12]), (arr_40 [i_11] [i_12])))))));
            arr_50 [4] [i_11] = 60;
            arr_51 [i_11] = ((((!(arr_23 [i_12] [i_12] [i_11] [i_11] [i_11])))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
        {
            arr_54 [i_11] [i_11] = var_3;
            var_32 = (((arr_31 [i_11] [i_13] [i_13] [i_11]) ^ (arr_46 [i_11])));
            var_33 *= 1987675986;
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
        {
            var_34 ^= ((!(((+(((arr_29 [i_11] [i_14]) + (arr_11 [i_14] [i_14] [i_11] [i_11] [i_11] [i_11]))))))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 8;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    {
                        var_35 -= (arr_52 [i_16] [i_15] [i_11]);

                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 7;i_17 += 1)
                        {
                            var_36 |= (!(((1 ? 1 : 3920744864))));
                            var_37 ^= (((arr_65 [10] [i_14] [i_16 + 1] [i_17 + 3] [i_17] [i_17] [i_17]) >= (arr_65 [i_15 + 3] [i_16] [i_16 + 1] [i_17 + 3] [i_17 + 1] [i_17 + 2] [i_17])));
                        }
                        var_38 *= 0;
                        var_39 = (min((arr_28 [i_15 + 2] [i_16] [i_16 + 1]), (arr_28 [i_15 + 2] [i_15] [i_16 + 1])));
                        arr_67 [i_11] [i_11] [i_11] [i_11] = (-160 + 3635328034);
                    }
                }
            }
            arr_68 [i_11] = ((-var_0 ? ((((max(1914817713, 1)) == (!var_0)))) : var_1));
            var_40 = (((((((~(arr_44 [i_14]))) >= 2521910719))) > (max(var_1, 1))));
        }
    }
    #pragma endscop
}
