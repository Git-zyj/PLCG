/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((7418561450449104749 ? ((var_3 ? var_11 : var_7)) : var_13)), (((var_3 > var_7) ? (0 >= var_12) : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_11 [i_0] [i_3] [i_1 + 2] [i_0] [i_0] [i_0] = ((((min(-20400, 69))) ? (((arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]) / (((arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_4]) ? var_1 : (arr_0 [i_4] [i_4]))))) : ((((min(3018216205, 63)) - 0)))));
                            var_15 -= (((((63 * (arr_0 [i_0 - 3] [i_0 - 1])))) / (arr_7 [i_0 - 4] [i_0 - 2] [i_0] [i_0 - 3])));
                            var_16 = ((1545870402 ? 205 : 2047));
                        }
                        arr_12 [i_0] [i_3] [i_0] [i_1] [i_2] [i_3] = -20400;
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_17 = ((((((arr_10 [i_0 - 3] [i_0] [i_0] [i_0 - 4] [i_0]) - (arr_10 [i_0 - 4] [i_0] [i_0 - 2] [i_0] [i_0])))) ? -2558103269 : ((12 ? 36020000925941760 : 1126700622))));
                        arr_17 [i_0] [i_0] [i_2] [i_5] = (arr_16 [i_0 + 1] [i_1] [i_2] [i_5]);
                    }
                    arr_18 [i_0] [i_1] [i_1] = (min(((((max(0, var_6))) ? -96 : ((4294967271 ? var_13 : var_7)))), (((!((((arr_2 [i_1 - 1] [i_2]) ? (arr_9 [i_0] [i_0 - 3] [i_0]) : var_9))))))));
                }
            }
        }
    }
    #pragma endscop
}
