/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((((max((arr_1 [i_0]), ((min((arr_0 [i_1] [i_0]), (arr_0 [i_0] [i_0]))))))) ? (arr_0 [i_0] [i_0]) : (((-18205 <= (arr_3 [i_0] [i_0] [i_1]))))));
                var_22 = (max(var_22, var_17));
                arr_4 [i_0] [i_0] = (min((min((((18 % (arr_2 [9] [i_1])))), 16)), (~var_12)));
                var_23 = (((((((min(var_6, (arr_3 [i_0] [i_1] [i_1])))) ? 16 : 240))) < (arr_2 [i_1 + 1] [i_1 + 1])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        arr_8 [i_2] = -4004219041817341054;
        arr_9 [i_2] [i_2] = 148;

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_24 = (((arr_3 [i_2 + 2] [i_3] [i_2 + 2]) >> (((~var_9) + 31))));

            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                arr_16 [i_2] = ((-4004219041817341054 ? 9223372036854775807 : 65535));
                var_25 = ((-(65519 - var_1)));
                var_26 = 148;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                arr_20 [i_2 + 2] [i_2] [i_2 + 2] = (((arr_3 [i_2 + 1] [i_2 - 1] [i_5]) - 60920));
                arr_21 [i_2] [i_2] = ((!((((arr_12 [i_2]) ? 23432 : 65532)))));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    var_27 = (min(var_27, (9223372036854775807 - var_0)));
                    var_28 = (((~(arr_23 [i_2] [i_2] [i_6] [i_7]))));
                    var_29 ^= ((var_6 ^ (arr_19 [i_2 - 1] [i_3] [2] [i_7 - 2])));
                    arr_27 [i_2] [i_6] = (((arr_7 [i_7 - 2] [i_2 + 2]) > var_12));
                }
                var_30 += ((((237 ? (arr_12 [8]) : (arr_2 [2] [i_3]))) >> ((((arr_1 [i_6]) < var_8)))));
            }
            for (int i_8 = 1; i_8 < 6;i_8 += 1)
            {
                arr_31 [8] [i_2] [i_8] = -2100423357605324199;
                arr_32 [i_2] [i_8] = (((-(arr_29 [i_2] [i_3] [i_2]))));
                arr_33 [i_2 - 1] [i_3] [i_3] [i_2] = (~61475);
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 7;i_11 += 1)
                {
                    {
                        var_31 = ((~(arr_17 [i_2 + 1] [i_2] [i_11 - 1] [i_2])));
                        arr_40 [i_2] = (((!63) % (arr_0 [i_2] [i_10])));
                    }
                }
            }
            arr_41 [i_2] [i_2] [i_9] = (arr_18 [i_2] [i_2] [i_2 + 2] [i_2]);
        }
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    var_32 = (min(var_32, ((min(9223372036854775779, ((((((arr_3 [i_12] [i_12] [i_12]) > 16))) & var_2)))))));
                    var_33 &= var_7;
                    arr_51 [i_14] = var_19;
                    arr_52 [1] |= 9007199254740992;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        arr_60 [i_12] [i_15] [i_15 - 1] [i_15] [i_15] [i_17] &= ((((!(arr_44 [i_15 - 2] [i_15 - 2]))) ? (arr_45 [i_15 + 2] [i_15 - 1]) : (arr_45 [i_15 + 2] [i_15 - 1])));
                        var_34 = (((((min((arr_42 [i_16]), (arr_58 [i_12] [i_12] [i_12] [i_16] [i_12]))) << (68719476735 - 68719476678))) ^ (((min((arr_57 [i_15 + 2] [i_15 + 2] [i_16] [i_17]), (arr_48 [i_15 + 1] [i_15 + 3] [i_15 + 3])))))));
                    }
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 24;i_18 += 1)
    {
        var_35 = (max(((max((var_10 == var_14), (max(15, -98))))), (~var_18)));
        var_36 ^= (~var_12);
    }
    var_37 -= var_16;

    for (int i_19 = 1; i_19 < 10;i_19 += 1)
    {
        arr_67 [i_19] = (arr_59 [8] [8] [i_19 + 3] [i_19] [i_19 + 2]);
        var_38 = (arr_61 [i_19 + 3]);

        for (int i_20 = 2; i_20 < 11;i_20 += 1)
        {
            var_39 = (max(var_39, (!var_3)));
            arr_70 [i_19] = (min((min((arr_53 [i_19 - 1] [i_19 + 1] [i_20 - 1]), ((max((arr_68 [i_20]), var_8))))), ((((arr_2 [i_19 + 2] [i_20 - 1]) ? (arr_46 [i_19 + 1] [i_20] [i_20]) : (arr_2 [i_19 - 1] [i_20 - 2]))))));
        }
    }
    #pragma endscop
}
