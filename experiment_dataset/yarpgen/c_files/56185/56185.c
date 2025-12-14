/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 -= (((!var_1) ? (~1) : ((~(arr_0 [9])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 -= (((arr_1 [i_2] [i_2 + 1]) && (arr_1 [i_3] [i_2 + 1])));
                        var_13 -= (((arr_9 [i_3 - 1] [9] [5] [i_3 - 1] [i_2 - 1]) + (arr_9 [i_3 + 2] [i_3] [i_3] [i_3 - 1] [i_2 - 1])));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (((((-(arr_5 [1] [i_2 - 1] [i_0] [i_0])))) ? (((arr_0 [i_0]) ? var_9 : 18446744073709551615)) : (((388159001 << (((arr_3 [i_0] [i_0] [i_2]) - 5742476014535185904)))))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] = var_8;
                        var_14 = (((-(arr_3 [i_3 - 1] [i_1] [i_0]))));
                    }
                }
            }
            var_15 = (((((-(arr_4 [i_0] [i_0])))) ? var_0 : var_8));
            arr_13 [i_0] [i_0] [i_0] = ((-(((arr_7 [1] [1] [1] [1]) ? (arr_2 [16] [16] [i_0]) : var_4))));
        }

        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_0] = (((arr_3 [i_4 - 4] [i_4 - 4] [i_4 + 1]) ? (arr_3 [i_4 - 4] [i_4 - 2] [i_4 - 3]) : 131140587));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    {
                        var_16 = 13360;
                        var_17 = (min(var_17, ((((arr_21 [13] [i_5 + 4] [i_5 + 2] [19]) >> (((~52176) + 52182)))))));
                    }
                }
            }

            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                var_18 -= (arr_17 [i_7] [i_7 - 3] [i_4]);
                var_19 -= (((-(arr_3 [i_0] [i_0] [i_7]))));
            }
        }
        var_20 -= 13360;
    }
    var_21 = var_4;
    var_22 -= var_8;
    #pragma endscop
}
