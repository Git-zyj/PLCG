/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= (min(9223372036854775807, (((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]) >> (11258512667556549417 - 11258512667556549396)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] |= ((min(-693625730, var_15)));
                            var_20 = ((~(((arr_4 [i_0 + 1] [i_2 - 3] [i_2 - 2]) ? 3427403868038208156 : 3427403868038208159))));
                            var_21 = (min(301759962, (min((255 < -77), ((-73 ? 3427403868038208156 : var_10))))));
                            arr_9 [i_3] [1] [16] [i_3] = (max((max(var_14, 12680440238023727148)), ((((9223372036854775807 >= var_12) ? -119 : 1232445111)))));
                        }
                    }
                }
                arr_10 [i_0] = var_12;
            }
        }
    }
    var_22 = var_16;
    #pragma endscop
}
