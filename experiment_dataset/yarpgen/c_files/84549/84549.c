/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = ((((arr_0 [i_0 + 3] [i_0]) ? (max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [1]))) : (min(18446744073709551607, 4095)))));
        arr_2 [i_0] = ((!((((arr_0 [i_0 + 3] [7]) << (var_4 - 2690005926))))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_2] [5] [i_1] = (((var_9 <= var_4) ? (((arr_8 [i_1] [i_1]) ^ 4294963200)) : (arr_0 [i_1 + 2] [i_1 + 2])));
            var_20 ^= (((arr_0 [i_1 + 1] [i_1 + 3]) == (arr_3 [i_1 + 2])));
            arr_10 [i_2] = (((arr_1 [i_1 - 1] [i_1 - 1]) ^ (arr_1 [i_1 - 3] [i_2])));
            arr_11 [i_2] = ((((24576 ? (arr_1 [i_1 + 2] [i_1]) : (arr_3 [1]))) != (arr_5 [i_1 - 3])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = (~(arr_4 [i_1 - 1]));
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_22 [i_5] [i_3] [i_3] [i_1 - 1] = 35184372088320;
                            var_22 = (min(var_22, (arr_5 [i_3])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_23 -= (((((35184372088304 ? (arr_25 [i_1]) : var_2))) ? (arr_17 [i_1 + 2] [i_1 - 2] [i_1]) : 32763));
            var_24 ^= (!var_1);
        }
        arr_26 [i_1 - 1] [i_1 - 1] = var_11;
    }
    var_25 |= ((var_16 + (((((101 ? 20 : var_14))) ? (var_5 - 9223372036854775807) : var_10))));
    var_26 = (((~(var_9 % var_17))));
    var_27 = var_0;
    #pragma endscop
}
