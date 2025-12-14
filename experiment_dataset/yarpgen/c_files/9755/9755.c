/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 768008762;
    var_18 = 11874329102848087759;
    var_19 |= var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((38589 ? -3491228555729458940 : 7305));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 = (arr_1 [i_1]);
            arr_7 [i_0] [i_1] [i_1] = (min(var_14, (((arr_6 [i_0] [1] [i_1]) ? var_9 : ((var_5 << (var_10 - 1503)))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_21 = var_9;
                arr_11 [i_0] [i_1] [i_2] [i_2] = ((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0])));
                var_22 = (((arr_2 [i_1]) ? (((arr_6 [i_2] [i_0] [i_0]) ? (arr_1 [i_0]) : var_10)) : 61451));
                var_23 = ((((!(arr_1 [i_2]))) ? (11874329102848087759 / var_8) : (((arr_8 [i_0] [i_1] [i_2]) ? var_0 : 376951664758675224))));
            }
            arr_12 [4] = (max(((var_0 ? var_8 : (min((arr_10 [i_0] [i_0] [i_0] [i_1]), -768008752)))), ((min((min(866584279, (arr_4 [i_0] [i_1]))), var_15)))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_15 [i_0] = (arr_14 [i_0] [i_3]);
            arr_16 [i_0] [i_0] = (min(var_11, ((13117048636574986934 ? var_12 : (arr_6 [i_0] [i_0] [i_3])))));
            var_24 = (arr_13 [i_0]);
            var_25 = (((!var_8) * (((arr_9 [i_0] [8] [i_3]) ? (arr_9 [10] [i_3] [i_0]) : (arr_9 [i_3] [i_3] [i_0])))));
        }
    }
    #pragma endscop
}
