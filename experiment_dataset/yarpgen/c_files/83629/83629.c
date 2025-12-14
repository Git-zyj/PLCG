/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_6 ? -1928484486 : var_15)) - var_3)) + -1928484486));
    var_17 *= var_5;
    var_18 -= var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0] [1]);
        var_20 |= (arr_0 [i_0]);
        arr_2 [i_0] |= ((~(max(-1928484500, var_2))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_3] [i_2] [i_3] [i_1 - 1] = (((!-1928484486) & -1358818444));
                        arr_11 [8] [i_3] [i_0] [i_0] [i_0] [1] = (var_6 - var_6);
                        var_21 &= (!(!var_10));
                    }
                }
            }
            var_22 -= ((~((max(9223372036854775807, var_12)))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_23 = (min(-1928484484, (min((min(var_5, 1358818446)), -104))));
            arr_14 [i_4] = (arr_12 [i_0] [i_4]);
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 |= (arr_16 [6]);
        arr_17 [i_5] = (arr_16 [i_5]);
        var_25 += (max((((!(arr_16 [1])))), ((-(!-1358818444)))));
        var_26 |= arr_15 [i_5];
        var_27 = (min(var_27, ((min(var_13, ((((arr_16 [1]) ? (arr_15 [i_5]) : (arr_16 [1])))))))));
    }
    #pragma endscop
}
