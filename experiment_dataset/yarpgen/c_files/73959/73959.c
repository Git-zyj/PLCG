/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(1073741823, var_15)) & (~var_18)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((3221225473 ? 1073741824 : ((26708497 ? 1073741818 : 3245220146))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_21 ^= ((-(((~997869084) ? 3221225477 : 29360128))));
                            var_22 = (min(var_22, ((~(!1080923564)))));
                            var_23 |= (-(((57344 ? -128 : 3221225462))));
                        }
                    }
                }
            }
        }
    }
    var_24 ^= (26708492 ? ((3280130154 ? ((var_17 ? var_9 : 1195228801)) : var_8)) : (((3221225443 ? var_16 : var_13))));
    var_25 = ((((((((131008 ? var_1 : var_2))) ? (!2147483642) : var_17))) ? var_7 : 859115466));
    #pragma endscop
}
