/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_11 &= max((max(134, ((~(arr_3 [i_0] [i_0]))))), ((max((~var_5), (min((arr_11 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0]), -113197850))))));
                            var_12 = var_5;
                        }
                    }
                }
            }
            var_13 += ((((var_8 || var_1) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) : ((var_4 ? (arr_6 [i_1]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_14 = var_2;

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_15 -= (~var_1);
                var_16 = (((arr_5 [i_0]) % (~var_3)));
                arr_20 [i_5] [i_5] [i_6] [i_6] = (((arr_19 [i_5]) - (arr_19 [i_5])));
                var_17 = (min(var_17, (!56)));
                arr_21 [i_5] [i_5] = var_2;
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_25 [i_0] [i_7] = -var_2;

            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                arr_30 [i_0] [i_0] [i_0] = (4744329585365288073 ? var_1 : (arr_14 [i_7] [i_8 - 2] [i_8] [i_8] [i_0] [i_0] [i_0]));
                var_18 -= ((56 ? ((var_7 ? var_4 : 77832198291890311)) : var_5));
                arr_31 [i_0] [i_7] [i_7] = (arr_9 [i_8 - 2] [i_7] [i_8] [i_8]);
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_19 -= (arr_28 [i_0] [i_0] [i_0]);
                var_20 = (var_4 > var_1);
                arr_34 [i_0] [i_7] [i_9] = ((299434260 ? var_0 : (arr_1 [i_0])));
                arr_35 [i_7] [i_9] [i_0] [i_0] = var_3;
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {
                arr_39 [18] [3] [i_10] [i_7] = var_0;
                var_21 = var_5;
                arr_40 [i_0] [i_7] [i_10] |= (((56 & 77832198291890311) ? 225 : 65532));
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_22 = (arr_41 [i_0] [i_7] [i_11]);
                    arr_46 [17] [i_7] [i_7] = arr_3 [i_0] [i_7];
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    arr_51 [i_0] [17] [17] = ((1 ? ((2758941510776995597 ? (arr_33 [i_11]) : (arr_27 [i_0] [i_0] [i_0] [i_0]))) : 120));
                    var_23 ^= (~113197850);
                    arr_52 [i_13] [i_13] [i_11] [i_7] [i_0] [i_0] = (var_5 > var_0);
                }
                var_24 = ((!(arr_26 [i_0] [i_0] [i_0])));
            }
        }
        var_25 = (((!232) && var_4));

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_26 = (max((((-((var_6 ? -113197875 : var_2))))), -var_6));

                /* vectorizable */
                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    var_27 = arr_37 [i_16 + 3];
                    var_28 -= (((((var_7 ? var_9 : -113197875))) || (((7 ? (arr_15 [i_14] [i_14] [i_15]) : var_9)))));
                }
            }
            arr_60 [i_14] [i_0] [17] = 9223372036854775807;
        }
    }
    /* vectorizable */
    for (int i_17 = 4; i_17 < 18;i_17 += 1)
    {
        var_29 = (((var_9 ? var_9 : 1284509867)));
        arr_65 [i_17] [i_17] = (arr_64 [i_17]);
    }
    for (int i_18 = 1; i_18 < 1;i_18 += 1)
    {
        var_30 = (max(var_30, ((min(((((arr_66 [22] [22]) <= var_3))), (min((arr_66 [i_18 - 1] [4]), 185)))))));
        var_31 = (min(var_31, ((((max((min((arr_66 [i_18] [i_18]), var_7)), (arr_67 [i_18 - 1] [i_18 - 1]))) * (((~255) ? ((var_7 >> (((arr_66 [i_18] [i_18 - 1]) - 672672395)))) : (222 || 4))))))));
    }
    var_32 = (((min(0, 41))));
    var_33 = (var_9 ? ((-(var_9 - -54502775938234203))) : (((min(var_3, var_1)))));
    var_34 = (max((min((var_3 > -65532), (var_6 & 1580207289))), var_6));
    #pragma endscop
}
