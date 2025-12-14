/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 ^= (((((65521 ? 25409 : 9999244627604426812))) ? ((var_5 ? (var_3 / var_9) : (~var_9))) : var_5));
                            var_21 = ((((((((2939189669 ? 14 : 65521))) ? ((var_15 ? var_14 : var_2)) : (var_18 && var_1)))) ? (133 > 5869503154743764625) : ((var_18 ? -var_16 : var_8))));
                            arr_8 [18] [i_1] [i_2] [i_1] = var_12;
                            var_22 = (max(var_22, var_19));
                        }
                    }
                }
                var_23 = (max(var_23, var_19));
                var_24 = (max(var_24, (((((var_3 ? ((var_18 ? var_4 : var_11)) : (var_16 + var_12)))) ? ((((var_2 + var_2) ? -var_9 : (var_17 + var_8)))) : (((((var_8 ? var_12 : var_10))) ? var_19 : var_8))))));
            }
        }
    }
    var_25 *= (((((0 || 133) ^ ((111 ? -4671899316802257198 : 0)))) == (1 / var_18)));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                arr_15 [i_5] [i_5] = ((((((var_7 < var_10) % var_11))) || ((((var_1 ^ var_19) ? ((var_7 ? var_18 : var_14)) : var_3)))));
                arr_16 [i_5] [i_4] = ((((((var_14 ? var_9 : var_7)) ? (var_12 * var_13) : var_13))));
            }
        }
    }
    #pragma endscop
}
