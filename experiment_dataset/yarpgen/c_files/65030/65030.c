/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 += ((((max((((~(arr_3 [i_0])))), (max((arr_1 [i_0]), (arr_2 [i_0] [i_0])))))) ? (arr_1 [i_1]) : 12459));
                var_17 = ((!(arr_0 [i_0] [i_1])));
                var_18 |= -46940135;
            }
        }
    }
    var_19 += ((!(~var_8)));
    var_20 = (max(var_20, (((var_11 ? (((var_10 ? ((var_15 ? var_8 : 221)) : 17244232346723194545))) : (max((-3 ^ var_6), (var_13 ^ var_6))))))));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_21 = (((!(arr_11 [i_2] [i_3] [i_4] [i_4]))));
                    var_22 = (arr_9 [i_4] [i_3]);
                    var_23 &= (((max((arr_9 [i_3] [i_3]), (arr_9 [i_2] [i_4]))) & -171));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_24 = (min(var_24, (arr_0 [4] [i_5])));
                        var_25 = (arr_1 [i_5]);
                    }
                }
            }
        }
        var_26 = (max(var_26, (((--299295837) ? 16833257192555856241 : ((max((min((arr_15 [i_2] [i_2] [i_2]), 1383694358)), (arr_11 [i_2] [i_2] [14] [i_2]))))))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_23 [i_8] [i_8] = (max(((((var_9 << 1) >= ((((arr_15 [i_8] [i_8] [i_8]) ? (arr_16 [14] [i_8] [i_8]) : var_10)))))), (min((((!(arr_1 [i_8])))), (arr_21 [6])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_27 = (min(((-(arr_17 [i_10] [i_9] [i_9] [i_8]))), (arr_17 [i_8] [i_8] [i_8] [i_8])));
                    var_28 = (((((min(74, (arr_20 [1] [i_10] [i_10] [14] [i_8]))))) ? (((!(arr_5 [i_9])))) : ((max(177, 55208)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_8] = ((((var_11 != (arr_7 [i_12]))) ? (((arr_27 [i_13] [i_11] [i_11] [6]) & (arr_4 [i_8] [i_8] [i_13]))) : (arr_12 [i_8] [i_11] [i_11])));
                        var_29 = (-(min((arr_22 [i_11] [i_11]), (((!(arr_7 [i_8])))))));
                    }
                }
            }
        }
    }
    var_30 -= (min((max((max(var_12, 4511722518448462999)), 13140984267827638681)), var_12));
    #pragma endscop
}
