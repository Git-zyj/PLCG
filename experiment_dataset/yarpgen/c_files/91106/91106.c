/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            var_20 = -89;
            var_21 |= (var_8 & var_16);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 -= (max(((min(10, (arr_0 [i_0] [i_2])))), (max(var_17, var_3))));
            arr_9 [i_0] [13] [i_0] = -780701194546444092;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_23 = 10;
                        var_24 |= 1502060139;
                        var_25 = (arr_2 [i_0] [i_0]);
                    }
                }
            }
            arr_19 [i_3] [i_3] [i_3] = (arr_12 [i_0] [i_3] [i_3]);

            /* vectorizable */
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    var_26 = ((var_17 ? (arr_21 [i_0] [i_7 + 1] [i_0] [1]) : 1502060131));
                    var_27 += var_15;
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        var_28 = (max(var_28, 1146285067));
                        arr_32 [i_0] [i_3] [i_3] [i_6] [i_3] [i_3] [i_9 - 2] = -780701194546444092;
                    }

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_29 = (arr_27 [17] [i_3]);
                        arr_35 [i_3] [i_3] [i_3] [i_6] [i_8] [1] = (((arr_26 [i_8] [i_3] [i_6] [i_3] [i_3]) > var_14));
                        var_30 = ((10 << (1146285074 - 1146285063)));
                        var_31 = 2147483392;
                    }
                    arr_36 [i_6] [i_0] [i_6] [i_6] [i_3] |= (-4435692017464004600 ^ 255);
                    arr_37 [i_0] [i_3] = 82;
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_32 = -780701194546444092;
                    arr_42 [i_0] [i_11] [i_3] [i_3] = var_16;
                }

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        arr_48 [9] [i_3] [2] [i_12] [9] [i_3] [i_6] = ((~(arr_14 [8] [i_3] [i_6 - 3])));
                        arr_49 [i_6] [i_3] [i_6] [i_3] [i_3] [i_3] [i_13] = var_12;
                        arr_50 [i_3] = (arr_40 [i_6 - 1] [i_6 - 1] [16]);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_33 = (arr_47 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 2]);
                        arr_53 [i_3] [i_0] [i_12] [i_6] [i_3] [i_0] [i_3] = 780701194546444078;
                    }
                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        var_34 -= (286833404 % 31);
                        var_35 = ((var_8 - (arr_55 [i_0] [i_12] [i_6] [i_3] [i_3])));
                        arr_56 [i_0] [i_3] [5] [i_12] [i_15] = (((arr_39 [i_0] [i_3] [i_0] [i_0] [i_15]) ? (arr_40 [i_3] [i_6 - 3] [i_3]) : var_6));
                    }
                    arr_57 [i_0] [i_3] [i_3] [i_3] [i_12] [i_6] = ((112 ? -1146285068 : 3438422660));
                    arr_58 [i_0] [i_3] = (0 & var_9);
                }
                for (int i_16 = 2; i_16 < 17;i_16 += 1) /* same iter space */
                {
                    arr_61 [i_16] [i_3] [i_3] [i_0] = 1;
                    arr_62 [i_3] = var_10;
                    var_36 -= -5845;

                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        var_37 -= var_17;
                        var_38 = (arr_20 [i_6 - 3] [i_16 - 2]);
                    }
                    for (int i_18 = 1; i_18 < 18;i_18 += 1)
                    {
                        arr_69 [i_16] [i_3] [i_6] [i_0] [i_3] [i_3] = (var_18 < var_5);
                        var_39 = var_3;
                        arr_70 [i_3] [i_3] [i_3] [i_6] [i_16] [i_6] [i_3] = var_12;
                        var_40 -= (arr_28 [i_16 + 2]);
                    }
                }
                for (int i_19 = 2; i_19 < 17;i_19 += 1) /* same iter space */
                {
                    var_41 = (224 / var_3);
                    var_42 = 21;
                }
            }
            arr_74 [i_3] = 220;
        }
        for (int i_20 = 4; i_20 < 16;i_20 += 1)
        {
            var_43 = (max(var_43, ((min(var_16, ((max(var_14, -856544636))))))));

            for (int i_21 = 3; i_21 < 16;i_21 += 1)
            {
                arr_81 [i_20] = 220;
                var_44 = 3438422660;
                arr_82 [i_0] [i_20] [i_20] [i_21 + 2] = (arr_54 [i_20] [i_20] [i_21] [i_20]);
                arr_83 [i_20] = 2147483647;
            }
            arr_84 [i_20] [i_20] = 907292782241676125;
            arr_85 [11] [i_20] = (max(var_8, var_5));
        }
        arr_86 [i_0] [i_0] = var_4;
    }
    #pragma endscop
}
