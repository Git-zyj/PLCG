/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(((var_0 ? var_16 : var_12)), var_15)));
    var_18 = 49248;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_19 = 2106040220489963407;

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_0 + 1] [i_0] = (var_9 == 16287);
            var_20 ^= (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 2]) : var_4));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (15 == 4294967287);
            arr_10 [i_0] = (-(!var_13));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_21 ^= (-(arr_4 [i_0 - 1]));
            var_22 = (min(var_22, ((((arr_4 [i_0 - 1]) | 42)))));
        }
        var_23 = (~9146);

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_24 = ((var_2 / ((var_3 ? var_3 : var_10))));
            var_25 = ((((0 <= (arr_13 [i_4]))) && var_4));
            var_26 = (~var_6);
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_21 [i_6] [i_5] = ((19533177019341665 ? -18446744073709551596 : (!18446744073709551610)));
                arr_22 [8] [i_5] [i_6] = (!1104729768);
            }
            var_27 = (((arr_1 [i_0 + 2]) == var_11));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_27 [i_0 + 2] [i_7] = (((var_6 < -746443855) ? ((var_9 ? (arr_17 [i_0] [i_7] [i_7]) : 1)) : (var_9 == var_4)));

            for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
            {
                arr_32 [i_8] = ((var_1 - (arr_20 [i_8] [i_8])));
                var_28 = (((arr_19 [i_8] [i_7] [i_8]) ? var_10 : (arr_4 [i_8 + 1])));
            }
            for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
            {
                var_29 = (min(var_29, ((((arr_1 [i_9 - 1]) ? var_13 : 3)))));
                arr_35 [i_0] [i_7] [i_9 + 1] [i_9 + 1] &= var_13;
                var_30 = (((arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 3]) || (arr_8 [i_0 + 2] [i_0 - 1] [i_0 - 1])));
            }
        }
    }
    for (int i_10 = 1; i_10 < 7;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] = (!18446744073709551596);

        /* vectorizable */
        for (int i_11 = 4; i_11 < 9;i_11 += 1)
        {
            arr_42 [i_11] [i_10] [i_11] = arr_34 [i_11] [i_11] [i_11] [i_11];

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_31 = (min(var_31, ((((1 - 1) | (arr_3 [i_10] [3] [i_10]))))));
                var_32 = ((var_10 - (arr_19 [i_11] [i_11 - 3] [i_11])));
                arr_45 [i_11] = var_1;
            }
            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                arr_49 [i_10] [i_11] [i_11] [i_13] = 18446744073709551585;
                var_33 ^= ((((0 ? (arr_2 [i_10]) : (-2147483647 - 1))) == var_15));
                var_34 &= ((var_10 | (arr_2 [i_11 - 4])));

                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {
                    var_35 = (var_4 == 2147483647);
                    arr_54 [i_11] = ((614781751 ? ((var_16 ? 2106040220489963400 : 16340703853219588208)) : 4294967287));
                }

                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    arr_57 [i_10] [i_10] [i_13 - 3] [i_11] = ((0 ? 15 : (arr_52 [i_11] [i_11] [i_11 - 2] [i_11 - 1] [i_11 + 1])));
                    arr_58 [i_11] = var_15;
                }
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    arr_61 [i_10] [i_11] [i_13 - 2] [i_16] = var_9;
                    arr_62 [i_13 + 1] [0] [0] [i_13] |= 4294967287;
                }
                for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                {
                    arr_65 [i_11] = (arr_5 [i_11 - 4]);
                    var_36 = (((((865681476 >> (200 - 198)))) && 722984188));
                }
                for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
                {
                    arr_68 [i_11] = (arr_37 [i_10 + 2]);
                    var_37 = (max(var_37, (arr_46 [i_10] [8])));
                }
            }
            var_38 = (((((197568122 || (arr_36 [2])))) >> ((-33 ? 1 : var_3))));
            var_39 = (max(var_39, (arr_4 [i_10 - 1])));
        }
    }
    for (int i_19 = 1; i_19 < 7;i_19 += 1) /* same iter space */
    {
        var_40 = (max(var_40, ((((arr_26 [i_19 + 2]) ? (max(var_13, var_3)) : (((~(arr_26 [i_19 + 2])))))))));
        var_41 = (min(var_41, ((max((min(((1147958528 ? var_5 : var_0)), 3035003222)), 1259964074)))));
        arr_71 [i_19] = 32765;
        var_42 = var_14;
        var_43 = -1947259026;
    }
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_44 = (max(var_44, (((min((arr_73 [i_20]), (arr_72 [i_20])))))));
        var_45 = (((min(var_2, (((arr_73 [i_20]) + var_1)))) | (((((arr_73 [i_20]) + 2147483647)) << ((((var_16 ? var_13 : var_15)) - 132))))));
    }
    #pragma endscop
}
