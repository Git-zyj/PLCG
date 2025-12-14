/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 += (((arr_3 [i_1] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])));
            var_15 = 1;
        }
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_16 = (((var_9 * var_0) ? (min((arr_11 [i_2] [i_3] [i_2] [i_5]), (arr_2 [i_0] [i_0]))) : ((((max(var_1, 6166))) << (((max(1854729226, (arr_2 [i_0] [i_3]))) - 2045335481))))));
                            arr_14 [i_3] = var_2;
                            var_17 = ((~((~(arr_11 [i_0] [i_2] [i_3] [i_4])))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_18 = ((~(~2458089710)));
                            var_19 = (((arr_9 [i_0] [i_0]) | var_10));
                            arr_17 [i_6] [i_6] [i_3] [i_3] [i_2] [i_0] = max(-1008874682, (((arr_5 [i_0] [i_2] [i_6]) ? (arr_0 [i_6]) : (arr_8 [i_4] [i_3]))));
                            var_20 = ((arr_3 [i_0] [i_3]) ? ((var_7 ? (arr_3 [i_0] [i_2]) : (arr_3 [i_6] [i_2]))) : ((max((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_4])))));
                            arr_18 [i_0] [i_2] [i_3] [i_3] [i_6] = arr_12 [i_0];
                        }

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_23 [i_7] [i_4] [i_3] [i_2] [i_0] = (((arr_15 [i_2] [i_7]) ? (((-(arr_15 [i_2] [i_3])))) : (arr_15 [i_7] [i_0])));
                            arr_24 [i_0] [i_2] [i_3] [i_4] [i_3] = (arr_19 [i_0] [i_0] [i_0] [i_4] [i_7]);
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = (max(((((arr_7 [i_0] [i_2] [i_3]) ? (((!(arr_16 [i_0] [i_2] [i_3])))) : -26676))), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_21 |= 52;
                            var_22 |= (~var_8);
                        }
                        var_23 = (max(var_23, (arr_29 [i_4] [i_0] [i_2] [i_0])));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    var_24 -= var_12;
                    var_25 = (--1008874686);
                    arr_37 [i_9] = (arr_30 [i_9]);
                }
            }
        }
    }
    var_26 = (max(var_26, ((max(var_5, ((max(var_7, var_10))))))));
    #pragma endscop
}
