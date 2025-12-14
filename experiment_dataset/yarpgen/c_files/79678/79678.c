/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = ((((min((min(var_1, var_12)), ((max(var_2, var_7)))))) >= (min((((-2147483647 - 1) / 13)), (max(var_1, var_0))))));
            var_16 = (min((((min(var_0, var_4)) % var_13)), ((((~var_4) == (var_4 + var_4))))));
            var_17 ^= ((max(((min(var_11, var_6))), ((18446744073709551602 ? 13 : 20)))) + (((((9223372036854775807 ? -6 : 18446744073709551603))) ? 8557 : 12)));
            var_18 = ((-72 * (max((max(var_0, var_5)), ((max(7958747181834906926, 2124621431)))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_19 = ((min((min(var_1, var_13), (var_6 & var_2)))));
            arr_8 [i_0] [i_2] = (min((max(((var_11 ? var_4 : var_5)), (var_11 / var_2))), (((((min(var_14, var_6))) ? ((var_12 ? var_5 : var_8)) : (((var_3 ? var_1 : var_12))))))));
        }
        var_20 |= ((((((((var_0 ? var_9 : var_14))) ? (max(var_7, var_12)) : ((max(var_9, var_10)))))) + (((((var_8 ? var_2 : var_8))) ? var_14 : (var_1 >= var_12)))));
        var_21 = var_4;
        var_22 |= (max((((var_5 >= var_3) ? var_11 : ((var_3 ? var_3 : var_0)))), (((~(min(var_10, var_14)))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        var_23 = (min((min((max(var_3, var_5)), ((max(var_10, var_9))))), ((max((var_9 & var_9), (!var_1))))));
                        arr_18 [6] [i_5] [i_5] [6] [i_5] = (max(var_10, ((min((var_1 > var_3), (var_12 || var_7))))));
                        arr_19 [i_6] [11] [i_4 - 2] [i_3] [i_3] &= (((((-44 ? -58 : 4))) || var_9));
                        var_24 = ((((~(var_2 == var_4)))) ? ((min(var_6, (max(var_11, var_11))))) : ((((max(var_6, var_2))) ? var_8 : (min(var_11, var_14)))));
                    }
                    arr_20 [i_5] = ((+(min((var_14 <= var_9), (min(var_6, var_8))))));
                    var_25 = (((((((min(var_5, var_3))) ? (max(var_11, var_14)) : -var_10))) || ((max((min(var_4, var_8)), ((min(2207802914, 35197))))))));
                }
            }
        }
        var_26 *= ((var_13 ? var_10 : (max((var_10 - var_6), (min(var_1, var_4))))));
        var_27 *= (min(806466820403485442, 12));
        arr_21 [i_3] = ((max((max(17640277253306066173, -61)), ((max(var_5, var_9))))) | ((max(((min(var_10, var_10))), (max(var_7, var_14))))));
    }
    var_28 = ((var_3 ? (18446744073709551595 || -1304202512) : var_13));
    var_29 = ((~(min((var_3 ^ var_4), ((max(var_5, var_14)))))));
    var_30 = (min(var_30, (((((min((var_14 <= var_2), (max(var_2, var_11))))) ? ((var_6 ? (max(var_5, var_12)) : var_7)) : (((-(var_12 > var_14)))))))));
    #pragma endscop
}
