/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_1, var_5))) ^ ((((65 || ((min(0, var_8)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_3 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_13 = var_6;
                            var_14 = (arr_10 [i_4] [i_4 - 1] [i_4 - 1] [i_3] [i_0] [i_0]);
                        }
                        arr_16 [i_0] = (((arr_8 [i_0] [i_1] [i_2] [i_3]) != (arr_8 [i_0] [i_1] [i_2] [i_3])));
                        var_15 -= (((arr_1 [i_0] [i_1]) * var_4));
                        arr_17 [i_0] [i_2] [i_1] [i_0] = (((65 == 13) >> (((arr_5 [i_0]) + 25))));
                        var_16 = (((arr_1 [i_0] [i_0]) & (arr_1 [i_1] [i_1])));
                    }
                }
            }
        }
        arr_18 [i_0] [i_0] = ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_0 [i_0] [i_0]));
        arr_19 [i_0] = (!4294967295);
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_23 [i_5 + 1] = (!65);

        /* vectorizable */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_17 -= -89;
            arr_26 [i_5] [i_5] [i_5] = (var_6 - 13419643531843325453);
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_18 = -65;
            var_19 = ((24144 ? (arr_28 [i_7 - 1] [i_7 - 1]) : var_2));
            var_20 = ((var_8 ? 51612 : var_8));
            arr_29 [i_7 + 2] [i_5] = ((-(arr_25 [i_5] [i_5 - 1])));
        }
        var_21 = arr_22 [i_5];
        arr_30 [i_5] = 7356;
        var_22 = (min(var_22, ((max(65, 1721304242)))));
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            arr_35 [i_8] [i_8] [i_9 - 1] = (~78);
            var_23 = (min(var_23, (((((456868652722285506 ? ((min(var_10, (arr_25 [i_8] [i_8])))) : ((max((arr_28 [i_8 + 2] [i_9 - 1]), -78)))))) ^ (((((((arr_31 [i_8 - 1] [12]) >= 2)))) * ((var_10 ? 23 : (arr_34 [i_8 + 1] [i_8] [i_8 + 2])))))))));
            var_24 = var_4;
        }
        var_25 = (max(var_25, var_8));

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_26 = var_11;
            arr_40 [i_8 + 2] [i_10] [i_8] = (~(arr_25 [i_10] [i_10]));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_43 [i_8] [i_8] = ((((arr_41 [i_8 + 2] [i_8] [i_8 - 1]) ? var_8 : (arr_41 [i_8 + 2] [i_8] [i_8 + 1]))) <= ((~(arr_37 [i_8] [i_11] [i_8 + 2]))));
            arr_44 [i_8] = (((((arr_32 [i_8] [i_8 + 1]) ? var_7 : 0)) * ((((-8192 ? (arr_27 [i_8] [i_8] [i_8]) : var_9))))));
            arr_45 [i_8 + 2] [4] &= ((~(arr_24 [i_11] [i_8 - 1] [i_8 - 1])));
        }
    }
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        arr_49 [i_12] = (arr_48 [i_12]);
        var_27 ^= 1;
        var_28 = ((((var_9 && ((((arr_48 [i_12]) ? 1 : -65))))) ? ((var_5 ? 107 : -80)) : (arr_47 [i_12])));
    }

    /* vectorizable */
    for (int i_13 = 1; i_13 < 9;i_13 += 1)
    {
        var_29 = var_7;

        for (int i_14 = 2; i_14 < 12;i_14 += 1)
        {
            arr_54 [i_13] = -16343;

            for (int i_15 = 4; i_15 < 12;i_15 += 1)
            {
                var_30 = (min(var_30, (1 >= 1579723183)));
                arr_59 [i_14] |= (((arr_46 [i_14 + 1]) ? var_7 : var_10));
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        {
                            arr_66 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_14] [i_13] &= (-874631082 > -58);
                            var_31 = ((arr_61 [i_13] [i_14 - 2]) >= ((-5 ? (arr_34 [i_13 + 2] [i_13 - 1] [i_13 + 2]) : (arr_53 [i_13] [i_14 + 1]))));
                            arr_67 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = 1;
                        }
                    }
                }
                var_32 = var_7;
            }
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    arr_75 [i_14] [i_13] = (arr_72 [i_13] [i_13 + 1] [i_13] [i_13]);
                    var_33 = (((arr_73 [i_13]) <= (arr_68 [i_13] [i_14 - 2] [i_14])));
                    var_34 ^= ((!((((arr_57 [i_13] [i_13 + 1] [i_13]) ? 78 : (arr_63 [i_19] [i_14] [i_20] [i_19]))))));
                    arr_76 [i_13] [i_14 - 2] = (((arr_64 [i_19] [i_14 - 2] [i_19] [i_13 + 1] [i_13 + 1]) || 1));
                }
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    var_35 ^= -12;
                    arr_81 [i_13] = (var_8 ? (((arr_68 [i_13] [i_13] [i_21]) ? -23 : (arr_79 [i_13 + 1] [i_19]))) : (((arr_27 [i_13] [i_13] [i_13]) ? (arr_38 [i_19] [i_21]) : var_8)));
                    var_36 = (max(var_36, (((!(arr_80 [i_13] [i_14]))))));
                    arr_82 [i_13] [i_14] [i_14 - 2] = (arr_52 [i_13]);
                }
                var_37 = (min(var_37, (arr_38 [i_13] [i_14])));
            }

            for (int i_22 = 0; i_22 < 13;i_22 += 1)
            {
                var_38 += ((-((-1579723173 + (arr_68 [i_22] [i_14] [i_22])))));
                var_39 = (min(var_39, -11890456195783347851));
            }
        }
        arr_85 [i_13] = ((~((var_5 ? 23 : var_6))));
        var_40 = (min(var_40, (var_5 + 82)));
    }
    for (int i_23 = 4; i_23 < 14;i_23 += 1)
    {
        var_41 = (((!var_11) ? (var_10 || var_0) : ((((arr_47 [i_23]) >= (min((arr_48 [i_23]), (arr_86 [i_23] [i_23]))))))));
        arr_88 [i_23 - 4] = arr_86 [i_23] [i_23];
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 15;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 15;i_25 += 1)
            {
                {
                    var_42 = ((1 > (((!(arr_87 [i_23 - 3] [i_23 + 1]))))));
                    var_43 = ((min(var_8, (arr_86 [i_23 + 1] [i_23 - 3]))));
                    var_44 = -var_1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 3; i_26 < 16;i_26 += 1)
    {
        var_45 *= (((var_10 ? 31038 : 27233)));
        var_46 ^= ((49691 * (arr_97 [i_26 - 2])));
    }
    var_47 = 15838560038723611910;
    #pragma endscop
}
