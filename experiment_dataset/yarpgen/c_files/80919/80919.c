/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 -= ((-((((!-120) == -120)))));
        var_13 = (max((((~24) & 123)), 1));
        var_14 += (((arr_1 [i_0]) && ((max(-22, (arr_1 [i_0]))))));
        var_15 = var_5;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 += min((min((((!(arr_2 [i_1] [i_1])))), ((14368590314517991602 ? -33 : var_2)))), (((min((arr_3 [i_1]), var_8)))));

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 = -var_11;
                            arr_15 [8] [i_1] [1] [i_3] [14] [14] [i_5] = var_6;
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_21 [i_7] = 99;
                    arr_22 [i_1] [i_1] [i_6] [17] &= ((((-(arr_19 [i_1] [i_2] [i_2 + 3] [i_7 + 2])))) ? 14368590314517991594 : ((((9344040199983941515 != (arr_19 [i_1] [7] [i_2 - 1] [i_7 - 3]))))));
                    var_18 ^= (((min((var_1 | 65531), ((var_2 ? 17379755243154681595 : (arr_16 [10] [10] [i_2 - 1]))))) ^ (var_2 ^ -610453423)));
                }
                for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_8] = ((-1 ? (((min(2981, 1)))) : ((-6 ? 4095365842 : (!1)))));
                    var_19 = (min(var_19, (((max((arr_3 [i_2]), (-1 == var_3)))))));
                    var_20 += 121;
                    var_21 = (min(var_21, var_9));
                }
                for (int i_9 = 3; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    arr_29 [i_1] [16] [i_9] [i_9 + 3] = (min((((max(1826240433, 199601453)))), var_2));

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        var_22 = var_8;
                        arr_32 [9] [i_10] [i_9] = (var_9 || var_3);
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        var_23 = ((-var_1 ? (var_1 | -25) : (var_7 > 1)));
                        var_24 = (((var_1 || -729125988) + -26));
                    }
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        var_25 *= ((0 ? -2025029214 : -1674022385));
                        arr_39 [i_1] [i_2] [i_9] [i_9 + 3] [i_1] = (min(1515173692, -17));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_26 += var_1;
                        arr_42 [i_1] [6] [i_1] [6] [i_9] = -24;
                    }
                    var_27 = (min((var_4 || 217), (min(-var_2, (arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));

                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_28 = ((~(((!((min(var_8, var_10))))))));
                        var_29 += 1826240432;
                        var_30 = ((-33 * (min(((1826240415 ? 9172303647360285441 : 18014398509481983)), 0))));
                    }
                }
                for (int i_15 = 3; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    var_31 = (max(var_31, ((((var_7 & var_8) * ((var_5 * ((((arr_47 [16] [0] [i_2] [10] [i_6] [i_15 - 2]) * var_11))))))))));

                    for (int i_16 = 3; i_16 < 16;i_16 += 1)
                    {
                        var_32 = (i_15 % 2 == zero) ? ((min(((+((1515173692 << (((arr_45 [i_15]) - 23511)))))), (((1 == (arr_11 [i_1] [13] [13] [i_15] [i_15]))))))) : ((min(((+((1515173692 << (((((arr_45 [i_15]) - 23511)) - 39186)))))), (((1 == (arr_11 [i_1] [13] [13] [i_15] [i_15])))))));
                        var_33 = (arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [0]);
                    }
                }
                var_34 = (arr_7 [i_1] [i_2] [i_6]);

                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    var_35 += 15;
                    arr_55 [i_1] = -65535;
                    var_36 = (min(var_36, ((max(261888, (((((1 ? 15 : var_8)) < var_6))))))));
                }
            }
            for (int i_18 = 2; i_18 < 15;i_18 += 1)
            {
                var_37 += (min((arr_51 [i_2] [i_2] [i_2] [9]), (((var_3 ? (arr_46 [i_1] [i_1] [i_18 + 3] [i_18 - 1] [i_18 + 3] [i_18]) : 0)))));
                var_38 = 11;
            }
            /* vectorizable */
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                arr_62 [i_1] = ((((((arr_35 [i_1] [i_1] [i_1] [16] [16]) - var_5))) ? (((-33 ? -1056810209 : 176))) : (arr_34 [i_1] [i_2] [i_19])));
                var_39 -= -var_6;
            }
            arr_63 [i_1] [i_2] = (((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (~2134461734) : (var_4 + -var_4)));
            arr_64 [i_1] = ((33 << (max(1, -1056810209))));
        }
    }
    var_40 += (((~var_7) <= -var_4));
    #pragma endscop
}
