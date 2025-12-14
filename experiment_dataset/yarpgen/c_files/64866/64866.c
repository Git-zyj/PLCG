/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0 - 3]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_0] = (((!-3566712446) && ((((((9166637139258314302 >> (30386 - 30372)))) ? (arr_7 [i_0 - 3] [i_1] [i_0] [i_0]) : var_5)))));
                        var_13 = ((~(((arr_4 [i_3] [i_2] [i_1]) / var_1))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_14 = 16383;
        arr_15 [i_4] = ((((((arr_13 [i_4] [i_4]) ? (arr_12 [i_4]) : (arr_12 [i_4])))) ? ((((arr_14 [i_4]) ? (arr_13 [i_4] [i_4]) : 20203))) : ((35149 ? 1504842236 : 16))));
    }
    var_15 = (127 && 20209);

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (max((((var_4 == 14547914501330512250) >= (arr_16 [6] [i_5]))), (min(1, (((arr_18 [i_5]) && (arr_13 [i_5] [i_5])))))));
        var_16 = (min(((1 ? ((var_4 ? (arr_17 [i_5]) : var_7)) : 1)), (arr_13 [6] [i_5])));
        var_17 = (max(22988, 1));
        var_18 = var_7;
        arr_20 [i_5] = (((((arr_13 [1] [i_5]) || (((~(arr_13 [18] [i_5])))))) ? (((arr_18 [i_5]) ? ((((arr_12 [i_5]) == 20209))) : var_8)) : (2061356868 | var_8)));
    }
    #pragma endscop
}
