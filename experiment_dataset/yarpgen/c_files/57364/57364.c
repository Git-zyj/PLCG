/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (((((((!(arr_1 [i_0] [i_1])))))) ? (((!((max(var_2, (arr_6 [i_0] [i_1] [2]))))))) : (arr_8 [i_0] [11] [3] [i_0])));
                    var_12 = (min((min((((var_9 - (arr_7 [i_0] [i_1] [i_2])))), (arr_9 [i_1 + 2] [i_2] [i_2]))), ((max((arr_6 [i_1 - 2] [i_1 + 1] [i_1 - 3]), var_0)))));
                }
            }
        }
        arr_10 [1] = (((((((((arr_1 [i_0] [i_0]) <= (arr_4 [i_0] [1]))) || ((min(var_6, var_7))))))) < (((((~(arr_7 [i_0] [i_0] [i_0])))) ? (~2147483647) : (var_8 ^ var_9)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_13 -= ((((((arr_12 [i_3]) ? (arr_12 [17]) : var_0))) ? (arr_12 [i_3]) : ((((arr_11 [2]) ? var_7 : (arr_11 [i_3]))))));
        arr_13 [i_3] = (((arr_12 [i_3]) ? var_8 : (arr_12 [2])));
        arr_14 [i_3] = ((((((arr_11 [i_3]) | (arr_11 [16])))) ? var_2 : (((~(arr_11 [i_3]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (arr_16 [i_4] [i_4]);
        var_14 = ((((((arr_11 [i_4]) ? (arr_15 [i_4] [i_4]) : var_2))) ? (((arr_12 [1]) ? (arr_12 [i_4]) : var_8)) : (arr_12 [i_4])));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_15 -= ((!(((((var_2 > (arr_11 [9]))) ? ((var_3 - (arr_12 [i_5]))) : -2147483644)))));
        arr_23 [i_5] [i_5] = var_3;
    }
    var_16 = var_4;
    #pragma endscop
}
