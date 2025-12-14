/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (min(var_15, (((!((min(4422345546311464582, var_4))))))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_16 = ((arr_5 [i_1 + 1] [i_1 + 2] [i_1]) ? (min(var_4, var_5)) : (((var_14 | (arr_5 [i_1 - 2] [i_1 + 2] [i_1])))));
            var_17 = (max(var_17, (((-1413386017 + 2147483647) == -6855967101796813781))));
            var_18 = (max((arr_2 [i_0] [i_0] [i_1]), var_5));
            arr_6 [i_1] [i_1] = (max(((~(arr_3 [i_1]))), (((~((1413386013 ? var_14 : (arr_5 [i_0] [i_0] [i_1]))))))));
            arr_7 [i_1] = (arr_1 [i_1 - 2] [8]);
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 += ((((~(arr_5 [i_2 + 1] [i_2 + 1] [10]))) ^ ((~(arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                    var_20 = (max((arr_14 [i_2] [i_2] [i_2]), (min(2147483647, 145))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 = (((var_0 ? ((1 ? -16384 : var_7)) : (arr_20 [6]))));
                                var_22 = (((~(min(var_9, (arr_18 [i_3] [i_4] [i_5] [i_6]))))));
                                var_23 = (min(var_23, ((((((~(arr_16 [i_3] [i_4 - 1] [i_4 - 1] [i_6])))) ? ((min(805306368, 1))) : (arr_8 [i_2 + 1]))))));
                            }
                        }
                    }
                    arr_21 [i_2] [i_3] [i_3] [i_2 + 1] = 16383;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_24 = ((((min((arr_26 [i_7 - 1] [i_7 - 1]), var_4))) ? var_3 : var_10));
                    var_25 *= min(3589705548, (max((arr_27 [i_8] [i_8] [i_7 - 1]), (arr_23 [i_7 - 1]))));
                }
            }
        }
    }
    var_26 = 1;
    #pragma endscop
}
