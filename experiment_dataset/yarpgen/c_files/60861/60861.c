/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((79 + var_7), -70))) ? (var_12 > var_12) : ((~(11133 % var_11)))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_15 = ((((((((arr_0 [i_0 + 2] [i_0 + 2]) <= 24))) + (arr_0 [i_0 - 2] [i_0 + 3])))) ? var_12 : var_8);

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] [5] = var_2;
                            var_16 = (min(((((var_6 >= 39252) ? ((26284 ? 26284 : (arr_0 [i_2] [i_2]))) : ((((arr_9 [i_0]) >= (arr_3 [i_0] [i_3] [i_2]))))))), (((arr_1 [1]) ? ((((var_8 + 2147483647) >> (39252 - 39236)))) : ((0 ? var_3 : var_11))))));
                        }
                    }
                }
            }
            var_17 = (max(var_17, ((((arr_0 [i_0] [i_1]) ? (var_8 < 39249) : ((((min((arr_7 [i_0] [i_0] [8]), 39252))) ? (((arr_9 [i_0]) ? -4119981678336990608 : (arr_8 [i_1] [i_1] [i_1 - 2] [i_1] [9]))) : var_10)))))));
            var_18 = ((((((((arr_5 [i_0] [i_1] [i_0] [i_0]) ? 1563 : var_1))) % 18446744073709551611)) / ((((((4041373157 | (arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? (arr_2 [i_0 - 1]) : (arr_5 [i_1 + 2] [i_1] [i_1] [i_1]))))));
            var_19 = (((((253594139 ? 4119981678336990608 : (arr_12 [i_0 + 3] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1])))) ? var_7 : (arr_10 [i_1] [i_1] [i_1] [i_1 - 1])));
        }
        arr_15 [i_0] = (arr_2 [i_0]);
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        var_20 = 15958477774616215539;
        var_21 = ((((arr_18 [i_5 - 3]) ? (((~(arr_16 [i_5])))) : (arr_19 [i_5]))));
    }
    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = 0;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_22 += (((((-4119981678336990588 ? 0 : (arr_19 [0])))) && (arr_25 [i_6])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_33 [i_8] [i_8] [5] [2] [5] [i_6] = 13241;
                        var_23 = ((-37683 > ((~(arr_18 [i_8])))));
                    }
                }
            }
        }
    }
    var_24 = -1;
    #pragma endscop
}
