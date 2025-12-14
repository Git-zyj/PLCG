/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += max((((!262143) ? (var_13 % var_11) : (max(var_6, 268435456)))), ((((((var_3 ? var_10 : var_0))) ? var_11 : -var_1))));
    var_20 &= var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1) /* same iter space */
                    {
                        var_21 -= ((min(11736, ((var_4 ? (arr_4 [i_2] [i_1]) : var_2)))));
                        var_22 = (max(var_22, ((max((((arr_6 [i_2 + 1] [i_3 + 1] [i_1 + 1]) ? -268435432 : 1)), ((~(arr_2 [i_2 + 1]))))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] |= ((var_6 ? (arr_6 [i_2 - 4] [i_3 + 1] [i_1 - 1]) : var_9));
                            var_23 *= arr_2 [i_1 - 1];
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] [i_0] [i_2 + 1] [i_0] [i_0] |= var_10;
                            var_24 ^= (((arr_7 [i_0] [i_1] [4] [i_5]) || ((((arr_14 [i_0] [i_1] [i_2] [i_3] [i_3 + 2] [i_1 - 2] [i_5]) ? (arr_0 [i_1]) : (((var_16 ? var_10 : (arr_2 [i_0])))))))));
                        }

                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_25 = (min(var_25, (((((min(((~(arr_8 [i_3] [i_2 - 4] [i_1]))), (arr_5 [i_1 + 2] [i_6 + 1])))) ? var_7 : (((12349 ? (arr_1 [i_0] [i_3 + 1]) : 47938))))))));
                            var_26 = (arr_18 [i_0] [i_3] [i_2 + 1] [i_2 + 1]);
                        }
                    }
                    for (int i_7 = 1; i_7 < 7;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_7] = arr_5 [9] [i_1 - 2];
                        var_27 = (max(((-4482132506032798948 * (0 % var_6))), (((-(arr_7 [i_2] [7] [4] [i_2]))))));
                    }
                    var_28 += (max((((arr_18 [i_0] [i_1 + 2] [i_1 - 2] [i_2 - 3]) ? var_18 : (arr_18 [i_1 + 2] [i_1] [i_1 - 2] [i_2 - 3]))), 8388608));
                    arr_24 [i_0] [i_1] [i_2 - 3] |= (arr_19 [i_2 - 3] [6] [i_2 - 1] [i_2] [2]);
                    var_29 = (min(((max(var_5, (arr_15 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_2 - 1] [9] [i_2])))), ((-(((var_11 && (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]))))))));
                }
            }
        }
        var_30 = (min(var_30, ((((((((((arr_9 [i_0] [i_0] [i_0] [i_0]) & var_7))) ? var_6 : ((min(1626507263, 268435475)))))) ? 185 : 268435456)))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_31 = ((((min((arr_25 [i_8] [i_8]), var_1))) == (((min(var_3, var_8)) / var_0))));
        arr_28 [0] [i_8] = (((((268435456 * (2097151 / 3606040858)))) ? (((arr_27 [i_8]) ? ((max((arr_25 [i_8] [8]), -268435476))) : (arr_27 [i_8]))) : (((104 ? (arr_27 [i_8]) : (((arr_27 [i_8]) ^ (arr_26 [i_8]))))))));
        var_32 = (max(var_32, (((((!(arr_25 [i_8] [i_8]))) ? (min((arr_26 [i_8]), (arr_25 [i_8] [i_8]))) : ((((!var_1) ? var_9 : (0 && 65535)))))))));
        var_33 = (max(var_33, 65535));
    }
    #pragma endscop
}
