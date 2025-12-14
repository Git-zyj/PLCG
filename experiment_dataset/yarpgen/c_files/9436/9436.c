/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [1] [1] |= arr_0 [i_0] [i_0];
        var_15 = (max((((((1 << (2221373058632440276 - 2221373058632440273)))) - (max((arr_3 [3] [i_0]), var_2)))), (((!170) / (1 ^ 6579592554605888053)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = ((-(arr_3 [i_0] [i_0])));
            var_17 = 255;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_18 = ((((1 ? 1694658194 : 1974685261)) << (((18446744073709551601 + 6579592554605888050) - 6579592554605888021))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_14 [i_0] = var_8;
                        var_19 = (((arr_11 [4] [i_2 + 1] [i_2 + 1]) ? (arr_11 [i_2] [i_2 + 1] [i_2 + 1]) : var_4));
                    }
                }
            }
            var_20 = ((-(var_10 + var_7)));
            arr_15 [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_2 + 1]);
        }
    }
    var_21 = var_11;
    #pragma endscop
}
