/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((2047 ? (arr_1 [i_0]) : (((28 ? (arr_0 [i_1]) : var_7))))));
                arr_6 [i_0] = ((((min((((var_1 ? 95 : -96))), ((46280 ? var_14 : -95))))) ^ (min(19249, ((-37 ^ (arr_1 [i_1])))))));
                var_16 = (((arr_4 [i_0] [i_0] [i_0]) ? (max((arr_2 [i_0] [i_1]), (arr_1 [i_0]))) : (((arr_1 [i_1]) - (arr_1 [i_0])))));
                var_17 = (max(var_17, 125224941));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_18 = ((~(arr_1 [i_2])));
        arr_9 [5] = ((-4 ? var_10 : -121));
        arr_10 [i_2] = 2023400655;
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_13 [5] [i_3 + 1] = ((((((max((arr_4 [i_3] [i_3] [12]), var_12)) ? (arr_12 [i_3] [i_3]) : (min((arr_4 [i_3] [i_3 - 1] [i_3]), var_13))))) || 95));

        /* vectorizable */
        for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_18 [i_3] [i_4] = (((arr_16 [i_3 + 2] [i_4 - 2]) + (arr_0 [i_3 + 2])));
            var_19 = (arr_16 [i_4 + 1] [i_3 + 2]);
        }
        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_20 = ((((max(((min(var_11, 101))), var_14))) ? ((var_12 ? (max(1253402854, var_15)) : 5620490374248686035)) : (((((var_5 ^ (arr_21 [i_3 + 3] [i_3 + 3] [i_5]))) == (arr_21 [i_5 + 2] [i_5 - 2] [i_3 + 2]))))));
            var_21 = (max(((min(-1168507038, 46369))), 122));
            var_22 = (max((((arr_12 [i_5 - 1] [i_5 - 1]) ? (arr_12 [i_5 - 1] [i_5]) : (arr_12 [i_5 + 1] [i_5 - 2]))), (0 >= 278821761)));
        }
        arr_23 [i_3] = (max((min(var_0, (arr_0 [i_3 - 1]))), (min(-1168507063, (arr_0 [i_3 - 1])))));
    }
    var_23 = ((((((max(22, var_4))) ? var_15 : var_5)) > (((min(var_6, 137082686))))));
    #pragma endscop
}
