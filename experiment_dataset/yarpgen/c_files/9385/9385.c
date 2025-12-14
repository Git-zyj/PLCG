/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((-((var_3 ? var_1 : var_8))));
    var_11 = (max(var_11, var_6));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = max(((~((5316597225678263715 ? -1931534168 : (-9223372036854775807 - 1))))), (max(var_2, (arr_1 [i_1 + 1] [i_1 + 1]))));
            arr_6 [i_1] = ((-((max(-1577524066563539194, var_7)))));
            arr_7 [i_1] = (~(min(-9223372036854775806, var_1)));
            arr_8 [i_0] [i_1] [i_0] = (((arr_0 [i_0]) < (arr_0 [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_0] [i_2] = var_0;
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_12 |= ((~((((arr_1 [i_0] [i_0]) && var_7)))));
                            var_13 = (max(var_13, ((((arr_2 [i_3]) > (arr_12 [i_5]))))));
                            var_14 -= (arr_4 [i_4 + 1] [i_3 - 3]);
                            var_15 = arr_9 [i_2];
                        }
                    }
                }
            }
            arr_20 [17] = (!9223372036854775789);
            arr_21 [i_0] [3] [3] = ((-(arr_0 [i_0])));
        }
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            arr_24 [i_0] [i_6] [i_6 - 1] = ((!(((arr_18 [i_6 - 3] [8] [8] [i_6] [i_0] [i_6] [i_6]) || (arr_18 [i_6 - 3] [i_6] [i_6] [i_6] [i_0] [i_0] [2])))));
            var_16 = (max(var_16, ((((min((arr_19 [i_6] [i_6 - 3] [i_6] [i_6 - 2] [i_6]), (arr_19 [i_6 - 1] [i_6] [13] [i_6 - 2] [i_6 - 3])))) ? var_4 : (((max(-2242697877447698988, -2242697877447698988)) & (arr_19 [i_6] [i_6] [i_6 - 1] [16] [i_0])))))));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_27 [i_0] [i_0] [i_0] = max(((var_8 ? (!9223372036854775807) : (-9223372036854775807 - 1))), (-9223372036854775807 - 1));
            var_17 = max((max((((arr_17 [i_0]) ? var_2 : var_7)), (arr_19 [i_7] [i_7] [i_0] [i_0] [i_0]))), ((var_4 ? (arr_17 [i_0]) : (arr_17 [i_0]))));
        }
        arr_28 [i_0] = (((!(arr_26 [i_0] [i_0]))));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        var_18 -= (min((arr_11 [i_8 + 1]), -var_4));
        var_19 = (arr_4 [i_8] [i_8]);
    }
    #pragma endscop
}
