/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 |= max((arr_1 [i_0]), ((max((arr_1 [10]), (arr_0 [11])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = max((arr_3 [i_0] [i_1]), ((((arr_6 [i_0 - 2] [i_0 - 1]) > (arr_5 [i_2] [i_1] [i_0] [i_0])))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_16 = (arr_5 [i_0] [i_0] [i_2] [i_3]);
                            var_17 = ((+(min((arr_4 [i_0] [i_0] [i_2]), ((~(arr_4 [i_0] [8] [i_0])))))));
                            var_18 -= (max((arr_11 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] [i_0] [i_1]), (max(((-(arr_8 [i_4 + 2] [i_3]))), ((min((arr_7 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]), (arr_9 [i_0] [i_1] [i_1] [i_0] [i_4]))))))));
                            arr_13 [i_4] = ((-(max((arr_4 [i_0] [3] [i_2]), (arr_3 [i_0] [i_1])))));
                        }
                        arr_14 [i_0 - 2] [i_1] [i_2] [i_3] [i_3] = ((!(arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_3])));
                        var_19 = (arr_10 [i_3] [i_3] [i_2] [10] [i_0]);
                        var_20 = (max(var_20, (max(((min((arr_1 [i_0 - 1]), (arr_1 [i_1])))), (arr_2 [i_0] [i_2])))));
                    }
                    var_21 = (((max((arr_0 [i_2]), (max((arr_8 [i_0] [i_2]), (arr_2 [i_0] [i_0]))))) & 65535));
                    arr_15 [i_0] [i_1] [i_1] [i_2] = (min((max((arr_8 [i_2] [i_1]), (((!(arr_3 [i_0] [i_2])))))), (!-1276043424)));
                }
            }
        }
    }
    var_22 = (min(var_1, (min(var_6, ((var_3 << (var_9 - 67)))))));
    var_23 = (min(var_23, var_0));
    var_24 = var_1;
    var_25 = (min(var_7, (max(var_11, -var_3))));
    #pragma endscop
}
