/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_2 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = 9062954775623969037;
    }
    var_15 = (max(var_13, (((!((min(-122, 1972358350))))))));
    var_16 = ((22 * (!var_13)));
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            {
                arr_9 [i_2] [i_1 - 3] = (((!(~118))));
                var_17 += ((-((~(((-123 > (arr_6 [i_2]))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_18 += ((var_0 ? (arr_13 [i_1] [i_2] [i_3] [i_4]) : ((((-(arr_13 [i_1] [13] [i_1 + 1] [i_1]))) / var_5))));
                            var_19 = (min(var_19, (((((~((-1972358375 ? 13 : (arr_11 [i_4] [i_1]))))) - ((2237262793 % (arr_12 [i_1 - 1] [1] [i_1 - 1] [i_1 - 2] [i_1]))))))));

                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_18 [i_1] [i_2 + 2] [21] [i_4] [i_5] [i_1 - 1] [22] = ((((((arr_6 [i_5]) | var_12))) ^ ((5331231379279333756 ? (!-119) : (arr_12 [i_1] [i_2] [i_1] [i_2 + 1] [i_3])))));
                                arr_19 [i_1 + 1] [i_4] [i_3] [1] [1] = (~(~255));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_20 = ((1945632816 < (arr_22 [6] [i_4] [i_3] [12] [i_6] [i_6] [13])));
                                var_21 = (max(var_21, -var_0));
                                arr_24 [i_3] = 1786434663;
                            }
                            for (int i_7 = 3; i_7 < 20;i_7 += 1)
                            {
                                arr_28 [7] [i_4 - 1] [11] [i_2] [i_1] = -16;
                                var_22 = (min(var_22, (((arr_14 [22] [i_2 - 2] [22] [i_3] [i_2 - 2] [i_2 - 2]) ? ((var_9 ^ (arr_20 [i_7 + 2] [i_4 + 1] [i_2 - 2] [i_1 + 1] [i_1]))) : 4107103128))));
                            }
                            arr_29 [i_1 - 3] [i_2 - 1] [7] &= (min(((~(arr_14 [i_4 + 1] [i_4 - 1] [19] [i_2 + 3] [i_1 + 1] [i_1 + 1]))), (~1972358323)));
                        }
                    }
                }
                var_23 = ((-36 < (((arr_14 [i_1 + 1] [i_1] [22] [i_2 - 1] [i_2 - 1] [i_2]) ? (arr_10 [i_1 - 2] [i_1] [i_2 - 1]) : (arr_23 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1])))));
            }
        }
    }
    #pragma endscop
}
