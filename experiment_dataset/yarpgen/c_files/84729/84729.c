/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(max(var_7, ((-1930757158 ? 18446744073709551610 : 19769))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = ((var_7 ? (((arr_9 [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_1 + 1] [i_0 - 2]) ? (arr_11 [i_0 - 4] [i_1 + 1] [i_3 + 1] [i_3 + 1]) : (arr_11 [i_0 + 1] [i_1 - 1] [i_3 - 1] [i_4 + 1]))) : (!527)));
                                arr_16 [i_0 + 2] [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [i_4 - 1] = (arr_3 [i_3]);
                                var_14 = (min((arr_4 [i_0] [i_1 - 1] [i_1 - 1]), -18446744073709551610));
                                arr_17 [i_2] = (((((((var_4 + 2147483647) >> (var_11 - 20209))) % ((var_8 ? -1930757134 : var_3)))) + (min((max((arr_14 [i_0] [i_1] [i_1] [i_3] [i_4 - 2]), (arr_5 [i_1] [i_2] [i_3 - 1] [i_3 - 1]))), (((arr_11 [i_4] [i_3] [i_2] [i_1]) ^ (arr_13 [i_0] [i_1] [i_2] [i_3] [i_2])))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((5897 ? ((-59638 * (min(8063907261477701369, var_4)))) : (59629 | 3)));
                            }
                        }
                    }
                }
                arr_19 [i_1 - 1] [i_1] [i_0] &= ((((max(var_5, (arr_10 [i_0 - 1] [i_1 + 3] [i_1])))) || (((((arr_0 [i_0]) ? (arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 1]) : var_7))))));
            }
        }
    }
    var_15 *= (max((((((2123456861 ? var_1 : var_1))) ? (59632 >= var_3) : -var_8)), 1));
    var_16 -= var_1;
    var_17 = (min((((((min(var_4, var_8))) ? var_5 : (var_10 & var_5)))), (((var_8 - var_10) ? ((max(var_0, -2147483643))) : (min(var_8, var_1))))));
    #pragma endscop
}
