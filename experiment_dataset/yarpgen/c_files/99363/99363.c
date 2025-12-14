/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = var_0;
        arr_3 [i_0] = (((((var_1 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (~var_6) : (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = var_7;
        var_12 = (max((min(var_8, (var_2 | var_2))), var_10));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_2] = (min((((~((((arr_16 [i_2] [i_3] [i_3] [i_4]) >= var_0)))))), (max(var_1, (arr_9 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_5;
                                arr_28 [i_2] &= var_5;
                                var_13 = (max(var_13, var_9));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_14 = var_0;
                                var_15 = ((((!(var_0 && var_5))) ? var_9 : (arr_21 [i_8 - 1] [i_8 - 1])));
                            }
                        }
                    }
                    arr_38 [i_2] [i_2] [i_3] [i_7] = ((+(((arr_23 [i_2] [i_2]) ? var_3 : (((min((arr_34 [i_7]), var_8))))))));
                    var_16 = ((var_5 && ((((arr_10 [i_3]) ? (arr_10 [i_7]) : (arr_10 [i_7]))))));
                }

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_17 = (min(var_17, (((var_3 ? ((((9223372036854775784 || 6944066546201662919) <= ((65526 ? -3170770038376868176 : 7))))) : ((((arr_34 [i_10]) >= var_6))))))));
                    var_18 = (max(var_18, ((((min(var_6, ((var_2 ? (-9223372036854775807 - 1) : 3831216223021271078)))) > (!var_3))))));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_19 *= (arr_39 [i_2] [i_3] [i_10] [i_10]);
                        var_20 = min(((((arr_15 [i_2] [i_3] [i_10] [i_11]) > (arr_2 [i_2])))), (((arr_1 [i_2]) ? (arr_35 [i_11] [i_11] [i_11] [i_10]) : (var_4 & var_8))));
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_21 = (((((arr_1 [i_2]) % (min(-9223372036854775784, 204)))) | (var_7 - var_6)));
                        var_22 = (((((var_10 / (arr_22 [i_3])))) && (arr_29 [i_2] [i_12])));
                        var_23 |= ((-((((arr_26 [i_2] [i_3] [i_3] [i_3] [i_12]) != (arr_10 [i_3]))))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_24 = (max(var_24, ((((((min(var_3, var_5)) ? ((min(var_4, var_4))) : ((((arr_40 [i_2] [i_3]) >= var_10))))))))));
                        var_25 = var_10;
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_26 = (min(var_26, ((((-(arr_46 [i_2] [i_10] [i_2] [i_2])))))));
                        var_27 |= ((var_3 > ((min(65528, 1469256735)))));
                        var_28 = -59123;
                    }
                    var_29 = (23244 & -1469256753);
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                {
                    var_30 = (max(((((arr_33 [i_15] [i_15] [i_3] [i_2]) >= (arr_48 [i_2] [i_2] [i_3] [i_3] [i_15] [i_15])))), var_7));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_31 = ((((min(var_2, (1469256754 != 64)))) ? var_3 : ((((!(var_6 <= var_7)))))));
                                arr_56 [i_17] = (max(207, 65534));
                                var_32 = (((arr_35 [i_3] [i_3] [i_3] [i_17]) + (!-6823720981573299200)));
                            }
                        }
                    }
                    arr_57 [i_2] [i_3] [i_15] = -var_6;
                    var_33 -= (min(-5965, 3170770038376868175));
                    var_34 = ((((var_5 >> (var_6 + 29030)))));
                }
                for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                {
                    arr_61 [i_2] [i_3] [i_18] |= (41879 && 3170770038376868175);
                    var_35 = (min(var_35, ((min(((-(((var_8 >= (arr_37 [i_2] [i_3] [i_18] [i_18] [i_3])))))), (arr_54 [i_2] [i_3] [i_3] [i_18] [i_18] [i_18]))))));
                    arr_62 [i_18] = ((((((0 & 11502677527507888693) ? (arr_29 [i_3] [i_3]) : (var_4 / var_9)))) ? (min((arr_34 [i_3]), var_3)) : ((((!(arr_22 [i_18])))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
    {
        var_36 = (min(var_36, var_5));
        var_37 = ((var_5 ? (arr_64 [i_19]) : (arr_64 [i_19])));
    }
    for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
    {
        var_38 += (min(65516, 2328217652));
        arr_70 [i_20] = (arr_66 [i_20]);
        var_39 = (max(var_39, ((min((var_3 < var_10), (min(var_10, (var_6 % var_7))))))));
    }

    for (int i_21 = 1; i_21 < 17;i_21 += 1)
    {
        arr_74 [i_21 + 2] = (((arr_71 [i_21]) ? -247 : var_10));
        var_40 = var_1;
        var_41 = (max(var_41, ((((var_9 || 1469256735) ? var_3 : (((arr_73 [i_21 + 2]) ? (((arr_2 [i_21 - 1]) % var_1)) : ((((-127 - 1) - 2328217652))))))))));
    }
    for (int i_22 = 1; i_22 < 22;i_22 += 1)
    {
        var_42 = (max(var_42, ((!((9 || (1469256735 == 39)))))));
        var_43 *= ((((!(arr_76 [i_22 + 1] [i_22 + 2])))) | (((var_3 < (!-6282)))));
    }
    #pragma endscop
}
