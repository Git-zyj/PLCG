/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_18 = (min((((max(var_14, var_15)))), (arr_3 [i_0])));
                    var_19 = -94;
                    var_20 += (((((9999559859918957665 ? var_0 : var_4))) ? ((max(771, var_6))) : (((-771 / (68 - var_16))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_21 = 323854642;
                    var_22 = (((((~(arr_9 [i_0 - 3] [i_0 - 3] [i_0 - 3])))) ? 2618408602 : (arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_23 = ((var_4 ? (arr_5 [i_4] [i_0] [i_1]) : (arr_5 [i_0 + 1] [i_0] [i_0])));
                    var_24 *= ((1 / (arr_8 [i_0 - 2])));
                }
                var_25 = ((((var_16 && (arr_8 [i_0 - 2]))) || (((var_9 ? var_10 : (arr_8 [i_0 - 2]))))));
            }
        }
    }
    var_26 = ((((var_9 ? (var_10 / var_7) : ((var_10 ? var_6 : 3971112634)))) % var_13));
    #pragma endscop
}
