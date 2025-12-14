/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [0] = var_12;
        var_14 = min(var_0, -1);
    }
    var_15 *= var_10;

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [6] [i_1] = ((2750020670 ? var_12 : ((-((var_10 * (arr_7 [i_1] [3])))))));
        var_16 = (((((arr_1 [i_1]) ? 7966713022625652147 : 1707976506))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_17 *= 9;
        var_18 = (min(var_18, ((min((((255 ? (((var_0 ? var_8 : var_8))) : (arr_11 [i_2 - 1] [i_2 - 1])))), (((arr_11 [i_2 - 2] [i_2 - 2]) ? ((-2616530299476811871 ? -126 : -2616530299476811854)) : (arr_1 [i_2 - 1]))))))));
        arr_12 [i_2 + 1] [i_2] = (((arr_11 [i_2] [i_2]) - (~var_8)));
        arr_13 [i_2 + 2] [i_2 + 2] = max((-32764 + var_1), (((((12616379512635196742 ? 1517488835053785317 : 37512))) ? var_0 : 4064)));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_28 [i_3] [i_4] [i_5] [4] [i_5] = ((max((arr_23 [i_3] [i_3] [i_3] [i_3]), (255 / -2616530299476811858))));
                        var_19 -= (arr_22 [i_4] [i_5] [i_5]);
                        arr_29 [i_3] [i_3] [i_3] [14] = 230;
                        var_20 = ((((((!var_3) ? (arr_27 [i_5]) : ((var_9 ? (arr_19 [i_3]) : var_2))))) > (max(2616530299476811870, ((((arr_18 [i_3]) ? 118 : (arr_2 [i_6]))))))));
                    }
                }
            }
        }
        var_21 = (max((((arr_25 [i_3] [i_3]) ? 49914 : (arr_2 [i_3]))), ((min(var_9, var_0)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_33 [7] = ((-(((arr_14 [i_7]) ? 0 : (arr_22 [i_7] [i_7] [0])))));
        var_22 = ((32758 || (((15631 ? 10543 : -10679)))));
        var_23 = ((32767 >= ((~(arr_26 [6])))));
        var_24 = (~2339979821);
        var_25 = 10699;
    }
    #pragma endscop
}
