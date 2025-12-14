/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((-(min(var_3, var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = var_16;
                            var_20 &= (((arr_0 [i_0]) ? (((arr_0 [i_2]) | (arr_0 [i_2]))) : ((~(arr_0 [i_2])))));
                        }
                    }
                }
                var_21 |= ((~(((!(arr_5 [i_0] [i_0] [i_1] [i_0]))))));
                var_22 += ((((-((var_11 ? var_8 : (arr_5 [i_0] [i_0] [i_0] [i_0])))))) ? (arr_4 [i_1] [i_1] [i_0]) : (((arr_10 [i_0] [i_0] [i_0] [i_1]) % (arr_0 [i_1]))));
                var_23 |= (((251 * var_9) / ((7175962130543553179 ? ((var_0 * (arr_2 [i_0] [i_0]))) : -var_4))));
                var_24 *= (arr_8 [i_0] [i_0] [i_1] [13] [1] [i_1]);
            }
        }
    }
    var_25 = (var_8 / 3551684922520619075);
    var_26 = (max(var_26, var_9));
    #pragma endscop
}
