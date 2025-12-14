/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = (max(534773760, 0));
    var_22 = ((1 ? ((((min(var_14, var_14))) ? var_11 : var_9)) : (248 > 534773760)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = arr_4 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_3 + 2] [i_1] [i_1] [i_0] = (arr_5 [i_1] [2] [i_1]);
                            var_24 = ((((((((var_7 + (arr_2 [19] [i_1])))) ? (32256 / 2147483647) : var_8))) ? var_17 : (min((arr_0 [i_1 + 2] [i_2 + 1]), 235))));
                            arr_11 [i_0] [i_1] [i_1] [i_3 + 1] = (~var_3);
                        }
                    }
                }
                arr_12 [i_1] = (min(1018385248575904730, 10));
                var_25 = var_8;
                var_26 ^= var_10;
            }
        }
    }
    #pragma endscop
}
