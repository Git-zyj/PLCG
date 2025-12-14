/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = var_15;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (~(((arr_7 [i_0] [i_0] [i_1] [i_0]) ? ((var_8 ? -342786792 : -20467)) : ((((arr_8 [i_2] [i_1] [1] [i_0]) < (arr_2 [i_1])))))));
                    var_19 *= (((((32753 % ((20467 ? (arr_5 [i_0] [19] [i_2]) : 12963))))) ? ((min(var_10, (max(var_6, (arr_6 [i_0] [i_1])))))) : ((((arr_7 [2] [4] [i_1] [i_1]) > (max((arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_2]), (arr_2 [i_2]))))))));
                    var_20 = (((((-((max(52590, (arr_0 [i_0]))))))) ? (arr_8 [i_0] [i_1] [i_0] [i_2]) : (((arr_2 [i_0]) - (arr_6 [i_0 + 1] [i_1])))));
                }
            }
        }
        var_21 *= ((min((arr_1 [16]), 1016)));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_21 [i_3] = (max((arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]), ((((-111357763 * var_5) > (arr_19 [i_3] [i_4] [i_3] [i_6] [i_6]))))));
                        var_22 += (!var_8);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        arr_29 [i_3] [i_7] [i_3] [9] [i_8] = (arr_7 [i_3] [i_7] [i_3] [4]);
                        var_23 *= ((~(~-979147206126359474)));
                    }
                    arr_30 [i_3] [5] [i_8] = ((((!134217727) ? (~var_0) : var_15)));
                    arr_31 [i_3] [i_3] [i_3] = (min(((-(arr_14 [i_3]))), -var_9));
                }
            }
        }
        var_24 = var_14;

        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            var_25 = -32761;
            var_26 = (max(var_26, (((((((arr_7 [i_10 + 1] [i_10 + 1] [20] [i_10 - 1]) ? var_9 : (arr_7 [i_10 + 1] [i_10 + 1] [6] [i_10 - 1])))) || ((max(-52566, (~2147483647)))))))));
            arr_34 [i_3] [5] [i_3] = (arr_15 [i_3]);
            arr_35 [i_3] [i_10 - 2] = 880805520;
        }
        var_27 = ((var_5 ? 52566 : ((-((-(arr_19 [1] [6] [i_3] [i_3] [7])))))));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_28 |= ((((((((~(arr_6 [i_11] [i_11])))) < ((~(arr_1 [0])))))) > (arr_5 [i_11] [i_11] [19])));
        arr_40 [0] [10] = ((var_7 | (((~(arr_39 [i_11] [i_11]))))));
    }
    var_29 = (max(var_29, (((~(((((23299 ? var_16 : var_4))) ? -var_6 : ((var_6 ? var_13 : var_5)))))))));
    #pragma endscop
}
