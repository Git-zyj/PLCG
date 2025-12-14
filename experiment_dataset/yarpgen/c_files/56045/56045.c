/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((arr_0 [i_0] [i_1]) <= (((arr_0 [i_0] [i_1]) + var_11)))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [3] [3] = (-var_6 - var_14);
                    arr_11 [i_0] = ((((arr_8 [i_0]) ? 117 : (((arr_6 [i_1]) ? (arr_0 [i_0] [i_0]) : var_8)))));
                    arr_12 [i_0] [0] = ((((var_5 ^ (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))) < (((((arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) > -73))))));
                }
                arr_13 [i_1] = ((((((var_8 / (arr_2 [i_1] [i_0] [i_0]))) + ((0 ? -72 : 62426)))) + (((arr_2 [i_0] [i_1] [i_0]) + (arr_8 [i_0])))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_16 &= (((((arr_14 [i_3] [2]) && (arr_14 [i_3] [8]))) ? (3630118722 != 0) : (var_11 % var_9)));
        arr_16 [0] &= ((max((arr_15 [i_3]), (arr_1 [i_3] [i_3]))));
        var_17 = ((arr_9 [i_3] [i_3] [i_3]) != (max(var_11, (arr_3 [i_3] [i_3] [i_3]))));
        arr_17 [i_3] = ((var_9 ? ((var_3 ? (arr_8 [i_3]) : var_1)) : ((((arr_8 [i_3]) && var_8)))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, (max(-107, -97))));
                    var_19 = (min(var_19, (((((((((~(arr_9 [i_4] [i_4] [i_4])))) ? ((-(arr_2 [i_4] [i_5] [i_6]))) : (arr_23 [i_4] [i_6])))) || var_6)))));
                }
            }
        }
        arr_26 [i_4] = ((arr_20 [i_4]) ? ((62426 ? (((arr_2 [i_4] [i_4] [14]) ? 1 : -1502349111)) : var_9)) : (((var_10 || (((var_3 << (((-1502349085 + 1502349108) - 12)))))))));
    }
    #pragma endscop
}
