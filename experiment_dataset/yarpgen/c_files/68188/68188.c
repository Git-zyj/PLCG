/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= (!var_5);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = ((180 >= (((!(6240 | -6236))))));

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] = ((((max(((255 >> (arr_6 [i_3 + 1]))), ((min((arr_1 [i_0] [i_3]), (arr_1 [i_2] [i_3]))))))) ? (((arr_11 [i_3 - 2] [i_3] [i_3 + 1] [i_3 - 1]) + var_10)) : var_13));
                        var_21 = (((((((arr_9 [i_0] [i_1] [i_2] [i_3]) ? var_5 : 7722640156065196843)) + (arr_0 [i_0]))) - (min(((var_15 + (arr_4 [i_0] [i_0] [i_0]))), (arr_7 [i_3] [i_3] [i_3] [i_3 - 2])))));
                        arr_13 [i_3 - 3] = (((((var_7 && var_8) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : var_11)) == var_2));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_2] [i_4 + 1] = ((-((52616 << (((((arr_17 [i_0] [i_1] [i_2] [i_4]) + 600781927188557792)) - 14))))));
                        var_22 = (((arr_17 [i_4 + 2] [i_4] [i_4] [i_4 - 4]) ? (arr_8 [i_4 + 2] [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_4 - 3]) : (arr_7 [i_4 + 2] [i_4 - 4] [i_4] [i_4])));
                        arr_19 [i_2] [i_0] |= (((arr_3 [i_0] [i_0] [i_0]) >= (arr_17 [i_4 - 1] [i_4 - 2] [i_4 - 4] [i_4 - 4])));
                        arr_20 [i_0] [i_1] [i_2] [i_4] = ((-(((arr_14 [i_0]) ? var_16 : var_11))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_1] [i_6] = -27165;
                            var_23 = (arr_24 [i_0] [i_1] [i_2] [i_5] [i_6]);
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((arr_16 [i_0] [i_7 - 1] [i_2]) <= 536870896));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_25 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 - 1]);
                            var_25 = (((arr_8 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 2] [i_7]) & ((-(arr_8 [i_0] [i_1] [i_2] [i_5] [i_7] [i_7 - 1])))));
                        }
                        for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_26 = -1147220928;
                            var_27 = ((var_14 ? (arr_23 [i_8] [i_1] [i_2] [i_5]) : (arr_8 [i_0] [i_1] [i_2] [i_5] [i_2] [i_8])));
                            var_28 = (arr_32 [i_0] [i_1] [i_2] [i_1] [i_8 + 1] [i_1] [i_0]);
                        }
                        for (int i_9 = 1; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_29 = (arr_33 [i_1] [i_5] [i_9]);
                            arr_38 [i_9] [i_9] [i_2] [i_5] [i_0] [i_1] [i_5] = ((arr_8 [i_9] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9] [i_9 - 1]) ? 2483001773 : 255);
                            var_30 = (max(var_30, ((((var_14 / 254) + (arr_32 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_9]))))));
                        }
                        var_31 = var_10;
                        arr_39 [i_5] [i_1] [i_1] [i_5] [i_2] [i_5] = 4353467718982766228;
                        arr_40 [i_0] [i_1] [i_2] [i_5] = ((-((-(arr_23 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        arr_43 [i_1] [i_10] = var_10;
                        var_32 = ((((min((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_29 [i_0] [i_1] [i_2] [i_10]))), var_5))) ? ((((max(var_2, 255))))) : 1184148371));
                    }
                    arr_44 [i_0] = 60260;
                    var_33 ^= 4258461925;
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_34 = (((5276 && 7144429756341377297) ? ((((!(arr_7 [i_11] [i_1] [i_0] [i_0]))))) : (((((var_16 ? 3110818924 : (arr_1 [i_0] [i_1])))) ? (arr_34 [i_11] [i_11] [i_0] [i_0] [i_0] [i_0]) : (((arr_10 [i_11] [i_11] [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_46 [i_11] [i_1] [i_0])))))));

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_49 [i_0] [i_1] [i_0] [i_12] = ((-(((-7722640156065196843 > var_0) ? -150 : -1184148372))));
                        var_35 = (((arr_11 [i_0] [i_1] [i_11] [i_12]) & var_5));
                        var_36 = (((((((max(var_13, var_13)) == (arr_3 [i_1] [i_11] [i_12]))))) <= ((4163004044 & (arr_8 [i_0] [i_0] [i_1] [i_11] [i_12] [i_12])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
