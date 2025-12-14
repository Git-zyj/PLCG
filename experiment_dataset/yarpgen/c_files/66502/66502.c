/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (~(max((arr_1 [i_0]), 31)));
        var_12 = ((var_5 * (min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_13 = (min((((arr_5 [i_2]) ? (101 / 1039842986) : (arr_8 [i_1]))), ((min(var_3, (arr_7 [i_2] [i_1]))))));
            var_14 = (((14589570946092643245 >= 1) > ((-var_10 ? (arr_6 [i_1]) : 78))));
            arr_9 [i_1] [1] = (max(var_2, var_1));
            var_15 = ((((arr_6 [i_1]) < (arr_8 [i_1]))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = (max(var_16, ((max(((((arr_5 [i_1]) ? var_1 : (arr_7 [i_3] [i_1])))), (max(1156736820, (arr_5 [2]))))))));
            arr_12 [i_1] = (max(((+(((arr_1 [i_1]) ? 82 : var_3)))), 228));
            var_17 = (min(var_17, ((max((((arr_5 [i_3]) | (arr_0 [6] [i_3]))), ((~(arr_0 [i_1] [i_3]))))))));
            var_18 = (((var_8 > var_8) ? (max((min(7823276396848208620, 16383)), ((((arr_4 [5]) ? -7 : var_5))))) : (arr_6 [i_1])));
        }
        var_19 = ((var_10 ? ((34850 ? var_4 : (1 == -7823276396848208621))) : (min(((~(arr_10 [i_1] [i_1] [i_1]))), (arr_6 [i_1])))));
        arr_13 [i_1] = ((-((~(arr_8 [i_1])))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [12] [i_5] [14] = ((~(~78)));
            var_20 ^= ((((((!(arr_1 [i_4]))))) % var_2));
            arr_20 [6] [i_5] |= (((((((14589570946092643252 ? var_9 : var_5)) / (4294967292 && 70368744177663)))) ? ((((((arr_14 [17]) * var_3))) ? (arr_18 [i_4]) : (max(3857173127616908393, -70)))) : (1 | 9)));
        }
        var_21 += var_11;
        arr_21 [4] = var_4;
        arr_22 [i_4] = ((!(((var_1 % (((arr_0 [i_4] [i_4]) ? (arr_14 [i_4]) : (arr_17 [1]))))))));
    }
    var_22 = (((!var_5) ? ((1 << (((max(1745634030, 1)) - 1745634029)))) : var_9));
    var_23 = 342676908814858358;
    var_24 = var_7;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_25 = (((arr_24 [i_6] [i_6]) | (arr_24 [i_6] [i_6])));
        var_26 = (min(var_26, ((((arr_24 [i_6] [i_6]) ? (arr_23 [i_6] [i_6]) : (arr_2 [i_6] [i_6]))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_27 ^= (((((var_5 ? 7823276396848208614 : (arr_28 [i_9])))) ? (arr_0 [i_6] [i_7]) : (arr_24 [i_9] [i_6])));
                        arr_35 [i_9] = ((~((((-2147483647 - 1) < 1)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_28 ^= ((~(((arr_23 [12] [i_10]) ? 89 : (arr_1 [1])))));
        var_29 = 60175;
        arr_38 [i_10] = ((1 ? var_6 : var_0));
    }
    #pragma endscop
}
