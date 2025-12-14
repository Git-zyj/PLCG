/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((min((min(16090162970827466299, var_5)), (68 % 1)))) ? (min(((8 ? 8881064055595416414 : 54643)), var_6)) : (((var_8 % (min(2047839269, 55458))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 *= (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_12 = ((!(arr_0 [i_0])));
            arr_6 [i_1] [2] [i_0] = (arr_3 [i_0] [i_1]);
            var_13 = (-5 | 3271506144);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_14 = (min(var_14, (((var_1 < (arr_7 [i_0] [i_0] [i_2]))))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_15 [i_0] [i_2] [i_2] [i_0] [i_0] = (((arr_14 [i_0] [i_3] [i_0] [i_0]) ? var_3 : (arr_4 [i_0] [10] [i_0])));

                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_15 &= (((((arr_13 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 + 2]) + 2147483647)) << (((((arr_13 [i_5] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 2]) + 20331)) - 7))));
                        arr_18 [i_0] [i_3] [i_2] [i_0] = (arr_8 [i_0] [i_0]);
                        arr_19 [i_0] [i_0] [1] [10] [i_0] = (((arr_13 [i_2] [i_4] [9] [i_5 + 1] [i_5 + 1]) && (arr_13 [4] [0] [0] [i_5 - 1] [i_5 + 1])));
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [i_4] [i_4] [0] [i_4] [0] &= (arr_13 [i_3] [i_3] [i_3] [i_2] [0]);
                        var_16 &= (-5314053640663449406 != 2247128026);
                    }
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_17 += var_5;
                    arr_27 [i_0] [i_0] [i_0] [10] [i_3] &= var_0;
                }

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_18 -= ((-((6175108120685190732 ? (arr_20 [i_3]) : (arr_29 [2] [2] [2] [i_0])))));
                    var_19 = (((((2247128012 - (arr_21 [i_0] [i_0])))) ? (arr_11 [i_0]) : ((var_6 ? (arr_22 [i_0] [1] [i_0] [9] [1]) : var_5))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_2] [i_0] [i_3] [i_9] [i_10] = 230630082;
                        arr_38 [i_0] [10] [9] [0] [i_0] [i_0] [i_0] = (((((arr_29 [9] [9] [i_3] [9]) ? (arr_10 [i_0]) : var_5)) >= var_6));
                        arr_39 [i_0] [i_0] [i_3] [i_0] [4] = (((arr_9 [i_0]) ? (arr_5 [i_0]) : 2047839290));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_44 [i_0] [i_3] &= (((~-210678791) ^ (((arr_22 [i_11] [2] [i_3] [4] [i_11]) ^ -32753))));
                        var_20 = (arr_5 [i_0]);
                    }
                    var_21 -= ((var_6 ? (arr_4 [i_9] [i_2] [i_3]) : (arr_4 [i_3] [i_0] [i_3])));
                    var_22 = (min(var_22, ((((arr_41 [i_0]) ? (arr_41 [i_2]) : (arr_41 [i_3]))))));
                    arr_45 [8] [0] [i_0] [3] = (((var_3 || var_3) ? var_6 : ((((var_1 && (arr_9 [i_0])))))));
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 7;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((((arr_31 [i_13 + 1] [i_13 + 1] [i_13] [i_3]) ? (arr_3 [i_3] [i_12 + 2]) : (arr_31 [i_13 + 2] [i_13] [0] [i_3]))))));
                            arr_50 [i_0] [i_2] [i_3] [i_12] [4] = (((arr_0 [i_2]) ? 5440590165186751480 : var_5));
                            var_24 = (arr_13 [10] [i_12] [i_3] [7] [i_0]);
                            var_25 ^= ((var_7 ? (arr_31 [i_2] [i_12 + 4] [i_13 + 2] [i_3]) : (arr_26 [i_12] [i_12 + 1] [i_13 + 3] [i_13] [i_13] [i_3])));
                        }
                    }
                }
                arr_51 [i_0] [i_2] = var_2;
                var_26 = ((((var_2 || (arr_28 [2] [2] [i_0]))) ? var_5 : (arr_46 [i_0] [i_2] [i_3] [i_3])));
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                var_27 -= -230630083;
                var_28 = (((arr_34 [i_0] [7] [i_0] [i_2] [i_2] [i_0] [i_0]) ? var_0 : (arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_0])));
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            var_29 = (((((105 ? 1 : (arr_14 [i_0] [i_0] [5] [i_0])))) ? (arr_8 [i_0] [i_0]) : (((arr_40 [i_0]) ? -1612505078393769779 : (arr_47 [i_0] [i_15] [1] [i_0] [i_15] [1])))));
            var_30 = (min(var_30, ((32752 ? (arr_14 [10] [10] [i_15] [i_15]) : 10))));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            var_31 *= arr_16 [1];
            var_32 = (-(arr_3 [1] [1]));
            var_33 ^= (arr_28 [i_0] [i_0] [6]);
            var_34 = (230630082 <= var_2);
        }
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
    {
        arr_61 [i_17] |= ((((min((arr_59 [i_17] [i_17]), var_7))) || ((min(var_2, (arr_59 [i_17] [i_17]))))));
        arr_62 [i_17] = ((((var_0 ? (min(3225653335, var_2)) : (((((arr_60 [i_17]) >= (arr_58 [i_17])))))))) ? ((min((var_7 & var_1), (min((arr_59 [i_17] [i_17]), 1343884593))))) : (min((var_1 || var_7), (((arr_58 [i_17]) ? (arr_58 [i_17]) : (arr_59 [1] [1]))))));
        arr_63 [i_17] [i_17] = 4;
        var_35 = 600;
    }
    for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
    {
        var_36 = (min(var_36, ((((min(((((arr_64 [13]) ? (arr_64 [1]) : var_3))), var_9)) >= ((((!(arr_59 [i_18] [i_18]))))))))));
        var_37 = 47572;
        arr_66 [i_18] [i_18] = min((44 * 12730710413089038224), (arr_64 [i_18]));
    }
    #pragma endscop
}
