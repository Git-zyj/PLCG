/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 ? ((((!var_10) && -4586579219491879117))) : ((min(var_2, var_13)))));
    var_15 = ((var_7 + (((max(var_9, var_7))))));
    var_16 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [5] [5] = (arr_0 [i_0 - 1]);
        arr_4 [7] = (arr_0 [i_0 - 1]);
        arr_5 [i_0] = (var_13 - var_13);
        var_17 = ((!(arr_2 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    arr_13 [i_1 - 1] [i_2] [i_2] [i_3] = ((-(~var_12)));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [i_2] [i_3] = ((-(arr_6 [i_2])));
                        arr_17 [i_1] [i_3] [i_3] = var_2;
                        arr_18 [i_4] [i_4] [i_4] [i_3] [i_1 - 1] = (((arr_2 [i_1 + 1]) + var_13));
                    }
                    arr_19 [i_1] [i_3] [i_3] = (((!var_13) ? (arr_14 [i_1]) : ((-(arr_1 [i_1] [i_1])))));
                    arr_20 [i_3] [i_2] [0] = ((((((~(arr_2 [i_2]))) + 2147483647)) << (((((arr_0 [i_1]) | (arr_7 [i_3 - 3]))) - 4294967259))));
                    arr_21 [i_1] [i_3] = (((arr_1 [i_1 + 1] [i_3 - 3]) ? (arr_1 [i_1 + 1] [i_3]) : (arr_1 [i_1 - 1] [i_1 + 1])));
                }
            }
        }
        arr_22 [i_1 + 1] = ((-(var_4 + 65024)));
        arr_23 [i_1] = var_3;
    }
    var_18 = (max(((((var_2 + 2147483647) >> (var_6 + 22559)))), var_2));
    #pragma endscop
}
