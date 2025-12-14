/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((((!(-31285 % -31285)))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_16 = (min(var_16, (((!(-5631 | -31284))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_11 [i_0] [i_0] [i_1] [i_1] [i_1])));
                            arr_15 [11] [11] [i_2] [i_3] [i_4] = (!-1530582822);
                            var_17 = (((arr_4 [i_0]) * (((arr_11 [i_0] [i_0] [7] [i_0] [i_0]) / var_7))));
                            arr_16 [i_0] [10] [6] [i_2] [i_3] [i_4] = (var_8 - 5609);
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] &= (((((((arr_6 [i_0] [i_0] [i_2]) | var_12))) ? (var_13 ^ var_1) : (arr_10 [i_0] [i_0] [8] [i_0] [i_2]))));
                }
            }
        }
    }
    var_18 = (max(var_18, (((-2047 && (((((-31285 ? var_13 : var_10))) && 2634736689828262472)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_19 = ((-(~var_5)));
                arr_23 [i_5] [2] [i_5] = (arr_18 [i_6] [i_6]);
                var_20 += ((-44 ? -31 : -26336));
            }
        }
    }
    #pragma endscop
}
