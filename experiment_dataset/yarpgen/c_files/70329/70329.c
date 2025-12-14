/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(var_15, ((((-2147483647 - 1) | -2147483635)))));
        arr_2 [1] = (arr_1 [i_0 + 1]);
        arr_3 [i_0] [i_0] = (((arr_0 [i_0 + 1] [i_0 + 1]) / (((var_8 ? var_8 : -2147483635)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (((arr_0 [i_1] [i_2]) ? (((arr_1 [i_2]) ? (arr_0 [i_1] [i_2]) : -151874958)) : (var_7 && var_5)));
            var_16 = (arr_4 [i_2]);
        }
        var_17 = (max(var_17, ((((((((var_10 ? -151874975 : 1))) && (((33 ? var_6 : var_10))))) || 10424124657297581535)))));
        var_18 *= var_10;
        arr_11 [1] = var_8;
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_19 *= var_10;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    arr_21 [i_4] [i_4 - 1] [3] = (arr_19 [i_3] [i_3] [i_4] [i_5]);
                    arr_22 [i_4] [i_4] = (((arr_13 [i_4 + 4] [i_5 - 1]) ? (arr_14 [i_4] [2] [i_4]) : var_8));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_20 -= -1962197230;
                                arr_28 [i_4] [4] [i_5] [4] [i_4] = (((arr_19 [1] [i_3 + 1] [i_4 + 1] [i_6 + 1]) ^ (arr_23 [i_3 + 2])));
                            }
                        }
                    }
                    arr_29 [i_4] [14] [i_5 + 1] = (var_8 || var_7);
                }
            }
        }
    }
    #pragma endscop
}
