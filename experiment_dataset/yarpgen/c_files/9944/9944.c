/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_13 = (((((arr_0 [i_0]) ? (arr_2 [i_0]) : var_9)) != 9223372036854775807));
        var_14 ^= ((!((!(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_15 = ((~((-(arr_3 [i_1] [6])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_15 [i_2] [i_2] = (max(((~(((arr_0 [i_1]) ? var_0 : 18446744073709551615)))), ((((((1 ? (arr_3 [i_4] [i_1]) : var_0))) ? ((-(arr_0 [i_1]))) : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_2 - 1]))))));
                                var_16 = (max(var_16, (((((((~(arr_9 [i_1] [i_1] [i_1] [i_1])))) / (((arr_9 [i_1] [i_1] [i_1] [i_1]) ? 17173763124400631561 : 889011781))))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_2] [i_2] = ((((((var_9 - (arr_5 [i_1] [i_2]))))) ? 275497057511184741 : (((min((arr_10 [i_2 - 1] [i_2] [i_3] [i_2]), (arr_10 [i_2 - 1] [i_2] [4] [4])))))));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_17 = ((15 ? 1 : 65535));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        var_18 = (((max(((((arr_23 [i_6] [i_9]) > 18446744073709551615))), (arr_24 [i_6]))) <= (((var_5 ? ((3041407848972314168 ? 15 : (arr_28 [i_6] [i_6] [i_6] [i_6]))) : (arr_13 [i_6] [i_7] [i_8] [i_8] [i_8]))))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_19 = (((arr_17 [i_6]) ? ((((arr_7 [i_6] [i_6]) ? (arr_9 [i_6] [i_7] [i_8] [i_7]) : (arr_1 [i_7])))) : 32767));
                            var_20 = (min(var_20, (~1272980949308920032)));
                        }
                    }
                }
            }
            var_21 = (max((((!(6545118004042713866 <= 26489)))), var_1));
            var_22 = ((((var_12 ? (arr_4 [i_6]) : (arr_17 [i_7]))) >= (~-1)));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
        {
            var_23 = (max(((((max(var_5, var_1))) ? (arr_8 [i_6]) : (-1378275856 > 32767))), (((((max(var_4, 27408))) < 1)))));
            var_24 = (((((-((min((arr_12 [i_6]), (arr_10 [i_6] [i_6] [i_11] [i_11]))))))) && (((~-102) <= (((arr_8 [i_6]) ? var_4 : 19274712501080098))))));
        }
        arr_33 [i_6] = (((1709904090 ? 1925937268 : 3896643519490532690)));
        var_25 = var_7;
    }
    #pragma endscop
}
