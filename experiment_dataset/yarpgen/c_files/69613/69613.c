/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [2] [8] = 720980492601367086;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [1] [8] [12] [i_1 + 1] = ((((((~6661) ? (7 ^ var_17) : (arr_8 [1] [i_2])))) ? var_0 : 31429));
                    arr_12 [i_0] [8] [8] [i_2] = 7;
                    arr_13 [16] = (((max((((arr_0 [i_2]) / (arr_9 [i_0] [i_1 - 1] [5]))), (-7199950737758985782 + 133)))) ? (max(var_8, var_5)) : ((min((29593 > -26), (((arr_10 [i_0] [i_1] [i_2]) ? var_19 : var_16))))));
                }
            }
        }
        arr_14 [i_0] = (16383 > -41);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_17 [1] [i_3] &= var_15;
        var_20 &= (-41 ? (-9068479427312163703 - 559263392) : 29605);
        arr_18 [i_3] [6] = -36;
        arr_19 [i_3] = (arr_5 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_21 = ((((~(arr_21 [i_4]))) >> (var_15 - 53904)));
        arr_22 [i_4] [i_4] &= (arr_20 [i_4] [i_4]);
        var_22 = (((((((0 ? var_3 : (arr_21 [i_4]))))) + 2147483647)) << ((((((~var_7) <= (((arr_20 [9] [9]) & 7199950737758985781))))) - 1)));
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_29 [3] [i_5] = (+((min((arr_1 [8]), 26))));
                var_23 = (min(var_23, ((((arr_21 [0]) ^ ((var_9 ? (((~(arr_20 [i_5] [i_5])))) : (arr_21 [i_5 - 4]))))))));
                var_24 = (max(29605, 7199950737758985771));
            }
        }
    }
    var_25 &= (!var_19);
    var_26 = ((36 != (((var_6 < ((max(70, -83314393))))))));
    #pragma endscop
}
