/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max(var_2, var_10));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = ((((1754089897 ? -1754089909 : var_14)) ^ var_4));
            var_18 = (min(var_18, (((2130706432 ? 1 : -570145867)))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 -= var_16;
            var_20 = ((0 ? 1754089903 : 85709215));
        }
        var_21 = (min(var_21, (((((min(-741737031, (~var_8)))) + ((16777216 ? var_9 : (((((arr_7 [18] [8] [i_0]) <= var_1)))))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_22 = (max((arr_8 [i_3] [i_4 + 1]), 7190));
                    arr_13 [i_3] = ((var_0 ? -var_0 : ((10030 ? 73 : 58368))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_23 = ((!((max((((42288 == (arr_12 [i_3] [i_3] [i_4])))), var_11)))));
                                var_24 = (((((var_5 ? (((arr_1 [i_4 - 1]) ? 1996334424 : (arr_14 [i_4] [i_3] [i_3] [i_5 + 3]))) : ((var_12 ? (arr_15 [i_0] [i_3] [i_0 + 2] [i_3] [18]) : (arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3])))))) ? ((((42302 & var_5) ? var_4 : var_8))) : (max(var_9, (var_6 && -83)))));
                            }
                        }
                    }
                    arr_20 [i_3] = (((((arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0 + 3]) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3]) : (arr_10 [i_0 + 2] [i_0] [i_0 + 4] [i_0 + 3]))) != ((min((arr_15 [i_0] [i_3] [i_3] [i_3] [i_0 + 1]), var_7)))));
                }
            }
        }
        var_25 = ((var_2 ? ((((var_2 ? -70 : -83)))) : ((var_16 << (((((arr_8 [6] [8]) ? var_1 : (arr_17 [i_0 + 2] [1] [i_0 + 2] [i_0] [i_0 + 2] [1]))) - 52098))))));
    }
    var_26 = ((1 ? ((~((var_2 ? var_5 : var_15)))) : ((((var_8 ? var_13 : var_11)) | var_15))));
    #pragma endscop
}
