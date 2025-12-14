/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 ^= (((max(var_2, var_2))));
                var_12 |= (max((max(3105846842, 156)), 3105846842));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_6 [i_2] = (max((~198), (~var_3)));
        arr_7 [i_2] [i_2] = (max((max(3105846842, 127)), (~53688)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] = (max(var_5, ((var_1 ? (max(1189120453, var_1)) : 227))));
                        var_13 -= (max((var_7 / 11), ((max(67, (~3105846835))))));
                        var_14 = max(((max(13015, -60))), ((-((-16992213583774194 ? 0 : var_4)))));
                        var_15 = (~var_10);
                        var_16 = (max(((-1238487000961158835 ? var_8 : ((var_4 ? var_10 : 19591)))), ((630412692667232456 ? ((max(103, var_1))) : var_5))));
                    }
                }
            }
        }
        arr_17 [i_2] [i_2] = -1189120453;
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_17 |= (max(((max((max(var_9, var_3)), var_0))), (((var_5 ? var_6 : 6)))));
        var_18 = (max(var_8, (((~var_10) ? 3758631501 : (((~(-2147483647 - 1))))))));
    }
    var_19 = var_4;
    #pragma endscop
}
