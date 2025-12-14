/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (((-((var_3 ? var_9 : var_12)))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (min(var_17, var_6));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_0] [i_2] [i_2] = ((-var_2 ? var_4 : var_15));
                var_18 |= (((((var_13 ? var_15 : var_7))) ? (~var_12) : ((var_13 ? var_15 : var_14))));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_11 [i_1] = ((((min(var_3, var_4))) ? ((max(var_10, var_10))) : ((var_10 ? var_8 : var_13))));
                var_19 = ((-var_6 ? ((var_12 ? ((max(23127, 1))) : (var_9 * var_5))) : ((((min(var_6, var_7))) ? ((max(var_4, var_6))) : (max(var_7, var_9))))));
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_20 = (((!var_3) ? var_11 : (min(2758754754, (-9223372036854775807 - 1)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [i_5] = (max(9223372036854775807, 9223372036854775807));
                        arr_23 [i_0] [i_4] [i_4] [i_5] = (min((max(((1 ? 6200751313631025912 : var_0)), (-9223372036854775807 - 1))), var_10));
                    }
                }
            }
            arr_24 [i_0] [i_4] [i_4] = max(1, 9223372036854775807);
        }
        arr_25 [i_0] |= ((!((((((var_13 ? var_4 : var_0))) ^ ((var_5 ? var_14 : var_4)))))));
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_21 = ((61985 | (((!((max(19692, 10994137250301857411))))))));
        arr_30 [i_7] = max((min((((-32767 - 1) ? 5936294834631587140 : (-32767 - 1))), (((var_15 ? var_10 : var_3))))), ((min((var_9 / var_3), var_14))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = (var_11 / var_9);
        arr_35 [i_8] [i_8] = (~var_5);
        arr_36 [i_8] = ((var_9 ? 9223372036854775786 : 1));
        arr_37 [i_8] [i_8] = ((var_13 ? var_5 : var_12));
    }
    var_22 = (min(var_22, ((min((min(var_12, ((var_11 ? var_11 : var_13)))), (((var_15 ? var_2 : var_11))))))));
    var_23 = (((((var_2 ? (((max(var_6, var_2)))) : var_15))) ? (max((max(var_7, var_14)), ((min(var_10, var_6))))) : ((((((-294 ? -28102 : 38159))) ? var_0 : ((max(var_3, var_5))))))));
    #pragma endscop
}
