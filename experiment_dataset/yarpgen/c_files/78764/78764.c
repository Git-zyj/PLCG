/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((-((min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1]))))));
                arr_8 [i_0] [i_0] [i_1] = var_5;
                var_15 |= var_10;
                var_16 ^= (arr_5 [i_0]);
                arr_9 [i_0] [i_0] [i_0] = (((arr_4 [i_0] [i_0] [i_0]) == (((6 ? (min((arr_0 [i_0]), 20260)) : (arr_5 [i_0 - 2]))))));
            }
        }
    }
    var_17 = (min(((((min(26208, var_7))) ? var_3 : var_7)), (((!((max(var_0, 165))))))));

    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        var_18 = (max((+-0), (arr_11 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = (max((((-(((arr_14 [i_3] [i_4]) & (arr_0 [i_4])))))), (((arr_4 [i_2] [i_2] [i_2]) + (arr_4 [i_2] [i_3] [i_4])))));
                    var_20 = (min(var_20, (((!(arr_2 [i_2]))))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_21 = (max((min((arr_4 [i_5 - 1] [i_5 - 1] [i_5 + 1]), (arr_4 [i_5] [i_5 + 1] [i_5 + 1]))), (((!(arr_16 [i_5] [i_5 + 1] [20] [i_5]))))));
        arr_21 [i_5 - 1] = (arr_13 [i_5]);
        var_22 -= (min((((arr_11 [i_5 - 1]) ? (max(var_9, var_1)) : (arr_4 [i_5 - 1] [i_5 + 1] [i_5]))), ((min((((arr_20 [i_5] [i_5 - 1]) ? (arr_1 [i_5]) : var_4)), (max((arr_17 [i_5] [i_5]), var_14)))))));
        var_23 = (arr_10 [i_5]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_26 [i_6] = (max(((4294967295 ? (4294967295 ^ -3794) : 70368744177663)), 132));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_24 = (max(var_24, (((((~(min((arr_16 [i_6] [i_8] [i_8] [i_6]), (arr_23 [i_6]))))) == (((((min(-20264, var_10))) != ((65535 ? 49792 : 22831))))))))));
                    var_25 = (min((arr_19 [i_7] [i_8]), (max(((var_3 >> (((arr_16 [i_8] [i_8] [i_8] [i_6]) + 1673612164)))), (var_9 / var_14)))));
                }
            }
        }
        var_26 = (max((arr_29 [i_6]), (((arr_10 [i_6]) ? ((var_9 / (arr_5 [i_6]))) : var_14))));
    }
    #pragma endscop
}
