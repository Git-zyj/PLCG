/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(((max(1, -2819))), (min(var_3, var_5)))) * (((var_3 >> (var_4 - 2792043717))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (max(-1054610065105546999, (max((max(var_9, var_7)), (var_8 % var_1)))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_1] [5] = (((((var_5 ? -var_2 : (!var_0)))) ? (((((var_8 ? var_5 : var_1)) != (((min(var_7, var_6))))))) : (!-var_9)));
                    var_12 = ((((max((((var_5 ? var_1 : var_9))), ((var_9 ? var_5 : var_3))))) ? ((max(((min(65535, -125))), ((var_8 << (var_1 - 3241448831)))))) : (~-8812358748422851857)));
                    var_13 -= (((((max(14122659905942151905, -8812358748422851844)) && ((min(var_8, var_5)))))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    var_14 = (min(var_14, ((((max(var_8, var_1))) && (((~(var_3 / var_3))))))));
                    var_15 = (max(var_15, (((((max(var_6, (32766 / 125)))) * (max(((var_1 ? var_9 : var_3)), -var_5)))))));
                    arr_11 [i_0] [i_1] [i_1] [i_3] = ((!(~579722119)));
                    var_16 = (((var_5 / var_0) > ((-(var_4 * var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
