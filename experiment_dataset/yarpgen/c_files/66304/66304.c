/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (65527 * 13);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (!4294967040)));
        arr_2 [2] = (arr_0 [i_0 - 3]);
        arr_3 [i_0 + 2] = var_0;
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, 1085121868730078057));
                    arr_12 [i_2] [i_2] [i_2] = ((+((((((arr_10 [i_1] [i_1] [i_2] [i_2]) & 8505411823581894290))) & 70368744177663))));
                    var_17 = (max((arr_9 [i_1 + 2] [i_1 + 1] [i_2 + 1]), (arr_9 [i_1] [i_1 - 1] [i_2 + 1])));
                    var_18 = (max(var_18, (arr_1 [14] [i_2])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 6;i_6 += 1)
                {
                    {
                        arr_20 [i_1] [i_4 + 2] [i_4 + 2] [i_6] [i_6 + 4] = (var_1 - var_0);
                        var_19 = (max((arr_0 [i_1 + 2]), (((arr_11 [i_5] [i_5]) % (arr_11 [i_5] [i_5])))));
                        var_20 = (max(var_20, (((var_6 % (max((~1), (((arr_16 [i_1 + 1] [4] [i_5] [i_6 + 3]) - (arr_0 [i_1]))))))))));
                    }
                }
            }
        }
        var_21 = var_6;
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        arr_23 [1] [13] = (!var_11);
        var_22 = (max(var_22, ((((var_3 == (!-13)))))));
        var_23 = (max(var_23, ((((((((arr_22 [i_7] [7]) ? (arr_0 [i_7]) : (arr_1 [0] [i_7 - 1]))) / (179 * 21650))) >> (5266 - 5246))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                {
                    var_24 = (max(var_24, (arr_1 [2] [2])));

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_25 = (((!var_6) > (arr_32 [i_7] [i_7])));
                        var_26 = ((!(arr_22 [i_7] [i_7])));
                    }
                    var_27 = (((min((arr_30 [i_9 - 3] [i_8 - 1] [i_9]), (arr_29 [i_9 - 3] [i_8 - 1]))) > (arr_30 [i_7 + 1] [i_7 - 1] [2])));
                    var_28 = (max(var_28, (((((((min((arr_22 [i_7] [i_7]), var_13))) ? 23392 : var_1)) | var_8)))));
                    var_29 = (max(var_29, var_9));
                }
            }
        }
    }
    var_30 = (min(3, (((max(var_12, -25561))))));
    #pragma endscop
}
