/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (max((arr_1 [i_0]), (max(var_4, (arr_1 [i_0])))));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ^ (((arr_0 [i_0]) ? -767635904 : (arr_0 [i_0])))))) || (((((max((arr_1 [i_0]), 1))) ? (arr_1 [i_0]) : ((1 ? 1 : 1)))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (~0);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_11 = 32;

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_12 &= var_3;
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_1] [i_5] = ((((((max(255, 43)) && 1)))));
                            var_13 = (max(var_13, ((((((arr_14 [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1]) ? 4294967295 : (max((arr_10 [i_5] [i_2] [i_2]), (arr_4 [i_5]))))) ^ (((+((min((arr_16 [i_1]), (arr_10 [i_1] [i_2] [i_3]))))))))))));
                            var_14 = (max(var_14, var_2));
                            var_15 = ((((((((arr_15 [i_2] [i_4] [i_2] [i_3] [i_2] [i_1]) ? var_0 : var_9)) >= -6363))) % (((arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 3]) ? (arr_14 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 3]) : (arr_5 [i_1])))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_1] [i_2] [i_2] [i_1] [i_1] = ((((max(var_9, (!-3292184541263530073)))) | ((((((arr_15 [i_1] [i_2] [i_3] [i_2] [i_3] [i_1]) <= var_3))) << (((max(var_7, var_7)) - 701410958))))));
                            var_16 = max(var_4, (((!var_5) ? -3292184541263530100 : (!var_8))));
                            arr_23 [i_1] [i_4] [i_6] &= -3292184541263530073;
                            var_17 &= ((-(((((-1 ? (arr_5 [i_1]) : var_6))) ? (var_8 & var_10) : (3737699946 << var_8)))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_4] [i_2] [i_2] [i_1] = (~52);
                            arr_27 [i_2] [i_3] = ((~(max((min((arr_11 [i_1]), var_6)), var_3))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_8] [i_8] = ((((((max(var_9, -10550)) >= -6342))) << (!48)));
                            var_18 = 32767;
                        }
                        arr_31 [i_4] [i_3] [i_1] [i_1] &= ((var_2 * (max(2478627606, (arr_15 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1])))));
                    }
                }
            }
        }
        var_19 = (min(var_19, ((((var_9 ? (~-32767) : -3292184541263530100))))));
        arr_32 [i_1] = ((!((((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((69 ^ (arr_0 [i_1])))) : -9223372036854775807)))));
        arr_33 [i_1] = (!(((var_3 ? (((!(arr_12 [i_1] [i_1] [i_1] [i_1])))) : ((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) <= -10550)))))));
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_20 &= (((((((max(var_4, var_8))) ? (((1016 ? var_7 : var_8))) : (arr_28 [12] [i_9 - 2] [i_9 + 2] [i_9 + 3])))) ? (arr_0 [i_9 - 1]) : -1463436141));
        arr_37 [i_9] = ((((var_4 ? (arr_8 [i_9] [i_9] [i_9]) : 1463436141))) != (max((max(-8843191756380561263, 56116388)), (((var_1 ? var_4 : 2377832052))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    arr_42 [i_9] [i_10] [i_11] &= var_5;

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_21 = 10525;

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_22 = (((arr_46 [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 + 3] [i_9 - 1]) % ((((arr_46 [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 - 2]) / (arr_46 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9 + 1]))))));
                            var_23 = ((-6359031917352161575 ? -1463436133 : -1463436141));
                            var_24 &= (((min(1, 6353)) ^ 0));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_25 = (((!var_2) - (arr_14 [i_9] [i_9 - 2] [i_9 + 1] [i_9] [i_9 + 1])));
                            var_26 &= ((1 ? (~-6348) : 1));
                            var_27 = 1;
                            var_28 = ((-((var_6 & (arr_24 [i_9] [i_10] [i_9] [i_12] [i_14])))));
                        }
                    }
                    arr_50 [i_9] [i_10] [i_10] [i_11] = ((((((~(arr_28 [16] [i_10] [i_10] [i_10]))))) ? (arr_35 [i_11]) : var_1));
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
    {
        arr_54 [i_15] &= ((max((8618 | var_8), 6333)));
        var_29 &= var_4;
        var_30 = ((((min((arr_17 [6] [i_15] [i_15]), (1 | var_0)))) ? var_1 : (((~((max((arr_5 [i_15]), (arr_45 [i_15] [i_15] [i_15] [i_15] [i_15])))))))));
    }
    var_31 = (min(var_31, ((min((max(var_10, (var_10 != var_5))), ((-(var_3 * 2975515069))))))));
    var_32 = var_0;
    var_33 &= ((((min((var_10 >> 1), -28))) ? ((((var_8 ? var_10 : var_5)) - (max(4294967270, 1527238343)))) : (((~32365) ? var_7 : 17710))));
    #pragma endscop
}
