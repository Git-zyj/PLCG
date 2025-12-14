/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 += (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3 + 1] = (((((-19930 ? ((((arr_5 [i_0] [i_1]) && (arr_9 [1] [1] [i_2 + 1] [1] [i_4])))) : (((arr_3 [12] [i_2 + 1]) / (arr_7 [i_3] [i_2] [i_1])))))) ? (max((arr_10 [i_3] [i_3 + 1] [i_3 + 1] [6] [i_4]), (arr_4 [i_2] [i_3 + 1] [i_4] [i_4]))) : ((max((-14968 > var_6), (arr_11 [2] [i_1] [i_2] [i_2 + 1] [i_4] [i_1] [i_2]))))));
                                var_13 -= (max((!-19930), (max((arr_8 [i_0] [i_1] [i_2 + 1] [i_3 - 1] [i_4]), (arr_8 [i_4] [i_1] [i_2 - 1] [i_3 - 1] [i_4])))));
                                var_14 = (max(((-(arr_4 [i_0] [i_2 + 1] [i_2 + 1] [i_3]))), (((+(((arr_4 [i_4] [i_3 - 1] [8] [0]) ? (arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_4]) : (arr_2 [i_0] [i_1] [i_2 + 1]))))))));
                                var_15 = (max(-19930, 1048064));
                                arr_13 [i_4] [i_3] [i_1] = ((min(((137 ? 3352014452079267448 : -1153857258)), (~var_9))));
                            }
                        }
                    }
                    var_16 = (max((((!var_2) - (arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]))), (((var_9 ? (arr_11 [i_0] [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_2 + 1] [i_2]) : (arr_11 [8] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                }
            }
        }
        var_17 = ((((~(arr_6 [i_0] [i_0] [i_0])))) ? (~var_3) : (arr_2 [i_0] [i_0] [i_0]));
        var_18 = ((((-(arr_1 [i_0])))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_19 = (max((max((((146 ? var_6 : (arr_1 [i_5])))), (max(var_9, 2612177087)))), 109));
        arr_16 [i_5] |= ((((arr_2 [i_5] [i_5] [i_5]) ? (arr_2 [i_5] [i_5] [i_5]) : (arr_2 [i_5] [18] [i_5]))));
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_20 = (((arr_18 [i_6 + 1]) ? (((arr_17 [i_6]) ? var_3 : var_6)) : (arr_17 [i_6 + 1])));
        arr_19 [i_6] [i_6] = (arr_18 [i_6 + 1]);
        arr_20 [i_6] = (((arr_17 [i_6 - 1]) ? -var_2 : (arr_18 [i_6 - 1])));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_21 ^= (((arr_21 [i_6 + 1] [i_6 + 1] [i_6 - 1]) ? (arr_21 [i_6 + 1] [i_6 - 1] [i_6 - 1]) : (arr_21 [i_6 - 1] [i_6 + 1] [i_6 + 1])));
            var_22 += (arr_18 [1]);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {
                        var_23 = (var_4 | (!-19930));
                        var_24 = var_1;
                    }
                }
            }
            arr_29 [6] = (arr_28 [i_7] [i_7] [i_6 - 1] [i_6 + 1]);
        }
    }
    var_25 = var_5;
    #pragma endscop
}
