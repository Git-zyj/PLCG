/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_15 ^= (((((arr_2 [i_1 - 1] [i_0]) + var_14)) + ((min((arr_1 [i_1 - 1]), (arr_2 [i_1 - 2] [i_1]))))));
            arr_7 [5] = (~(((var_7 & 8498898714851662125) ? (~var_4) : (arr_3 [i_1 - 2] [i_0] [i_0]))));
        }
        arr_8 [i_0] = (min(12760, (arr_0 [i_0])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = (((arr_2 [i_2] [i_0]) > -10509));

            for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 = var_1;
                            var_17 = (min(((min(921723810, var_0))), ((((max(12711840173917833907, -1095995001))) ? (8835411792364441132 - var_12) : (arr_17 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])))));
                        }
                    }
                }
                var_18 = 15263;
            }
            for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
            {
                var_19 += (min(((min((arr_5 [i_6 - 2]), (4368915924776264322 | var_9)))), (min((min(-1243022451, 5734903899791717718)), (arr_16 [i_0])))));
                arr_21 [i_0] [1] [i_6 - 1] = (((arr_2 [10] [i_0]) ? (((-(max(0, -1104618543))))) : (((arr_10 [i_0]) ? 66060288 : (arr_5 [i_2])))));
                var_20 = max((arr_6 [2] [5]), (!16338670775175856686));
            }
            for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_21 = (min(var_21, (((-4194304 ? var_3 : ((-((var_11 ? var_8 : 0)))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0] [3] [i_8] = min((arr_11 [8] [i_9]), var_1);
                            var_22 = var_7;
                            arr_33 [i_0] [i_2] [4] [4] [4] = ((((min(((((arr_23 [i_0]) && var_3))), (min((arr_25 [7] [i_7 + 1]), var_14))))) ? (arr_11 [i_7 + 1] [i_7 + 1]) : 1149744962));
                            var_23 = (arr_14 [i_2]);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_24 = 1397598917936068403;
                    arr_36 [i_0] [i_2] = ((((((arr_30 [i_7] [i_2] [0] [i_10] [i_7 + 1]) / (arr_30 [i_0] [i_2] [i_10] [1] [i_7 + 1])))) ? (~var_12) : ((((~var_11) ? 543462353 : (min(1944002895, var_11)))))));
                    var_25 = (arr_18 [i_7] [8] [i_0]);

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_26 = 262140;
                        arr_41 [i_2] [i_7] [i_10] [i_11] = (arr_17 [i_2] [i_2] [i_7] [i_10] [8] [i_2] [i_0]);
                    }
                }
            }
            for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
            {
                var_27 ^= ((((!(arr_15 [i_12 - 1] [i_12] [i_12 + 1] [i_12 + 1]))) && 1));
                var_28 &= 1104618542;
                arr_44 [i_2] [i_2] [i_12 - 1] = ((!(((~((14682304138656159817 ? (arr_2 [i_12] [i_2]) : 3764439935053391790)))))));

                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    arr_48 [i_0] = -3237631492;
                    var_29 -= ((!((((var_3 & 9649426902752548802) ? 65074 : (arr_39 [i_0] [5] [i_12]))))));
                    arr_49 [i_13] = var_6;
                }
                arr_50 [i_0] [2] [i_12 - 1] [i_12 - 1] = 12711840173917833884;
            }
        }
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    {
                        arr_60 [i_15] [i_17 - 1] = -var_5;
                        arr_61 [i_14] [i_14] [4] [i_16 - 1] [i_16] [i_17 - 1] = ((var_13 - ((65530 / (arr_58 [i_16] [i_17 + 1])))));

                        for (int i_18 = 3; i_18 < 8;i_18 += 1)
                        {
                            var_30 ^= max(var_14, ((max(626724828, var_8))));
                            var_31 ^= 4847033465144835849;
                            arr_65 [i_18] [i_17] [i_16] [5] [i_14] = (~var_5);
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 11;i_19 += 1)
                        {
                            var_32 = ((-(arr_54 [i_17 + 1])));
                            arr_68 [2] [i_15] [2] [i_15] = 49;
                        }
                        var_33 = ((+((-7904 ? (3841 + -1293016319) : ((-(arr_52 [8])))))));
                    }
                }
            }
        }
        var_34 = (max(((((((var_13 ? var_3 : var_6))) || var_5))), var_11));
    }
    var_35 = -var_6;
    #pragma endscop
}
