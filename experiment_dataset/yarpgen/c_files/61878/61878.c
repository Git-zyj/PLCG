/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_9 < ((var_1 & (~8589934591)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_1] = ((var_8 + (arr_0 [i_0])));
            var_13 = (((var_8 + 2147483647) >> (((~120) + 121))));
        }
        arr_5 [i_0] = 8191;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [20] [i_4] [i_4] [13] = -18;
                            var_14 += ((((((arr_11 [i_6] [i_2] [i_4 - 1]) == (((arr_15 [21] [i_5] [21] [i_2] [i_2]) ^ 0)))))) & ((((-20758 ? var_4 : (arr_15 [2] [1] [i_4] [1] [1]))) / ((var_1 ? (arr_6 [i_2]) : -5206675189583547806)))));
                            arr_20 [i_4] [i_3] [i_4] [i_5] [i_6] = (~-5206675189583547801);
                        }
                        var_15 = arr_14 [i_2] [i_4] [i_4];
                    }
                }
            }
        }
        var_16 = (min(-1, -var_3));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_17 = (~((~(arr_31 [i_7] [i_11 + 2] [i_7] [i_11 + 2] [i_11]))));
                                var_18 += min((arr_15 [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_9]), (((arr_15 [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11 - 1] [i_11]) ? (arr_15 [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11 - 1] [i_7]) : (arr_15 [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_8]))));
                            }
                        }
                    }
                    var_19 = (min(((min(var_2, (arr_14 [i_7] [i_8] [i_9])))), (((!(arr_21 [i_7] [i_7]))))));
                    var_20 = 1;
                }
            }
        }
        arr_32 [i_7] = var_0;
        arr_33 [i_7] = ((~(((~15052104527386778951) ? (~34781) : (arr_26 [i_7] [i_7] [i_7] [i_7])))));
    }
    #pragma endscop
}
