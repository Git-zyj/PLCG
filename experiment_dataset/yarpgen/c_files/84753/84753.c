/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((((var_4 <= (max(var_6, var_13)))) ? (((229226967 % 229226957) - var_12)) : var_2));
    var_16 = (((((max(var_13, var_13))) ? ((var_4 ? 1619366592 : var_3)) : var_1)));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 = ((max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 3]))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_18 = (min(var_18, (arr_3 [4] [i_1 + 4])));
            var_19 = ((((arr_3 [i_0 - 2] [i_0]) ? var_7 : 109)));
            var_20 = var_12;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (arr_2 [i_1 + 4] [i_0 + 3]);
                        var_22 = (((arr_6 [i_0 + 1] [i_1]) - var_9));
                    }
                }
            }
        }
        var_23 = ((((!(arr_2 [i_0] [i_0])))) * (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 + 1]))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_24 = ((((((arr_8 [i_4 + 1]) >> (var_1 + 18987)))) ? (max((arr_8 [i_4 - 1]), (arr_8 [i_4 + 2]))) : (min((arr_8 [i_4]), (arr_8 [i_4 + 1])))));
        var_25 = (arr_8 [9]);
    }
    #pragma endscop
}
