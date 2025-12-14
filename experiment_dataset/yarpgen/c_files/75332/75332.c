/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = -596033131;
        arr_5 [i_0] = (arr_2 [i_0]);
        var_14 -= ((28465 ? ((var_9 ? 37061 : 37085)) : (arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (min(var_15, (((((37079 - var_8) + 19)) > 65535))));
        var_16 = (max(var_16, var_4));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_13 [i_3] [1] [3] = (max((min(((var_1 ? (arr_0 [i_2]) : var_1)), ((max(206, (arr_6 [i_2] [i_2])))))), ((((var_13 && 0) || (((4503599627369472 ? var_5 : 0))))))));
                arr_14 [i_2] [i_2] = ((((((min(var_4, 6703134545480809414))) ? var_5 : (max((arr_2 [i_2]), var_7)))) < ((min(((var_9 ? 65532 : 37050)), 0)))));
                var_17 = (((arr_10 [i_2]) / (min(65529, var_12))));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_18 = ((var_8 ? ((-(((arr_10 [i_2]) + (arr_8 [7]))))) : (min(59294, (((var_5 && (arr_16 [i_3]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((15 ? ((max(255, 14))) : 0)) + (arr_2 [i_2]))))));
                                arr_23 [i_2] [i_3] [i_3] = ((((max((min(var_9, var_11)), (((0 ? var_6 : 43)))))) ? ((min((!var_1), (((arr_21 [4] [4] [3] [i_5] [i_6]) ? (arr_7 [8] [i_6]) : var_5))))) : (((arr_7 [i_2] [i_2]) ? var_7 : var_6))));
                                arr_24 [i_6] [3] [2] [i_2] [i_2] = ((~(((min(231, 65523))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_3;
    var_21 = (((((0 <= var_8) ? -28465 : (max(30, var_11)))) & (~var_9)));
    #pragma endscop
}
