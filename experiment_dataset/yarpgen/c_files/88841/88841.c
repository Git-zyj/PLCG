/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((1 ? var_4 : (-93 - 1222137957175638776)))) ? ((min(var_12, var_10))) : (((-1222137957175638776 ? var_0 : var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (1222137957175638776 << 1);
                var_17 = (min((arr_1 [i_0] [i_0]), (~-1222137957175638767)));
                var_18 = (max((arr_1 [i_0] [i_0]), (max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] = ((((((arr_7 [1] [i_1] [i_2] [i_3]) ? (arr_5 [i_1] [i_1] [i_2]) : var_0))) ? var_4 : (min(1222137957175638775, 1222137957175638752))));
                            var_19 = (((((!(arr_10 [i_0] [i_1] [i_2] [i_3]))))) | (max((1 / 63666), (min(-1222137957175638776, -3327243276620191806)))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_0] = (((~(var_8 % -213422546462233496))));
            }
        }
    }
    #pragma endscop
}
