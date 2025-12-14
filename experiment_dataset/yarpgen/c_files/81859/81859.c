/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((((((var_7 ? var_1 : 4098276242))) ? (((4098276242 ? var_10 : var_11))) : (196691050 | var_6))) | var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((var_3 ^ (((arr_0 [i_0]) ^ (var_6 * var_1)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((((!var_0) / (-1551815131 / var_7)))) / (((arr_3 [i_0 + 1] [i_1 - 1]) ? (4098276241 * var_7) : (((arr_2 [i_0] [i_3 + 1]) % var_12)))))))));
                            var_16 = (max(var_16, (((~((-(arr_7 [i_0 + 1] [i_1] [i_2 + 1] [i_3 + 1] [i_2 + 1]))))))));
                        }
                    }
                }
                arr_9 [i_0] [i_0] = var_9;
                var_17 = (min(var_17, (((!((((var_5 ? var_2 : 4098276264)) >= (((~(arr_5 [i_1] [i_1] [i_1 - 1] [i_0 + 2])))))))))));
            }
        }
    }
    #pragma endscop
}
