/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 -= min((max((arr_5 [i_1]), (arr_4 [i_1] [i_1] [i_0]))), ((((-9049 ? -3837 : var_10)))));
                var_19 = (((((1 ? ((max(var_0, var_0))) : 1))) & (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((!(1 * var_12))))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = var_1;
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((var_10 & 1) ? (134217727 >> 1) : var_14)));
    var_22 = (1 ? ((var_17 ? var_1 : 1)) : (((var_8 ? 96 : 1))));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = (min(var_23, ((max((((-10429 ? -17662 : (1 + 1)))), (((-3061091374455666213 ^ 146) ? var_3 : 4160749562)))))));
        arr_17 [i_4] [i_4] = ((4160749568 ? (((~(arr_16 [i_4])))) : (((9223372036854775788 ? (~0) : ((3027 & (arr_14 [i_4]))))))));
        arr_18 [i_4] [i_4] = (((min((((var_4 ? -2 : 255))), (max(60261, var_14)))) < (((1 % (var_11 > 1))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_24 += (((arr_14 [i_5]) << (((arr_14 [i_5]) - 15251))));
        var_25 = ((1 ? 53 : 5258));
    }
    var_26 += (((((min(var_11, var_5)))) <= (((!(((7266410609112927607 ? var_0 : var_2))))))));
    #pragma endscop
}
