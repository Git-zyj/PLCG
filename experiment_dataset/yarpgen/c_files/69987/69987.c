/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (max(var_21, (((var_14 ? ((((!var_9) ? ((max((arr_1 [11]), (arr_1 [i_0])))) : ((15775591584154908003 ? 789618999 : (-32767 - 1)))))) : ((~(arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 ^= (((((((((arr_1 [2]) & (arr_11 [i_0] [i_0] [0] [i_0] [i_0])))) ? ((min((arr_1 [i_0]), var_8))) : 4080))) < (arr_5 [i_3] [i_3] [i_2] [i_2 + 1])));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [i_3] = ((((((max(-4080, 15775591584154908003)) ^ (4333965031253917139 ^ var_4)))) ? (((((1 ? 4080 : -91))) ? (arr_11 [5] [i_1] [i_2] [i_3] [i_4]) : (1 | -25756))) : (arr_10 [i_3 - 1] [i_3] [i_3] [i_3] [i_3])));
                                arr_13 [i_0] [i_1] [i_3 - 1] = var_3;
                            }
                        }
                    }
                    arr_14 [i_2] = ((4333965031253917139 - (1 | -4080)));
                    arr_15 [i_0] [9] [i_2] = max(((((-2147483647 - 1) ? ((var_8 ? var_8 : (arr_3 [4] [i_1] [i_2]))) : ((-79 ? var_18 : (arr_8 [i_0] [i_1] [i_2])))))), ((+(min((arr_4 [1]), (arr_3 [i_0] [i_0] [i_0]))))));
                    arr_16 [i_0] [i_1] [i_2] = (((arr_11 [15] [i_1] [i_2 - 3] [i_2] [i_2]) - ((-1751843635 ? ((max((arr_1 [i_0]), (arr_5 [i_0] [i_1] [i_1] [i_2])))) : (-4080 | var_14)))));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_25 [i_5] [i_6] = (((((-1751843630 < (((arr_11 [i_5] [i_5] [i_5] [i_6] [i_6]) - (arr_1 [8])))))) == (!11366964832025953151)));
            var_23 = (min(var_23, (((-(((arr_3 [i_6] [i_6] [3]) ? (arr_3 [i_5 + 3] [i_5 + 2] [i_6]) : (arr_3 [i_5 + 4] [i_5 + 2] [i_5 + 4]))))))));
            arr_26 [1] = (arr_10 [i_5] [i_5] [i_6] [i_6] [i_6]);
            arr_27 [i_5] [i_6] [i_5 + 1] = (min(((min((arr_17 [i_5 - 3]), (arr_22 [i_5] [i_5] [i_5 + 1])))), 27171197));
            var_24 = (max(var_24, (((-(max(40258, ((((arr_22 [0] [i_6] [i_6]) || var_2))))))))));
        }
        arr_28 [i_5 - 1] |= ((~(((arr_2 [i_5 + 4] [i_5 + 4] [i_5 - 1]) ? var_8 : ((14112779042455634477 ? (arr_24 [i_5]) : -1))))));
    }
    #pragma endscop
}
