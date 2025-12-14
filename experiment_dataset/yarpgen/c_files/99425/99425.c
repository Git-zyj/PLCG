/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 ? (((var_7 + 2147483647) >> ((((var_16 ? var_6 : -5829298662136877316)) - 3985408728798498778)))) : var_13));
    var_18 = var_7;
    var_19 = var_7;
    var_20 += (min(((var_15 ? (((var_6 ? var_13 : var_16))) : ((var_9 ? 5829298662136877309 : var_8)))), ((min(((-9941 ? var_9 : var_9)), -10677)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (var_1 ? (((arr_1 [i_0]) ? 18446744073709551613 : -9941)) : (arr_0 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 -= -10432;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_3] [i_3 - 1] [i_1]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (((((arr_7 [i_0] [i_0] [i_0]) + 2147483647)) << ((((((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) + 29129)) - 30))));
                    var_23 = ((var_3 % (var_1 ^ var_8)));
                }
            }
        }
        arr_14 [i_0] = (arr_0 [i_0]);
        arr_15 [i_0] [i_0] = (((arr_9 [4] [4] [i_0] [i_0] [i_0]) ? (arr_7 [4] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [0] [i_0])));
    }
    #pragma endscop
}
