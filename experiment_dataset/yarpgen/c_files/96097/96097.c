/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = -32766;
        var_11 = ((!(arr_1 [i_0] [10])));
        var_12 = (max(var_12, ((((arr_1 [i_0] [i_0]) ? var_2 : (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= (max(var_4, (((max((arr_4 [i_1] [i_1]), 3867316851)) << (-1258776818 + 1258776840)))));
        var_13 *= (max(((min(((~(arr_1 [i_1] [i_1]))), (((var_2 != (arr_4 [i_1] [i_1]))))))), -var_3));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_14 ^= -122;
                                var_15 = (max(var_15, ((((arr_6 [i_1] [i_2]) ? ((min((arr_6 [i_1] [i_3]), (arr_6 [i_1] [i_2])))) : (((arr_12 [i_5 + 1] [i_5 - 1] [i_4] [i_3 + 2]) + var_0)))))));
                            }
                        }
                    }
                    arr_16 [i_2] [7] [i_3] [i_3] = ((-(min((max(-122, 8241967893135013120)), var_7))));
                    arr_17 [i_2] = (min((arr_12 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 1]), (arr_15 [i_2])));
                    var_16 ^= ((0 ? (((~(-32766 % 1)))) : (max(-var_3, ((max(var_5, var_0)))))));
                    arr_18 [i_1] [i_2] = var_3;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_21 [i_6] = var_2;
        var_17 = (((arr_20 [i_6] [i_6]) && 67));
    }
    var_18 -= -8011895938346270847;
    var_19 = (((var_9 ? (var_2 - var_9) : 751174673)));
    var_20 = var_9;
    var_21 = (((max(var_3, var_3)) >> (((((((427650434 << (6673 - 6667)))) ? var_3 : (((var_4 >> (var_6 - 1002127028)))))) - 2985522688))));
    #pragma endscop
}
