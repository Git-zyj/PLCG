/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        var_20 = ((-(arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 = (max((arr_0 [i_1] [i_0]), -66));
            var_22 = (((((((min(16965, 66)))) < ((86 ? 56285 : 4194304)))) ? (!7737) : 9250));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_23 |= (-(((var_3 != var_13) ? ((var_4 ? 92 : 2956654629910324638)) : (arr_10 [i_3] [i_3] [i_2 + 2] [i_2] [i_2 - 1]))));
                            var_24 = ((-(max((min(1180406562831636000, (arr_6 [i_4]))), var_7))));
                            var_25 = (arr_9 [i_4] [4]);
                            arr_13 [i_4] [i_2] [i_2] [i_2] [i_1] [i_4] = (((~(arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2]))));
                            arr_14 [i_4] [16] [i_3] [i_4] [i_1] [14] [i_0] = ((((((((10956 ? -32574 : 1))) ? ((max(60448, (arr_10 [i_4] [i_3] [i_2] [3] [i_0])))) : (9251 || var_14)))) ? ((var_7 / (arr_2 [i_2 + 2]))) : (((((arr_9 [i_4] [i_0]) ? (arr_4 [i_3]) : var_14))))));
                        }
                    }
                }
            }
            arr_15 [16] [16] = (((((19597 ? -1351879822324021988 : 9192245149945683873))) ? (((!((max(9251, var_2)))))) : ((max((max((arr_10 [2] [i_1] [i_1] [i_0] [i_0]), (arr_7 [i_1] [i_0] [i_0]))), 77)))));
            arr_16 [i_1] [i_0] = ((((min(32573, 9233))) ? (max(-18, (arr_8 [i_1] [14] [i_0]))) : (max((arr_9 [i_1] [i_0]), (arr_0 [i_1] [i_0])))));
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            {
                var_26 ^= (((((~((((arr_18 [i_6] [i_5]) || (arr_18 [i_6] [8]))))))) - (min((((arr_19 [i_6] [i_5]) ? 2948218396 : var_18)), (((43415 ? 9236 : 55559)))))));
                var_27 = (min(((~(min(var_0, var_17)))), (((((min(56281, 50))) ? (var_5 | 12482) : 1)))));
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [i_8] [i_7 + 1] [i_6 + 1] [i_5] [i_5] = ((((((arr_18 [i_6 + 1] [i_5]) ? (arr_18 [i_5] [i_5]) : -26))) ? ((var_9 ? (arr_18 [i_7 - 1] [i_6]) : (arr_18 [i_7 + 2] [i_5]))) : 65535));
                                var_28 ^= ((((min((((arr_22 [i_9] [i_7 + 3] [i_7 + 3]) ? 2948218396 : (arr_27 [i_9] [i_9] [i_5] [i_8] [i_5] [i_6] [i_5]))), ((max((arr_22 [i_7] [i_7] [i_5]), 15)))))) ? (arr_24 [i_6 - 1] [i_8] [i_7] [i_6 - 1] [6]) : ((((((arr_25 [i_9] [i_5] [i_5] [i_5] [i_5]) ? (arr_25 [i_9] [i_8 - 1] [i_5] [i_5] [i_5]) : (arr_25 [i_9] [i_8 + 1] [i_6 - 2] [i_6 - 2] [i_5])))) ? (6550606937608360081 | 7096682721852679629) : var_16))));
                                var_29 = (arr_25 [i_9] [i_8] [i_7 - 3] [i_5] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
