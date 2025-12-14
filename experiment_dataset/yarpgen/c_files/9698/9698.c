/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (max(63945, var_16));
        arr_4 [i_0] = (((((~(var_6 & 1)))) ^ ((var_10 ? (max((arr_1 [i_0 - 1] [i_0]), var_16)) : (arr_1 [i_0] [4])))));
        arr_5 [i_0] = ((((max(6291, -6234099446804588310))) ? ((-(min((-2147483647 - 1), var_13)))) : (~6275)));
        arr_6 [14] &= (min(var_6, (~1)));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = var_13;
        arr_12 [i_1] [i_1] = (min(((min(-2038784668, (-9223372036854775807 - 1)))), (arr_8 [i_1])));
        var_18 -= ((-6234099446804588283 ? 6234099446804588255 : 1));
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_17 [i_2] = (((-9223372036854775807 - 1) ? 1 : 47));
        arr_18 [i_2 + 1] = -6234099446804588310;
        arr_19 [i_2] [9] = (!15275130562743957861);
    }
    var_19 = ((((((((var_16 ? var_0 : 159930577))) & ((var_3 ? var_1 : 3311901353594416504))))) ? ((((((-5804 ? 106 : 0))) ? ((var_1 ? var_16 : 6291)) : ((min(var_3, var_10)))))) : ((((((((var_1 ? (-9223372036854775807 - 1) : var_3)) + 9223372036854775807)) + 9223372036854775807)) >> var_3))));
    var_20 = (min(var_2, (min(var_7, (((127 ? -69 : 9)))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_33 [i_7] [i_4] [i_5] [i_4] [11] = ((((max(var_0, 1)))));
                                arr_34 [i_7] [i_4] [i_4] [5] = (max((min(((min(var_6, 0))), (2792311378 | 2038784667))), var_16));
                            }
                        }
                    }
                    arr_35 [20] [i_4] [i_4] = (((arr_20 [i_5]) ? ((~(((arr_30 [i_5] [i_4] [i_4] [i_4] [i_4] [i_3]) ? var_5 : 206)))) : (min(-2038784668, 1))));
                }
            }
        }
    }
    #pragma endscop
}
