/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = (var_12 > var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (((arr_3 [i_1]) >> (((((-63 % (arr_4 [i_0] [i_0] [i_0]))) != -56)))));
                    arr_9 [i_0] [i_2] [i_1] [i_0] = (((arr_6 [i_0] [i_1] [i_2]) / (arr_7 [9] [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 += ((((((((arr_12 [i_0] [i_0] [i_1] [i_2] [6] [i_4]) || (arr_2 [i_0] [9])))) >> ((((arr_2 [i_0] [i_1]) >= (arr_15 [6] [6])))))) & (arr_1 [10])));
                                var_21 = arr_13 [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_22 = arr_14 [i_0] [i_0] [i_1] [i_2] [12];
                        arr_19 [i_5] [i_2] [i_0] [i_0] [i_0] = (arr_7 [0] [i_0] [i_5]);
                        var_23 = (arr_16 [i_0] [i_1] [i_2] [i_5] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_24 = (((((arr_12 [5] [5] [i_1] [i_2] [i_0] [i_6]) + 9223372036854775807)) >> (((arr_2 [i_1] [i_0]) + 21695))));
                        var_25 = (arr_8 [i_2]);
                    }
                    var_26 = (((arr_22 [i_0] [i_0] [i_0]) > (arr_12 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
