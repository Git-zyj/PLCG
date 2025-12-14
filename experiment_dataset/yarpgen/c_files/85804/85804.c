/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_19 *= (arr_0 [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (arr_6 [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [1] [i_0] [8] [i_0] = (max(((-(arr_11 [i_0] [0] [i_0] [i_0 - 1] [i_4 - 1]))), (arr_6 [i_4 - 1])));
                                arr_14 [i_0] [i_1] [i_2] = (((((min((arr_10 [i_3]), 25209)))) ? ((~(((arr_5 [i_0] [i_0] [i_0]) ? (arr_7 [i_4]) : (arr_10 [i_0]))))) : ((max((arr_5 [i_0 + 1] [i_0] [i_0]), 1496584457)))));
                                var_21 = (arr_3 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((arr_3 [i_0] [i_0]) ? (arr_9 [i_0] [1] [i_0] [i_0]) : ((15176 ? 10882768247617337271 : (arr_3 [i_0 - 1] [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_23 = 8971028168783315029;
        var_24 = (((arr_1 [i_5] [i_5 - 1]) ? (arr_1 [i_5] [i_5 - 1]) : (arr_1 [9] [i_5 - 1])));
        var_25 &= 1;
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_26 = (max((arr_15 [i_6]), (arr_17 [13])));
                        arr_27 [i_6] [i_6] [i_6] [i_8] [i_6] = ((max((arr_2 [i_6]), (arr_19 [i_9] [i_6 - 2]))));
                    }
                }
            }
        }
        var_27 = (arr_8 [i_6] [i_6] [i_6] [i_6]);
    }
    for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_28 = (max(var_28, (((((-14972 ? ((10882768247617337268 ? (arr_8 [i_10] [5] [5] [i_10]) : (arr_7 [i_10]))) : ((-(arr_20 [i_10] [11] [i_10])))))) ? (arr_18 [13]) : ((max(0, (((!(arr_0 [i_10])))))))))));
        var_29 = (arr_19 [5] [i_10]);
    }
    var_30 = 32767;
    var_31 = (!var_7);
    #pragma endscop
}
