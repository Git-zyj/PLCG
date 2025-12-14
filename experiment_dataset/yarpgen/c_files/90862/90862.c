/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((var_9 ? -6544136220648751475 : (38719 | 255)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = -7870;
                    var_14 = (max(var_14, (max(var_11, (arr_4 [i_1] [i_1] [i_1 + 1])))));
                    var_15 += var_3;
                }
            }
        }
        var_16 = -7870;
    }
    var_17 = (((max((var_12 / -2), 7869)) * -100));

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_13 [i_3] = ((-929972497 ^ (arr_10 [i_3] [i_3])));
            var_18 = (max(var_18, -7870));
            arr_14 [i_3] [i_3] = (var_4 << (((((~7859) + 7891)) - 31)));
            var_19 = var_0;
        }
        var_20 = (((((-((var_10 ? var_3 : 59))))) ? ((249 % ((max(255, 12804))))) : var_10));
    }

    for (int i_5 = 4; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5 - 1] [i_5] = 1615612426;
        var_21 ^= -7861;
        var_22 = (min(var_22, ((min((((arr_17 [i_5]) ? (-7870 <= 4294967280) : (arr_16 [i_5 + 1]))), ((max(3535, -77))))))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_23 = (min(var_23, ((((arr_19 [i_5 - 3] [i_5 + 3] [i_5 - 4]) != var_10)))));
            var_24 ^= 9022450986389893867;
            var_25 = 0;
            var_26 = (arr_15 [i_5 + 2] [i_6]);
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            var_27 = -1;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_31 [i_7 + 1] [i_7 + 1] [i_8] = (((arr_29 [i_8]) < (1166543350 != 1)));
                        arr_32 [i_8] = var_11;
                        var_28 = 65514;
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_29 = ((((((-7862 ? -2147483631 : 9223372036854775807)))) ? (arr_29 [12]) : var_7));
        var_30 = (min(var_30, (((((!(arr_28 [24] [24] [24] [i_10]))) ? (arr_26 [i_10] [i_10] [i_10]) : ((((((((-127 - 1) && 1))) != (((var_5 <= (arr_15 [i_10] [i_10])))))))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_46 [i_11] = ((((((arr_21 [i_14 - 3]) % (arr_29 [i_11])))) && var_0));
                                var_31 = arr_16 [i_10];
                                var_32 = (min(var_32, (((((var_8 ? (arr_33 [i_14 - 2]) : 0)) == (min(-7870, -7272365888717097821)))))));
                                arr_47 [i_10] [i_10] [i_12] [i_12] [0] [i_14 - 2] = ((((((arr_44 [i_10] [i_11] [i_12] [i_13] [i_11] [i_11] [i_14 - 1]) ? 75 : (arr_30 [i_14 + 2] [i_14 - 2] [i_14 - 3] [i_14] [i_14 - 3])))) || (arr_35 [i_10] [i_11])));
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_10] [i_11] [i_12] [i_11] = (max((!1173120714), (((18446744073709551615 + var_9) == (max(0, var_5))))));
                        var_33 = (arr_49 [i_10] [i_10] [i_10] [i_10]);
                    }
                    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                    {

                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            arr_57 [i_11] [i_11] [i_11] [i_17] [i_11] [i_11] [i_11] = 1995436112911818466;
                            arr_58 [i_10] [18] [i_12] [i_16] [i_12] [i_17] = (((((arr_22 [i_16]) % (~3341791903))) << (65535 - 65520)));
                            var_34 = (arr_24 [i_10] [i_10]);
                        }
                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 22;i_18 += 1)
                        {
                            var_35 += (((arr_40 [i_18 + 2] [i_11]) < var_3));
                            arr_62 [i_10] [i_10] [i_10] = ((!(arr_28 [i_18 + 1] [i_16] [i_16] [i_18 + 2])));
                            arr_63 [i_10] = (arr_23 [i_18 + 2] [i_18 + 2] [i_18 - 1]);
                            var_36 = ((var_3 + (arr_23 [i_18 + 1] [i_18 + 1] [i_18 + 1])));
                        }
                        var_37 = (max(var_37, var_8));
                        var_38 = (arr_60 [i_10] [i_10] [i_10] [i_12]);
                        arr_64 [i_12] [i_12] [i_11] = -120;
                    }
                    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
                    {
                        arr_69 [i_10] [i_10] [i_11] [i_12] [16] = (arr_34 [i_10] [i_10]);
                        arr_70 [i_11] [i_11] [i_19] = -2091171695;
                    }
                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        var_39 = 7870;
                        arr_73 [i_12] [i_11] = (arr_20 [i_12]);
                    }
                }
            }
        }
        var_40 = (min(var_40, (((((arr_67 [i_10] [i_10] [i_10] [i_10]) >> (((arr_67 [i_10] [i_10] [i_10] [i_10]) - 4194)))) << (((((arr_15 [7] [i_10]) ? 9223372036854775807 : (arr_15 [i_10] [i_10]))) - 9223372036854775790))))));
    }
    #pragma endscop
}
