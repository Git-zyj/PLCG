/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((88 ? var_3 : (((((var_13 * var_6) != var_5))))));
    var_16 = 9223372036854775801;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_7, var_0));
                                var_18 = ((((((9223372036854775801 + (arr_5 [i_0] [i_1] [i_4 + 1]))) * (((var_9 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))) != (((~(arr_2 [i_0]))))));
                                var_19 = (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 + 1]);
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [1] = (((var_7 ? (((arr_7 [i_0] [i_0] [i_0]) - var_10)) : var_13)));
                arr_15 [i_0] [i_1] = ((~(~9223372036854775799)));
            }
        }
    }
    var_20 = var_11;
    var_21 = (max(var_21, ((((var_14 ? (var_2 / var_3) : (var_11 && var_1))) >> ((((var_2 ? var_12 : var_9)) - 187))))));
    #pragma endscop
}
