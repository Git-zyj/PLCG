/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((~var_6) ? 9213 : (2250290656232593326 + 2250290656232593335)));
        arr_4 [i_0] [i_0] = (((((var_9 & (arr_2 [i_0])))) ? (var_0 && var_3) : (!2250290656232593326)));
    }
    var_15 = (((((((min(-2250290656232593327, 2250290656232593326))) ? var_9 : var_4))) ? (var_0 * 1) : ((-((var_13 ? -2250290656232593323 : var_6))))));

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 ^= ((((!(((var_5 ? (arr_5 [i_1]) : var_6))))) ? -1 : var_11));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = (((arr_5 [i_1]) / (1 & var_10)));
            var_18 = (max(var_18, ((((((~(arr_6 [14] [i_2])))) && -var_12)))));
            var_19 ^= (var_9 & var_6);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = var_2;

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_21 += (((!315898038) == ((78 ? 8 : 4))));
                var_22 = ((var_0 != (((arr_12 [i_1] [i_1]) ? var_3 : var_12))));
                var_23 = var_8;
                arr_13 [i_4] [i_1] [i_4] = (arr_8 [6] [i_3] [i_4]);
            }
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_24 = (max(var_24, 226099058));
                var_25 ^= 2147483647;
                var_26 *= ((!(var_5 > 1)));
            }
            var_27 |= (arr_17 [i_3] [i_1]);
            arr_18 [i_1] [i_1] = -64;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_28 = (arr_20 [i_6]);

            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                arr_24 [i_1] [i_1] = var_5;
                var_29 = ((var_5 ? (arr_21 [i_1] [i_6] [i_1]) : (arr_5 [i_1])));
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                var_30 = (((((var_9 ? var_6 : 13))) ? (var_10 <= var_4) : (((arr_25 [i_6] [1]) - var_4))));
                var_31 = ((var_10 ? 1 : (arr_28 [i_8 - 2] [i_8] [17] [i_8])));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_32 -= (arr_15 [i_9] [i_9] [i_9] [i_9]);

                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    var_33 = 0;
                    var_34 *= ((-(arr_19 [i_10 + 1])));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_35 = ((!(arr_25 [i_6] [i_6])));
                    var_36 *= (18446744073709551604 || 1);
                }

                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (!120);
                    var_37 += ((arr_28 [i_12 + 2] [i_12 - 1] [1] [i_12 - 1]) && (arr_28 [i_12 - 1] [i_12] [i_12] [i_12 + 3]));
                    arr_40 [i_1] [i_6] [i_6] [i_6] = ((var_12 ? 81 : var_2));
                }
                arr_41 [i_1] = ((var_6 ? ((var_5 ? var_13 : var_6)) : -8286055924675630899));
            }

            for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
            {
                arr_46 [i_6] [18] [i_1] = var_12;
                var_38 = (!var_1);
                var_39 -= (((!1) & ((-(arr_9 [i_1] [1] [1])))));
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
            {
                var_40 = ((!(((-2250290656232593327 ? var_11 : var_6)))));

                for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                {
                    var_41 |= var_8;
                    var_42 = (((arr_22 [i_1] [i_1] [i_1]) ? (arr_22 [i_1] [i_14] [i_1]) : var_6));
                    var_43 = (arr_50 [i_1] [i_15]);
                }
                for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                {
                    var_44 = (arr_43 [i_1] [15] [i_1] [i_1]);
                    var_45 = ((!(((arr_16 [4] [4] [i_1] [i_16]) && (arr_34 [i_16] [i_6] [i_6] [i_1])))));
                }
            }
            for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
            {
                var_46 *= ((17448710237544280986 >= (var_9 + var_9)));
                var_47 *= ((-2250290656232593349 - (arr_42 [i_1] [i_17])));
                var_48 = -3898634332255182728;
                var_49 = ((!(arr_10 [i_1] [i_1] [i_1])));
                var_50 = (min(var_50, (((var_5 % -16699) != (~-45)))));
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_51 *= (((arr_19 [i_20]) <= var_4));

                        for (int i_21 = 0; i_21 < 19;i_21 += 1)
                        {
                            var_52 += (((var_8 ? var_6 : 120)));
                            arr_67 [i_1] [i_1] [i_1] [i_1] [i_21] = ((-(-10782 < 1893695124)));
                        }
                        for (int i_22 = 0; i_22 < 19;i_22 += 1) /* same iter space */
                        {
                            var_53 *= ((((((var_10 ? -2250290656232593327 : 31)) + 9223372036854775807)) << (((((arr_52 [i_18] [i_19] [i_19] [i_20]) + 32495)) - 27))));
                            arr_70 [i_22] [10] [i_1] [i_19] [i_1] = (arr_7 [i_1]);
                        }
                        for (int i_23 = 0; i_23 < 19;i_23 += 1) /* same iter space */
                        {
                            arr_74 [i_1] [i_18] [i_19] [i_18] [i_20] [i_1] [i_23] = (((!var_2) ? 0 : (((-9223372036854775807 - 1) ? (arr_16 [i_1] [9] [i_1] [i_20]) : var_6))));
                            arr_75 [i_1] = (!var_5);
                            var_54 *= ((-40 <= (arr_11 [i_1] [i_19] [i_1] [i_1])));
                        }
                    }
                }
            }
            var_55 = (max(var_55, 0));
            arr_76 [i_1] = 2;
            var_56 *= (!0);
        }
        arr_77 [i_1] [i_1] = 0;
    }
    #pragma endscop
}
