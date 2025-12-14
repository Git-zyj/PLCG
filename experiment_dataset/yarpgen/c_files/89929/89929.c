/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_10 |= ((((!(1 - var_6))) ? 0 : (min(var_4, (min(-3999923699363615380, var_7))))));
            arr_5 [i_1] [i_1] [i_1] = (~(max(((7 ? -122440034347419126 : 249)), 40)));
            var_11 = (((-959129571 | var_2) ? -var_3 : (((((arr_1 [i_0] [i_0]) < var_1))))));
            var_12 = var_9;
        }
        var_13 &= var_9;
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((((var_7 ? (((arr_6 [i_2]) ? 32 : 251)) : ((32 ? var_9 : var_7)))) | -19));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_14 = (max(var_14, ((min(((max(19, (-1706586343 | var_4)))), 224)))));
                        arr_15 [i_5] [i_4] [19] [i_2] = ((((-972358160 | (arr_10 [i_3 - 1] [i_3 - 1]))) - (arr_14 [i_4])));
                        arr_16 [i_5] [i_4] [i_2] [i_2] = (((var_5 ? -3 : var_4)) <= (10 <= 238));
                    }
                }
            }
        }
        arr_17 [i_2] = ((((max((min(186, (arr_10 [i_2] [i_2]))), 7073894209846706231))) <= ((max((arr_13 [i_2] [i_2] [i_2] [i_2]), var_4)))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] [i_6] = ((var_0 ? var_3 : var_1));
        var_15 = ((var_4 ? ((((min(972358134, (arr_6 [i_6])))) ? var_3 : (((var_7 ? 127 : (arr_9 [i_6] [i_6])))))) : (((((96 < -254969286) < -1706586328))))));
    }
    #pragma endscop
}
