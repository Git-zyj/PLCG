/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_10 = (min((((~(max(var_6, (arr_1 [i_0] [i_0])))))), var_7));
                        var_11 *= 3815818255837291306;
                        arr_12 [14] [i_1] [22] [i_3] [17] = (~-158163015);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_12 = max(var_4, (((((15612521381101676836 ? 6 : var_3))) ? ((var_9 ? 32729 : (arr_7 [i_4] [i_4]))) : (arr_14 [i_4 + 3] [i_4]))));
                    var_13 = (min(var_13, (arr_7 [i_4] [i_0])));
                    var_14 = (min(36108, 53886));
                    var_15 = ((-143552238122434560 > ((((var_7 | var_6) ? (var_4 | var_9) : (arr_1 [i_0] [i_5]))))));
                }
            }
        }
        var_16 = (max(var_16, ((-((var_9 / (36119 * 8588696065300751789)))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_17 = min((((((((arr_20 [i_6] [0]) & (arr_5 [i_6] [17])))) ? ((var_6 ? (arr_1 [i_6] [i_6]) : (arr_16 [i_8] [i_6] [i_6] [i_6]))) : (arr_5 [i_8] [i_7])))), ((11668 ? var_1 : 4124949375644599035)));
                    var_18 = (min((((arr_7 [i_6] [i_8]) & 18303191835587117042)), ((((arr_7 [i_7] [i_7]) == (arr_7 [i_6] [i_7]))))));
                    arr_27 [i_7] = ((((~1073741824) ? (((arr_19 [i_8] [5]) | 15612521381101676836)) : var_1)) & (~4));
                    var_19 = (max(var_19, ((((arr_19 [i_7] [i_6]) ? 768 : var_3)))));
                    var_20 ^= ((((+(max((arr_23 [i_6]), var_1)))) * (((var_0 ? (max((arr_11 [i_6] [22] [i_7] [i_8]), (-2147483647 - 1))) : ((8 & (-2147483647 - 1))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_21 = var_8;
                        arr_35 [i_6] [i_9] [i_9] [8] = ((((max(((18446744073709551615 > (arr_15 [i_9]))), ((!(arr_20 [0] [0])))))) - -29));
                        var_22 = (((18303191835587117075 < (arr_30 [4] [i_9] [i_10] [i_11]))));
                        var_23 = (arr_5 [i_6] [i_9]);
                    }
                }
            }
        }
        arr_36 [i_6] = (max(((((var_6 ? (arr_13 [i_6] [i_6] [i_6]) : var_2)) & (((24342 ? var_9 : 36108))))), (((18446744073709551615 ? (arr_6 [i_6] [i_6] [i_6]) : 1)))));
        arr_37 [3] [i_6] = var_3;
        var_24 = (min((((arr_5 [i_6] [i_6]) ? (((-2147483647 - 1) & (arr_21 [i_6] [i_6] [i_6]))) : (max((arr_17 [i_6] [i_6] [i_6] [i_6]), -50584504)))), ((~(min((arr_11 [i_6] [i_6] [i_6] [i_6]), var_8))))));
    }
    var_25 |= ((~(var_8 <= -1622628360)));
    var_26 = (max(var_26, var_6));
    var_27 = var_4;
    #pragma endscop
}
