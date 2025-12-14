/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((2610380070 && 1722305675717092751) ? (((arr_1 [i_0]) >> (137 - 123))) : -8966872188340675622)) : (-8474 >= -1523626283)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_0] = 13622048204544584399;
            var_20 *= ((arr_4 [i_0 + 1] [i_1]) / var_2);
            var_21 = (((((19 != (arr_3 [i_0 - 1] [i_0] [i_1])))) + ((-(arr_2 [i_0])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = var_16;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_22 = 227;
                var_23 -= ((10808956381577460529 & (arr_4 [i_0] [i_0 + 1])));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_24 = 23;
                    var_25 *= ((1364441347 << (((arr_2 [i_4]) - 1565924416))));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] [i_2] [i_2] [i_2] = (arr_11 [i_4] [i_5]);
                        var_26 = (max(var_26, 1819));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_27 = (((arr_0 [i_0]) - 4506295548532691412));
                        arr_24 [i_0 - 1] [i_0 - 1] [i_0] = (~var_3);
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_27 [i_0] [i_2] [i_3] [i_3] [i_0] = ((130 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1])));
                        var_28 = var_11;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_29 = 72;
                        var_30 = (var_9 ^ var_9);
                        var_31 = (var_1 * var_11);
                    }
                }
                var_32 = (max(var_32, (((((arr_21 [i_0] [i_2] [i_3]) ? -807791653114100925 : var_1))))));
                var_33 = 51939;
            }

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_34 = var_13;
                var_35 -= var_18;
                var_36 = ((var_0 <= (arr_5 [i_0 - 1])));
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_0] = (arr_22 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]);
                var_37 = 14629889199446514218;
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                var_38 = (((!var_1) * -2210924433661314497));

                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    var_39 = 26222;
                    var_40 = 10968373994962722640;
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    arr_47 [i_0] = (((((-(arr_36 [i_0 - 1] [i_2] [i_11])))) ? -9223372036854775793 : (arr_25 [i_0 - 1] [i_0])));
                    var_41 = (min(var_41, (var_12 + 6991789363838602014)));
                    arr_48 [i_0] [i_0 + 1] [12] [i_11] [i_13] = (var_13 * 3670931050);
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                {
                    var_42 = ((~(arr_2 [i_0])));
                    arr_52 [i_0] [i_0] = var_2;
                    arr_53 [i_0] = ((var_2 ? (arr_41 [i_0 + 2] [i_0]) : var_17));
                }
                for (int i_15 = 2; i_15 < 23;i_15 += 1)
                {
                    var_43 = 1265647569;
                    var_44 = 9851;
                    arr_58 [i_0] [i_11] [i_2] [i_0] = var_5;
                }
                var_45 ^= -93;

                for (int i_16 = 1; i_16 < 22;i_16 += 1)
                {
                    var_46 = (((arr_9 [i_0]) % ((var_7 ? var_14 : var_15))));
                    arr_63 [i_0] [i_2] [i_0] = (~((4218057988 ? var_6 : 243)));
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    var_47 = var_5;
                    var_48 = (max(var_48, ((((arr_60 [8]) ? -48 : (arr_51 [i_0] [15] [19] [i_17]))))));
                    var_49 += (var_6 & var_17);
                    var_50 += -29789;
                }
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    arr_68 [i_0] [i_0] = (((arr_51 [i_0 - 1] [i_2] [i_11] [7]) ? (arr_34 [i_18] [i_0] [i_0] [i_0 + 2]) : 220));
                    var_51 = (((arr_8 [i_0 + 1] [i_0 + 1]) >= 0));
                    var_52 = (max(var_52, (arr_31 [i_0] [i_2] [i_0] [i_18] [i_18])));
                }
            }
            for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
            {
                arr_72 [i_0] [i_19] [12] |= ((((arr_31 [i_0] [i_2] [i_2] [i_0 + 1] [i_19]) ? var_16 : var_4)));
                var_53 += (arr_4 [i_0] [i_0]);
                var_54 = ((var_12 ? 62 : var_6));
            }
            arr_73 [i_0] [i_0] [i_0] = (var_5 > 835020810);
            var_55 = (arr_12 [i_0] [i_0] [i_2]);
        }

        /* vectorizable */
        for (int i_20 = 4; i_20 < 22;i_20 += 1)
        {
            var_56 = 3958730396140589646;
            var_57 = (max(var_57, (((3158386398 ? (arr_28 [i_20] [i_20 - 4] [i_0] [i_0 - 1] [9] [11]) : (arr_30 [i_0] [i_20] [i_0]))))));
            arr_78 [i_0] = ((1125895611875328 ? 54227 : ((0 ? var_13 : 1))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 24;i_22 += 1)
            {
                var_58 = (min(var_58, (arr_16 [7] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2])));
                var_59 = (max(var_59, (((~(arr_31 [i_0 + 1] [i_0 - 1] [8] [7] [i_0]))))));
            }
            arr_83 [i_0] [i_0] [i_0] = arr_36 [i_0 - 1] [i_0 - 1] [i_0 + 2];
        }
    }
    for (int i_23 = 0; i_23 < 23;i_23 += 1)
    {
        var_60 = ((-(arr_46 [i_23] [i_23] [i_23])));
        var_61 = -var_14;
    }
    var_62 -= (min(var_4, ((246855933154402039 ? (max(var_5, 47706)) : var_4))));
    #pragma endscop
}
