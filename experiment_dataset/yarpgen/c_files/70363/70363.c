/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(1, 38);
    var_18 = (min(var_5, (((~(min(var_4, var_15)))))));
    var_19 -= (!var_11);
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 ^= 1;
                var_22 = (-var_0 / -var_13);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_8 [6] [i_1] [i_2] [i_0] = var_5;
                            var_23 = ((~(min(((var_10 ? var_7 : var_9)), var_5))));
                            arr_9 [i_0] [i_0] [8] [i_0] [i_0] = ((var_2 ? (min(4095, 0)) : var_1));
                            arr_10 [i_0] [i_0] [i_0] [1] = (min((min(var_0, ((var_15 ? var_4 : var_6)))), (var_10 * 1)));
                            var_24 = min(((min(1, 9726))), (min((((var_8 ? var_16 : var_15))), var_4)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
