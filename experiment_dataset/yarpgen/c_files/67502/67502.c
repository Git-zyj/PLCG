/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = 1886805408;
    var_20 = ((~(((!((min(-2147483632, var_9))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) > (((((arr_0 [i_0] [4]) != var_1))))));
        arr_3 [i_0] = (min((-2037281963924429015 || 65535), (min(14649, -12))));
        arr_4 [i_0] = (((0 ? -14647 : -1020840612173869594)) > (arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = ((((max(-14639, -14620))) ? ((18446744073709551610 ? (arr_1 [i_0]) : 82)) : ((((arr_1 [i_2]) && (arr_1 [i_2]))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_22 = (min((((((var_16 ? (arr_12 [i_0]) : 224))) ? (arr_13 [i_0] [i_0] [i_2]) : 1020840612173869593)), (((14649 << (var_17 - 53))))));
                        var_23 += (arr_11 [i_3] [i_2] [i_1 + 1] [i_0]);

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_24 *= 35600;
                            var_25 += (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 2]);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_20 [i_0] [2] [8] [2] [i_3] [i_3] [i_3] = 255;
                            var_26 = (min(127, (((!(-127 - 1))))));
                        }
                    }
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        var_27 = (arr_16 [i_6 - 3] [0] [i_2] [i_1] [i_1] [5]);
                        arr_23 [i_0] [i_6] [i_2] = (16432491927257382342 ? var_8 : (((arr_16 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_6 + 1] [i_6 - 3] [i_6 - 1]) ^ var_9)));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_28 [i_7] [i_7] [i_7] [i_7] = (((((2058210419 ? 84 : 33))) ? (((arr_14 [i_1 + 1]) ? (arr_14 [i_1 - 1]) : (arr_14 [i_1 + 1]))) : ((var_8 ? (arr_14 [i_1 + 1]) : (arr_14 [i_1 + 1])))));
                        var_28 -= ((-(((arr_18 [i_1 - 1] [i_1 + 1] [i_0] [i_2] [i_1 - 1]) ? (~-34) : (arr_16 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_1])))));
                    }
                    arr_29 [i_2] = (((~var_2) ? (arr_11 [i_0] [i_1] [i_2] [i_1 + 1]) : (arr_11 [i_2] [i_1 - 2] [5] [i_1 + 1])));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = (min(((78 > (arr_33 [i_8]))), ((99 || (arr_33 [i_8])))));
        arr_35 [i_8] = 5918333010855029776;
        arr_36 [16] |= var_5;
    }
    #pragma endscop
}
