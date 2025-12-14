/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [10] = ((((min(((var_13 ? (arr_1 [i_0]) : var_15)), (arr_3 [i_0] [12] [10])))) / (arr_0 [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_17 *= (min((((((arr_13 [i_0] [i_0] [1] [1] [i_4] [10]) != (arr_12 [i_0] [i_1] [i_0] [11] [17] [i_3] [11]))) ? (((arr_13 [7] [i_1] [i_0] [i_3] [i_1] [i_0]) ? var_14 : -32753)) : ((((arr_12 [6] [18] [i_2] [i_2] [3] [i_1] [3]) ? (arr_3 [i_0] [i_1] [i_2]) : var_4))))), (max((min(var_0, (arr_2 [i_3] [i_1]))), var_16))));
                            var_18 = (max(var_18, (((((min((((arr_4 [i_0] [i_0]) ? 1 : var_16)), 700684961))) ? (min(var_4, (min(var_3, var_13)))) : (((-(arr_8 [i_0] [2])))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_21 [6] [6] [13] [i_0] = (((min((((-(arr_19 [i_0] [5] [i_6] [4])))), (((arr_11 [i_0] [i_5] [i_6] [i_0] [i_6]) ? (arr_10 [i_0]) : var_14))))) ? (-114 | 307999552) : (((((!6020020871994408426) || ((((arr_12 [2] [i_5] [i_5] [12] [i_6] [15] [i_6]) ? (arr_14 [1]) : (arr_0 [i_0])))))))));
                    var_19 = ((var_1 ? (((arr_18 [i_0] [i_5] [i_0]) - ((max((arr_14 [i_0]), var_8))))) : ((max(((max((arr_19 [i_0] [i_5] [i_5] [i_6]), (arr_1 [i_0])))), (max(var_7, (arr_12 [i_0] [i_6] [i_6] [i_6] [i_5] [i_0] [16]))))))));
                }
            }
        }
        var_20 = min(((max(((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_19 [i_0] [0] [i_0] [i_0])))), (max((arr_7 [i_0] [i_0] [i_0] [i_0]), ((((arr_13 [i_0] [3] [i_0] [i_0] [i_0] [1]) ? (arr_14 [i_0]) : (arr_11 [17] [17] [19] [i_0] [i_0])))))));
        var_21 = (((((~(arr_19 [i_0] [i_0] [i_0] [i_0])))) ? (min((arr_1 [i_0]), (arr_4 [i_0] [i_0]))) : ((min(2910195877, (!var_10))))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_22 = var_8;
        var_23 = (max((((arr_22 [i_7]) ? (arr_22 [i_7]) : (arr_22 [i_7]))), (arr_24 [i_7] [i_7])));
        var_24 ^= var_13;
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        var_25 = (((arr_14 [i_8 + 2]) > (var_15 - var_4)));
        var_26 = (max(var_26, (((((max((min(8795019280384, 2147483647)), ((max((arr_19 [i_8 + 1] [i_8] [4] [3]), (arr_6 [1] [10] [1] [i_8]))))))) ? ((((((arr_10 [i_8]) >> (var_12 - 78)))) ? (arr_22 [7]) : (((!(arr_8 [i_8 + 2] [i_8])))))) : var_0)))));
        var_27 ^= 1;
    }
    var_28 ^= (max(var_15, (max(((var_8 ? var_3 : var_14)), ((max(var_8, var_16)))))));
    var_29 = var_6;
    #pragma endscop
}
