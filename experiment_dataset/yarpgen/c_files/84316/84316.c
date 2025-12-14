/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min((((~(var_8 && var_14)))), (((arr_1 [i_0]) / (arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = var_16;
        arr_4 [i_0] = 125;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_18 |= (max(124, 132));
        var_19 = ((~(((arr_0 [i_1] [i_1]) ^ (arr_0 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_20 = ((((!((max((arr_11 [i_1] [12] [i_2] [i_3]), var_9))))) ? (!var_0) : (max(((min(var_12, (arr_10 [i_1] [i_1] [i_1] [i_1])))), (arr_8 [i_2] [i_2])))));
                    arr_13 [i_1] [i_2] = max(-135, 112);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_20 [0] [i_2] [i_3] [i_2] [i_5] = var_0;
                                var_21 = ((!((max((arr_11 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 1]), (arr_11 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 - 1]))))));
                                var_22 = ((~((var_16 ? (arr_5 [i_4 - 2]) : var_5))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = ((~(max(var_9, ((var_0 ? 1 : (arr_5 [i_1])))))));
        var_24 += (min(((((var_15 != -14331) << (((((arr_7 [i_1]) ? var_0 : (arr_18 [i_1] [i_1] [i_1] [i_1]))) - 55481))))), (arr_8 [i_1] [14])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            var_25 = (max(var_25, (((!(arr_0 [i_7 - 2] [i_7 + 2]))))));
            arr_26 [i_6] [i_6] = (!28);
            arr_27 [2] [2] &= (((132 / var_9) ? var_3 : (((var_2 ? (arr_23 [8] [i_6]) : var_1)))));
            arr_28 [i_6] [6] &= 44;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_34 [i_6] [i_6] [i_8] [i_9] = (arr_23 [i_6] [21]);
                        var_26 ^= (((arr_30 [22] [i_7] [22]) && (arr_23 [20] [20])));
                        var_27 *= ((!(var_6 == var_9)));
                        var_28 = (((arr_32 [i_6]) & (arr_32 [i_6])));
                    }
                }
            }
        }
        var_29 |= (((arr_30 [i_6] [i_6] [8]) && (((-(arr_15 [i_6] [1]))))));
        var_30 = ((~(arr_6 [i_6])));
    }
    var_31 &= -1513845866;
    #pragma endscop
}
