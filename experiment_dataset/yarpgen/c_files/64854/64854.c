/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max((max(14708766583066792376, 5349713962934983267)), (var_4 < 1299444086)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, 14708766583066792376));
        var_14 = 17703544679751952511;
        var_15 = ((!(arr_1 [i_0] [i_0 - 1])));
        var_16 = (max(var_16, (((!(arr_1 [i_0] [i_0 - 1]))))));
        var_17 = (var_0 * var_1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_18 = -2995523210;
            var_19 = (~14148588629331994803);
            var_20 ^= ((arr_3 [10]) ? ((var_0 ? var_11 : var_2)) : ((((var_9 > (arr_2 [i_2]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((arr_10 [i_1] [i_2] [i_4] [i_5]) << (4294967295 - 4294967252)))));
                            var_22 = (arr_14 [i_2 + 2] [i_1]);
                            var_23 = 2995523210;
                            var_24 = var_5;
                            var_25 = (~((2500008876 ? 3737977490642759240 : 1299444085)));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_26 = (arr_10 [i_1] [i_1] [i_1] [i_1]);
            var_27 = 2607938141;
        }
        var_28 = -var_11;
    }
    #pragma endscop
}
