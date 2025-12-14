/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (var_3 ^ var_4);
    var_12 = ((!((min(((var_6 ? 1 : var_2)), var_5)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = ((var_8 != ((((1 <= (arr_1 [2])))))));
        arr_3 [i_0] = (max(((-((((arr_0 [i_0] [11]) || (arr_1 [i_0])))))), (1 >= 17)));
        arr_4 [i_0] = ((var_7 | (arr_0 [i_0] [i_0])));
        arr_5 [i_0] = (((var_1 || var_7) % (((arr_2 [i_0]) & (arr_2 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        var_14 = (((((arr_2 [8]) ? (arr_9 [i_4 + 2]) : (arr_12 [i_4 - 1] [1] [i_2 + 1] [7]))) <= var_10));
                        var_15 = (var_6 >> 0);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_16 = (!var_7);
                                arr_21 [i_1 - 1] [i_2 + 1] [i_3 - 1] [i_5] [i_6] = (((var_3 || var_8) ? (arr_9 [i_6 - 1]) : (!-21)));
                                arr_22 [i_6 + 1] [i_5 - 1] [5] [i_2] [1] &= ((var_2 ? 66 : ((var_10 ? (arr_17 [i_6 - 1] [i_1] [i_3 - 1] [8] [i_6 + 1] [i_6 + 1]) : (((var_3 || (arr_7 [i_3]))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_23 [i_1 - 2] = (arr_9 [i_1]);
        arr_24 [i_1 - 1] = (~49037);
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_29 [i_8] = ((((var_9 || (var_7 * 4294967295))) || ((var_2 > (((arr_28 [i_8] [4]) ? -1110842846 : var_10))))));
            arr_30 [i_8] = (min((max((max((arr_27 [i_8] [i_8]), var_9)), var_4)), (((var_2 ? (~896) : (((!(arr_25 [i_8] [9])))))))));
        }
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_37 [i_7] [13] [13] [i_10] = -var_7;
                    arr_38 [i_10] [i_10] = (((((((~(arr_31 [i_10] [i_7])))) ? (var_1 & var_5) : (var_0 ^ 8))) ^ var_6));
                    arr_39 [16] |= ((((min(var_5, var_5))) ? (arr_26 [i_10]) : ((var_9 ? (arr_36 [i_7] [2] [i_10]) : var_10))));
                }
            }
        }
    }
    #pragma endscop
}
