/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_16 &= ((70 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2])));
        var_17 = (arr_1 [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_0 + 1] = (((arr_4 [i_0 - 1] [i_3 - 1] [i_2]) ? 2564952228088020940 : (arr_5 [i_0 - 2])));
                                var_18 = (((arr_2 [i_1]) ? (arr_10 [i_0] [i_1] [3] [3]) : ((-(arr_10 [7] [7] [i_2] [i_2])))));
                                arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_1] [i_0] = 0;
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = -1;
                                arr_14 [i_1] [i_1] = (((arr_1 [i_3 - 1]) ? (arr_3 [i_1]) : (arr_1 [i_0])));
                            }
                        }
                    }
                    var_19 = ((((48379 ? (arr_3 [i_1]) : (-32767 - 1))) << (!48402)));
                    var_20 = (((arr_6 [i_0 + 2] [i_1] [i_2]) ? 1 : 44082));
                    arr_15 [i_1] [6] [i_2] = ((-((~(arr_6 [i_0] [i_1] [i_2])))));
                }
            }
        }
        var_21 = ((arr_3 [4]) ? 9 : 10565);
        var_22 = (0 <= 3432440471305156389);
    }
    var_23 = (max(var_23, (~var_8)));
    var_24 = (max(var_24, (((((var_4 && (var_11 == var_12))) ? (~var_0) : var_10)))));

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_25 ^= ((-((-29 ? 3046804100925053253 : 3284820664811642213))));
        var_26 = (((((~(~44082)))) ? ((~((~(arr_18 [i_5 + 2]))))) : ((~(~32242)))));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 8;i_6 += 1)
    {
        arr_23 [i_6] = (((arr_17 [i_6 - 1]) ? 1 : 11));
        var_27 += (((arr_5 [i_6 - 1]) ? 7121 : (arr_6 [i_6 - 1] [i_6 + 1] [i_6 - 2])));
        var_28 = (((arr_5 [i_6]) + (((1 ? 33270 : 25)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_29 = ((((((arr_25 [i_7] [i_7]) ? 65535 : (arr_25 [i_7] [i_7])))) ? ((-(arr_25 [i_7] [i_7]))) : (arr_25 [i_7] [i_7])));
        arr_27 [i_7] = (((-(arr_25 [i_7] [i_7]))));
        var_30 += -11;
        var_31 = (((arr_26 [1]) ? -336069407 : (((arr_24 [i_7]) ? (((0 ? (arr_25 [i_7] [i_7]) : (arr_25 [i_7] [i_7])))) : (((arr_25 [i_7] [i_7]) ? (arr_25 [i_7] [i_7]) : -3432440471305156385))))));
    }
    #pragma endscop
}
