/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_8));
    var_19 = var_11;
    var_20 = 55792;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((-(arr_3 [16] [i_1])))))));
                arr_4 [i_0 - 3] [i_1] = (((arr_0 [i_0 - 3]) && (arr_0 [15])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_22 *= (arr_2 [i_0 - 3]);
                    var_23 = -var_12;
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_24 += (((arr_3 [i_1 + 2] [i_1 + 2]) / var_2));
                        arr_13 [i_3] = ((((-(arr_5 [i_0 - 3] [i_0 - 3] [i_3]))) << (18446744073709551608 - 18446744073709551608)));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_25 |= (~(arr_3 [i_0 - 1] [i_0 - 2]));
                        var_26 = 96;
                        var_27 = (max(var_27, (((~(((!(arr_6 [i_5] [i_0] [i_0])))))))));
                        var_28 = var_10;
                    }
                    var_29 = ((((~(-2147483647 - 1))) >= (((!(arr_9 [i_0] [i_0] [i_1] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_30 = (((arr_18 [i_0 - 3] [i_1] [i_3] [i_3] [i_7]) ? ((73 ? (arr_19 [i_0] [i_0 - 3]) : var_12)) : (arr_16 [i_0 - 3] [i_0 - 3] [i_3] [12] [i_7 - 1] [i_7])));
                                var_31 = (((((55792 ? 99 : -1895975695630809337))) ? (arr_18 [i_7] [i_7] [i_7] [i_7 - 1] [i_0 - 1]) : (arr_0 [i_0 - 2])));
                                var_32 = (((arr_3 [i_0 - 3] [i_1 + 1]) ? (arr_3 [i_0 + 1] [i_1 + 1]) : (arr_3 [i_0 - 3] [i_1 - 1])));
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_3] = ((~(arr_7 [i_0 + 1] [i_0 + 1])));
                }
            }
        }
    }
    var_33 = var_4;
    #pragma endscop
}
