/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55132
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
                var_11 |= (((-9223372036854775807 - 1) ? (((((9223372036854775781 >> (1972 - 1950)))) ? ((min(-1958, -1958))) : (arr_6 [i_0] [i_0] [i_1]))) : (((!((min(1948, var_5))))))));
                arr_8 [14] = -1973;
                arr_9 [i_1] = (min((((1957 ? (-32767 - 1) : 511))), (arr_2 [i_0])));
            }
        }
    }

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_12 = (max(var_12, (((((((arr_2 [i_2]) ? -1972 : var_4))) == (((((18446744073709551611 ? (arr_1 [i_2] [i_2 + 2]) : var_4))))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_13 += (min(((1942 ? -1972 : 511)), 1972));
                    arr_17 [i_2] [i_3] [i_2] [i_4] = (((var_1 ? ((var_9 ? 1972 : 25882)) : ((var_1 ? var_1 : (arr_6 [i_2] [i_2] [i_4]))))));
                }
            }
        }
        var_14 = (max(var_14, (~1971)));

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_15 -= 19031;

            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_6] [i_5 + 2] [i_6] = ((1970 >> (((19031 | -5988143596297474925) + 5988143596297457985))));
                var_16 = (max(var_16, (((((((-1957 ? (arr_12 [i_2 + 1]) : 11002)) - (arr_20 [i_2] [i_6])))) != (((((var_4 ? -1956 : (arr_15 [i_2 + 1] [i_5] [i_6] [i_6])))) ? ((min(5988143596297474928, var_9))) : ((var_1 ? (arr_13 [i_2] [i_5]) : var_2))))))));
                var_17 = (min(var_17, ((((((4096839905 ? ((var_7 ? (arr_15 [i_2] [i_2 + 1] [i_5 + 2] [i_2 + 1]) : (arr_1 [i_5] [i_6]))) : ((min((arr_7 [i_2] [i_6]), 125)))))) ? (arr_10 [i_5] [i_6]) : ((((min(5988143596297474925, var_1))) ? var_4 : (15516 >= var_9))))))));
                arr_23 [i_6] [i_5] [i_6] [i_6] = (((11761563022421475149 ? (3658969378 >= 1540673754) : (min(1916427300, (arr_6 [i_2 + 2] [2] [2]))))));
            }
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_26 [i_7] = (((((var_4 ? (arr_18 [i_2 - 1] [i_7 + 1]) : (arr_18 [i_2 - 1] [i_7 + 1])))) ? 33554432 : (arr_5 [i_2] [i_2 - 1] [i_7 + 1])));
            arr_27 [i_7] [i_2 - 1] [i_7 + 1] = var_10;
            var_18 = (((~(arr_4 [i_2] [i_2 - 1] [i_7 + 1]))));
            arr_28 [14] [i_7] = (((((-(min((arr_11 [i_7]), (arr_25 [i_2] [i_7])))))) ? (min((arr_6 [i_2 + 2] [i_7 + 1] [i_7]), (0 - var_1))) : 126));
        }
    }
    var_19 += 19031;
    var_20 = (max(var_20, var_3));
    #pragma endscop
}
