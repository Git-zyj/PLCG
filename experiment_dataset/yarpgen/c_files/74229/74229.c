/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_15;
    var_20 = 14416;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_21 = (max((max(14440, 14416)), (min(51120, 4540))));
        var_22 = (max((max(6976719196630130142, var_6)), 51133));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_23 = (min(var_8, ((min(-25651, var_14)))));
                        arr_11 [i_0 - 1] [i_0] [i_0] [i_3] [i_0] = 13564128270007187967;
                        var_24 = max(11685, (max(-1579932092465645704, var_3)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = -1224251815650829848;
        arr_17 [i_4] [i_4] = var_16;
        arr_18 [i_4] = var_15;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_25 |= (max(51120, var_16));
        arr_21 [i_5] = 666940018;
        var_26 ^= (min((max(var_12, var_14)), var_4));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] = (max((max(var_5, 3402164757860837266)), ((max(51120, 19368)))));
        var_27 = (min((min(-1579932092465645704, -5291044680309938955)), ((min(var_4, 93)))));
    }
    #pragma endscop
}
