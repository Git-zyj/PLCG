/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((65265 ? 261 : 0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((((0 ? (65274 / 261) : (255 < 0)))) ? (!105) : (max((((17719 ? 55 : var_2))), 0)))))));
                                var_16 += ((((((170 != 65520) ? (((!(arr_11 [i_2])))) : 17708))) ? var_12 : 2));
                                var_17 = ((var_10 << (var_7 - 1315)));
                            }
                        }
                    }
                    arr_14 [16] [i_0] [i_0] [i_0] = ((!(!10065)));
                }
            }
        }
        arr_15 [i_0] = ((((-(arr_10 [i_0] [i_0] [i_0] [i_0]))) & ((((((28 ? var_4 : -126))) && (((var_5 % (arr_13 [i_0] [7] [7] [i_0])))))))));
        var_18 = ((((((~var_11) * -1))) ? ((~(-1 >= 1739174787))) : -var_13));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        arr_18 [i_5 + 2] [i_5 - 3] = ((724626803 ? ((456727791 ? 6 : var_8)) : (arr_10 [i_5 - 2] [i_5] [i_5] [i_5])));
        arr_19 [i_5] = ((arr_13 [i_5] [i_5] [i_5 - 3] [i_5]) == (var_5 && 9223372036854775807));
        arr_20 [5] = arr_4 [i_5 - 2] [i_5];
        var_19 = (144115188075855872 / var_9);
        var_20 = (max(var_20, ((39 ? (var_11 * 2636763803) : ((((!(arr_16 [10])))))))));
    }
    #pragma endscop
}
