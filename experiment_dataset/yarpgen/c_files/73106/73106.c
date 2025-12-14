/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (max(((-(max((arr_1 [i_0]), (arr_0 [i_0] [3]))))), ((((((arr_1 [i_0]) + -126))) + (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))));
        arr_2 [i_0] = (((min(11265646940850149132, 6504)) | ((((((arr_0 [i_0] [16]) | (arr_1 [i_0]))) | (((arr_1 [i_0]) | (arr_0 [i_0] [i_0]))))))));
        var_18 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [16] = (arr_0 [1] [i_1]);
                    var_19 = arr_5 [i_0] [9] [i_0] [i_0];

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (arr_3 [i_2] [i_1]);
                        arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = (arr_3 [i_1] [i_1]);
                        arr_13 [i_0] [15] [15] [6] [i_0] = (((((~(((arr_7 [i_0] [i_0] [i_0]) ? (arr_6 [3] [i_0] [i_2] [i_3]) : (arr_6 [i_0] [i_0] [i_2] [i_3])))))) | (((((min((arr_11 [i_3] [i_3] [i_2] [i_0] [16] [i_0]), (arr_1 [i_0]))))) | (min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        var_21 = (arr_14 [i_4] [i_4]);
        var_22 = (max(var_22, (~-15951)));
        var_23 += (((((-(min((arr_17 [i_4 + 1] [i_4]), (arr_4 [i_4])))))) ? (arr_3 [i_4] [i_4]) : (min((arr_5 [i_4] [i_4] [i_4] [i_4]), ((((arr_10 [i_4] [i_4 - 3] [6]) | (arr_6 [i_4] [2] [i_4] [6]))))))));
        var_24 = ((arr_8 [i_4] [i_4] [i_4]) | (arr_10 [i_4] [i_4] [i_4]));
    }
    var_25 = (min(var_25, ((((max((var_16 | var_14), var_4)) | ((((var_0 | var_16) | var_7))))))));
    var_26 = var_14;
    #pragma endscop
}
