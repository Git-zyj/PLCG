/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((!(!var_17))) ? var_9 : (-var_9 & var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_5 [i_2 + 2] [i_2 + 3] [i_2 + 1])));
                    var_20 = ((((((max((arr_4 [i_1] [8] [i_0] [i_1]), (arr_4 [i_1] [15] [15] [i_1])))) ? ((min((arr_4 [i_0] [i_0] [i_0] [i_1]), var_7))) : ((min(var_2, var_3))))) * (((((((arr_5 [i_2 + 2] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_2]))) + 2147483647)) >> (var_16 - 26679)))));
                }
            }
        }
    }
    var_21 = 28478;

    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_22 = (~((-28478 ? -874384388 : (arr_6 [i_3 + 1]))));
        var_23 = (((((arr_7 [i_3]) && var_5)) ? (((arr_6 [i_3]) % (arr_2 [i_3] [i_3] [i_3]))) : (((-874384388 ? (-32767 - 1) : (arr_4 [i_3 - 2] [16] [i_3 + 1] [i_3]))))));
        arr_8 [i_3] = (~((var_12 ? var_6 : (arr_6 [i_3 - 1]))));
        arr_9 [i_3 - 1] [i_3] |= ((-(arr_6 [i_3 - 2])));
        var_24 = var_1;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_25 += (max(((((arr_13 [i_4] [i_5] [i_5]) >= (arr_15 [i_4] [i_4] [i_5])))), (((0 * 29297) << (65277 - 65263)))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((min(((((!(arr_1 [i_4]))))), (arr_2 [i_5] [i_6] [15]))))));
                            var_27 &= ((max(((((arr_6 [i_6 - 3]) || var_15))), (arr_3 [i_7]))));
                        }
                    }
                }
                var_28 = (arr_3 [i_4]);
            }
        }
    }
    #pragma endscop
}
