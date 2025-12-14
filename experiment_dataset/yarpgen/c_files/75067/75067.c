/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += -var_17;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = ((arr_1 [i_0 + 1]) >> (((arr_1 [i_0 - 2]) - 75)));
        var_20 = var_9;
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_21 ^= ((-(arr_15 [i_1] [i_4] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            var_22 += ((arr_15 [i_1] [i_1] [i_5] [i_5] [i_5 - 1]) < ((0 ? var_5 : var_9)));
                            var_23 = (min(var_23, (((((((arr_9 [i_5] [i_1] [i_1]) ? (arr_10 [i_5]) : var_2))) ? (arr_6 [i_1 - 1] [i_4 - 1]) : ((((arr_0 [i_3] [i_1]) > 0))))))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_24 = ((-((((arr_16 [i_1 + 1] [i_4 + 2] [i_6 - 1] [i_6 - 1] [i_6]) <= (arr_16 [i_1 - 2] [i_4 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))))));
                            var_25 += (arr_3 [i_1]);
                            arr_19 [i_1 + 1] [i_4] [i_3] [i_4] = 619533685;
                            var_26 = ((-(((!(arr_17 [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_6 - 1]))))));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_27 -= (min((((arr_7 [i_1 + 1]) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 + 1]))), (((arr_7 [i_1 + 1]) ? (arr_7 [i_1 - 2]) : (arr_7 [i_1 - 2])))));
                            var_28 = (max(var_28, (((((max(-619533686, 619533694))) ? ((((arr_6 [i_4 - 3] [i_1 - 2]) && (arr_6 [i_4 - 3] [i_1 - 2])))) : ((var_13 ? (arr_22 [i_1] [i_1] [i_4] [i_3]) : (arr_15 [i_1] [i_2] [i_2] [i_2] [i_2]))))))));
                        }
                        var_29 = (((max(((var_13 ? (arr_2 [i_1]) : (arr_10 [i_4]))), 36)) >= var_1));
                    }
                }
            }
            var_30 &= var_11;
            var_31 = (((((((!(arr_13 [i_1] [i_1] [i_2] [i_2] [i_1]))) ? (max((arr_12 [i_1] [i_1 - 2] [i_1]), -619533673)) : ((max((arr_11 [i_1] [i_1] [i_2] [i_2]), var_0)))))) && (arr_3 [i_1])));
            arr_23 [i_2] [i_2] = (arr_8 [10] [10]);
        }
        var_32 ^= ((((max((arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_11 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))) ? (((((~(arr_1 [i_1 - 1]))) < (((arr_6 [i_1] [i_1]) ^ 1))))) : (arr_6 [i_1 - 1] [i_1 - 2])));
        var_33 += var_14;
    }
    var_34 = min(var_9, (min((var_12 >= var_16), ((var_9 ? 619533694 : var_9)))));
    #pragma endscop
}
