/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_2, 4611683819404132352);
    var_21 = var_16;
    var_22 = var_17;
    var_23 = var_17;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_1 + 2] [i_2] = ((9223372036854775807 ? (((var_17 * (arr_4 [i_0] [i_0] [i_2 - 2])))) : ((var_19 ? (arr_3 [i_1 - 2] [i_1 + 2]) : (arr_7 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 2])))));
                    arr_9 [i_0] [i_0] = ((((min(var_14, (arr_6 [i_1] [i_2 + 1] [i_2] [i_2]))) ^ (((~(arr_4 [i_0] [i_1] [i_2 - 2])))))));
                }
            }
        }
        var_24 = ((((!(((arr_2 [i_0] [i_0]) <= var_15)))) ? var_1 : (min((arr_1 [i_0]), (((9223372036854775807 ? var_8 : var_0)))))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_25 = (min(var_1, ((((!(arr_7 [i_0] [i_3] [i_4] [i_5])))))));
                        var_26 = (max((arr_0 [i_3]), var_12));
                        var_27 = (~(9223372036854775807 & 9223372036854775807));
                        var_28 = var_8;
                        var_29 = (max(var_29, (arr_3 [i_0] [i_0])));
                    }
                }
            }
            var_30 = (max(((((((var_14 ? var_17 : 9223372036854775807))) ? (!var_19) : (((!(-9223372036854775807 - 1))))))), (min(9223372036854775807, var_9))));
        }
        var_31 = ((max((min(9223372036854775807, -9223372036854775807)), (arr_4 [0] [i_0] [i_0]))));
    }
    #pragma endscop
}
