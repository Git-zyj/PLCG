/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_19 = ((min((arr_0 [i_0 + 1]), 3)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_20 = -9208346165931461893;
                        arr_12 [7] [7] [i_2] [i_3] = ((!((((arr_8 [i_0 + 1] [i_0] [i_0 + 1]) | (arr_8 [i_0 + 1] [4] [4]))))));
                    }
                }
            }
        }
        var_21 = var_15;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_22 = ((((-31893 ? var_14 : (arr_0 [13]))) << (((arr_9 [i_4] [i_4]) + 7815205318908481661))));
        var_23 -= ((arr_0 [i_4]) ? var_11 : var_6);
        arr_17 [i_4] = ((var_5 ? var_7 : var_3));
        arr_18 [i_4] = ((215 ? ((18446744073709551615 ? (arr_4 [i_4] [i_4] [i_4]) : var_13)) : (arr_14 [i_4])));
        var_24 = (max(var_24, (arr_9 [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_25 = (min(((-31893 ? var_16 : (var_3 / var_5))), ((32752 ? (((arr_4 [i_5] [i_5] [i_6]) - 31)) : 40))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 7;i_9 += 1)
                    {
                        {
                            arr_33 [i_9 + 1] [i_6] [i_5] &= (((((((-(arr_15 [i_7]))) << ((((((var_16 + (arr_6 [i_5] [6] [i_8]))) + 247610887)) - 23))))) ? var_18 : ((~(arr_0 [i_5])))));
                            var_26 = (min((arr_29 [i_5] [i_5] [i_7] [0]), ((max(var_17, (arr_21 [i_5] [i_6]))))));
                        }
                    }
                }
            }
            arr_34 [i_5] [i_6] = (min(-1578, (min((~var_17), (max(-4875781675395417853, (arr_22 [6])))))));
            var_27 = var_17;
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            arr_38 [i_5] [i_5] = ((-((max(215, 31900)))));
            var_28 = var_5;
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {
            var_29 = max(((((((var_15 ? var_8 : 0))) ? var_12 : (arr_25 [i_11] [i_11] [i_11] [i_11])))), (min(((((arr_5 [i_5] [i_11]) ^ var_16))), -var_3)));

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_45 [i_12] [i_11] [i_12] = (((((((max(4294967273, var_0))) ? (((arr_13 [i_5] [i_5]) ? 4294967295 : 31900)) : (max(var_7, var_10))))) ? (arr_8 [i_5] [i_11] [i_12]) : (max((min(4294967295, var_4)), ((((arr_24 [i_5] [7]) > var_6)))))));
                var_30 = (min(var_30, ((((~var_17) ? (arr_32 [i_5] [i_5] [i_5] [4] [i_11] [7] [i_11]) : (((((max(43313, (arr_42 [i_11]))))) % ((-31895 ? 1 : var_10)))))))));
            }
            arr_46 [i_11] [i_5] [i_5] = ((+(((arr_16 [i_11]) / (arr_16 [i_5])))));
            var_31 = (arr_9 [1] [i_11]);
            var_32 = (((arr_7 [1] [i_11] [2] [12]) ? (((arr_7 [1] [i_11] [i_5] [i_5]) + (arr_6 [i_5] [i_5] [i_11]))) : ((((arr_7 [i_5] [i_5] [i_5] [i_5]) ? var_14 : (arr_6 [i_5] [i_5] [i_11]))))));
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 6;i_13 += 1)
        {
            var_33 |= ((1 ? (arr_48 [i_5] [i_5] [i_13]) : ((32155 ? -92 : -7829955424580375899))));
            arr_50 [i_5] [i_5] = 0;
            arr_51 [i_5] [i_5] [i_13 - 2] = (4294967295 > -773146702);
            arr_52 [i_5] [i_13] = 1;
        }
        arr_53 [i_5] = (arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
    {
        var_34 = ((0 ? -24 : 200));
        var_35 *= ((+(((arr_5 [i_14] [i_14]) + ((68 ? -1590981223849272245 : 11145027330107604041))))));

        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_36 *= var_8;
            arr_59 [i_14] [i_15] [i_14] = (max(((((var_1 || 1) ? (max(var_8, var_0)) : 4294967287))), ((var_18 ? -4096 : ((var_10 ? (arr_49 [i_14] [i_14] [i_14]) : var_17))))));
        }
        for (int i_16 = 1; i_16 < 6;i_16 += 1) /* same iter space */
        {
            arr_64 [i_16] [i_16 + 4] = ((var_12 ? (4103 < -6527241727350316175) : var_16));
            var_37 = (max(((-var_12 ? (((arr_15 [i_14]) + 1916308757)) : (min(1590981223849272244, var_2)))), ((var_3 + (arr_20 [i_14])))));
            var_38 ^= arr_54 [i_14] [i_16 - 1];
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 6;i_17 += 1) /* same iter space */
        {
            var_39 = var_1;
            arr_67 [8] [i_14] [i_17] |= ((505289057 ? (((var_13 ? var_15 : 4294967295))) : -2124307098758478822));
        }
    }
    var_40 = ((((var_9 ? -4090 : var_3)) * var_14));

    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_41 = (max(((-((12988176679428996425 ? 15793608615330602256 : var_9)))), (((60 ? (var_1 >= var_2) : ((var_16 ? var_13 : 1)))))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 13;i_21 += 1)
                {
                    {
                        var_42 = (arr_75 [i_21] [8] [i_19] [i_18]);
                        arr_82 [i_18] [i_18] [i_18] = (min((arr_70 [i_18]), ((4701028606071431212 ? (arr_8 [i_18] [i_19] [i_18]) : (arr_4 [i_18] [i_18] [i_20])))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_22 = 4; i_22 < 13;i_22 += 1)
        {
            arr_85 [i_18] [i_18] [i_22] = var_11;
            var_43 = 1;
            var_44 = (arr_73 [11] [i_18] [i_22]);
            var_45 += 1;
        }
        arr_86 [i_18] = ((((max(-4701028606071431212, -3814400551408741402))) ? (((-(arr_75 [i_18] [i_18] [i_18] [i_18])))) : -310388447093778692));
    }
    /* vectorizable */
    for (int i_23 = 1; i_23 < 15;i_23 += 1)
    {
        var_46 = 1;
        arr_90 [i_23] = (((-2147483647 - 1) / -1));
        var_47 = (min(var_47, (arr_89 [i_23])));
    }
    var_48 = (((((var_10 ? var_18 : (var_1 != -653943909743283936)))) ? (-1 >= -var_3) : var_5));
    #pragma endscop
}
