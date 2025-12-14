/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (-((((min(127, 154))) * 18)));
                var_20 = 18;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (((((247 <= 22) == -25)) ? (min((2338888531 * 225), 231)) : -16211));
                                var_22 = 0;
                                var_23 = (-26224 * (min((0 | 238), 19)));
                                var_24 = (-237 * 4294967280);
                                var_25 = ((-(~20)));
                            }
                        }
                    }
                }
                var_26 *= (((-1 * 33) * (~60)));
                var_27 = (28 * 48);
            }
        }
    }
    var_28 = (min(var_28, (max((((min(128, 12)))), (min((min(4294967280, 18446744073709551615)), ((max(4294967263, -26224)))))))));
    var_29 = (+-14693292417729356644);
    #pragma endscop
}
