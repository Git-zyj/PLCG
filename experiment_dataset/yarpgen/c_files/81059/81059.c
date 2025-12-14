/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -23));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 |= (arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((!(min(1, var_2))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = (-((((((arr_2 [i_0] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? ((9223372036854775807 ? (arr_5 [14]) : -6768240409244370346)) : (arr_4 [i_3 - 1] [i_1]))));
                        }
                    }
                }
                arr_10 [i_1] [14] = (max(((max(var_11, 2583540300))), 1));
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_16 = var_6;
        arr_13 [i_4] [i_4] |= ((((((arr_6 [i_4] [i_4] [i_4] [1]) ? var_10 : (arr_4 [i_4] [i_4])))) ? -0 : (max(((65535 ? 180596317 : -1)), (!1)))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_17 = (((((((max(214, 1))) ? (arr_16 [i_5] [i_5]) : -19))) ? (arr_16 [i_5] [i_5]) : (((arr_14 [i_5]) ? (max(-1, (arr_16 [i_5] [i_5]))) : var_11))));
        var_18 = (arr_14 [i_5]);
    }
    var_19 &= var_11;
    #pragma endscop
}
