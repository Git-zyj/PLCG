/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 &= (max(((((arr_1 [i_0 - 1]) == 2605517238))), (((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
            {
                arr_7 [i_1] [i_1] [i_2 + 1] |= ((((var_1 + var_9) + 2605517263)) != 1689450048);
                var_13 = (min(var_13, (((~(((1 < var_11) ? (var_0 > var_0) : (~1))))))));
                arr_8 [i_2] [i_2 - 1] [i_1] [i_2] = (((-((var_5 ? var_4 : var_2)))) == (!var_9));
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_14 = var_4;
                            var_15 = var_9;
                        }
                    }
                }
                var_16 = ((1689450026 ? (var_11 != var_4) : ((var_3 ? var_3 : var_9))));
                var_17 += (~var_4);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_18 *= ((var_0 ? var_9 : 82));
                            var_19 = ((((240 ? var_4 : var_10))) ? 3858915913 : 1689450004);
                            var_20 = (max(var_20, (((~(arr_9 [19] [19]))))));
                            var_21 = (~var_0);
                        }
                    }
                }
                arr_27 [i_0 - 1] [i_0] [i_3] [i_3 - 1] = (~2147483647);
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
            {
                arr_30 [i_1] = -var_2;
                arr_31 [i_1] = var_10;
            }
            var_22 ^= 80;
        }
    }
    var_23 -= var_8;

    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        arr_34 [i_9] = 1689450034;
        var_24 = 173;
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 19;i_10 += 1)
    {
        var_25 = (min(var_25, -31520));
        var_26 = -var_9;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_41 [i_11] [14] |= (1689450020 != 1689450001);

        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {

            for (int i_13 = 3; i_13 < 20;i_13 += 1)
            {
                arr_48 [i_11] = ((1715422015 ? (arr_28 [i_13] [i_13 - 1]) : var_5));
                var_27 += ((1689450075 != (((1 ? 33 : var_2)))));
                var_28 = (((~1) < (~183)));
            }
            for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
            {
                arr_52 [i_14 + 1] [i_11] [i_11] [i_11] = (((arr_10 [i_11]) ? -85 : (arr_10 [i_11])));
                arr_53 [i_11] = (arr_4 [i_12] [i_14 + 1]);
                arr_54 [7] [i_11] [i_14] = ((~(arr_33 [i_14 + 1])));

                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    var_29 = 2147483639;

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_30 = (((arr_47 [i_16] [i_11] [i_11] [0]) ? (2147483657 | -2083240226) : (~var_9)));
                        var_31 = 557110503;
                        var_32 += var_3;
                    }
                }
            }
            for (int i_17 = 0; i_17 < 0;i_17 += 1) /* same iter space */
            {
                arr_64 [i_11] [i_12] [i_11] = -1;
                arr_65 [i_11] [i_11] [i_11] [0] = ((((3679392019 ? (arr_32 [i_12]) : 9)) == (arr_57 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_11] [i_17])));
                arr_66 [i_11] [i_11] [i_11] = (!1024);
            }
            for (int i_18 = 0; i_18 < 0;i_18 += 1) /* same iter space */
            {
                arr_69 [i_11] = 1689450035;
                arr_70 [i_11] [i_12] [i_11] = ((121 - (arr_3 [i_11] [i_11] [i_18 + 1])));
            }
            var_33 += ((var_2 ? (arr_5 [8] [i_11] [i_12]) : 2147483641));
            arr_71 [i_11] [i_11] [i_12] = (!var_3);
        }
        var_34 = ((-(var_11 << var_5)));
    }

    /* vectorizable */
    for (int i_19 = 1; i_19 < 9;i_19 += 1)
    {
        arr_75 [i_19] [i_19] = (~var_3);
        arr_76 [i_19] [i_19 + 2] = (((arr_72 [i_19 + 2]) && (arr_72 [i_19 + 2])));
        var_35 = ((var_8 ? var_7 : (arr_5 [i_19] [i_19 + 2] [i_19])));
        var_36 = (var_1 != -346008806);
        var_37 = ((57883 ? 7074820769849409128 : -19));
    }
    #pragma endscop
}
