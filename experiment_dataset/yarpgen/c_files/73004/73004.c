/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (((var_13 ? (((13413190307753367611 ? 0 : var_3))) : ((0 ? 4294967295 : 6876243982196431014)))));
        var_15 = (max((((1 >> ((((var_8 ? var_14 : (arr_1 [i_0]))) - 5837874243650737837))))), (-var_9 | var_11)));
        arr_3 [i_0] [1] = (max(((max(var_14, (arr_0 [i_0])))), ((max(0, var_2)))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_16 = ((-((((((3 ? 15057104694171641177 : var_4))) || (var_3 > 1))))));
        arr_6 [i_1] [1] = (max(((max(123, (var_0 > var_1)))), (((max(var_8, (arr_5 [i_1] [i_1]))) | (((min((arr_4 [i_1] [i_1]), var_6))))))));
        arr_7 [i_1] [i_1] = ((((((((var_6 ? var_13 : var_5))) ? (~31) : var_6))) ? (~18446744073709551603) : (max((~var_10), (var_12 ^ 15057104694171641185)))));
        arr_8 [i_1 - 1] = (max((min((((arr_4 [i_1] [i_1]) ? var_8 : var_6)), ((min((arr_4 [i_1] [i_1]), var_11))))), ((min(93882480, var_11)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_17 ^= var_7;
                arr_16 [i_2] = (max((127 | 1), (min(-213001456, var_3))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_26 [i_3] [i_2] = (min(((~((var_6 ? var_13 : (arr_11 [i_5]))))), var_4));
                                arr_27 [i_2] [i_4] [i_2] = (((arr_22 [i_3] [i_2] [i_3]) ? var_2 : (min(((1443414411 >> (8996744054663163249 - 8996744054663163230))), (!213001455)))));
                                arr_28 [i_6] [i_2] [i_4] [i_4] [i_2] [i_2] = (arr_21 [i_2 + 1] [i_2] [i_3] [8] [4] [i_6]);
                                arr_29 [i_2] [4] [2] [i_5] [0] [i_4] [i_6] &= ((!((((max(var_10, var_14)) / (((var_5 ? var_11 : var_4))))))));
                            }
                            for (int i_7 = 2; i_7 < 13;i_7 += 1)
                            {
                                var_18 = (min(var_18, ((((var_1 || var_10) > (arr_31 [i_4] [i_2 - 1] [i_4] [i_2 - 1] [i_4] [i_4] [i_2 - 1]))))));
                                arr_34 [i_2] [i_4] [i_4] [8] [i_2] = (arr_24 [i_7] [1] [i_5] [5] [i_3] [1] [i_2]);
                                arr_35 [i_4] [i_4] &= (min((((!(~9223372036854775797)))), ((((((arr_9 [i_4] [i_4]) > var_9))) >> (-20 + 49)))));
                            }
                            for (int i_8 = 0; i_8 < 16;i_8 += 1)
                            {
                                var_19 &= (((((((var_0 ? var_14 : var_6))) ? 15121 : (min(var_14, var_14)))) >> var_1));
                                var_20 *= ((-(min(var_11, (arr_11 [i_2 + 1])))));
                                var_21 ^= ((var_5 ? (((((var_1 ? var_0 : (arr_25 [8] [8] [i_3] [i_2])))) ? var_1 : (min(var_7, var_8)))) : var_0));
                                arr_39 [i_2] [i_3] [i_4] [i_3] [i_2] = var_12;
                            }
                            var_22 = var_6;
                        }
                    }
                }
                var_23 = (~((11 ? (~18832) : 4294967295)));
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        arr_43 [i_9 + 2] = var_5;
        var_24 &= (((arr_9 [8] [8]) * var_6));
    }
    var_25 *= min(-var_9, (var_13 * var_6));
    #pragma endscop
}
