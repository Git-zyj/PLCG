/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = 128;
        var_16 -= 38;
        var_17 = (min((~-6629943737236802527), 246));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_8 [i_1] [9] = (min(((min(-8950647351627012418, 5002574253299148100))), ((max((min(15, 1620985516530341039)), -11056)))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, (((!((max((~9223372036854775807), 5))))))));
                    arr_17 [14] [i_3] = (max((max(9, -2)), ((min((~112), ((max(1, 1))))))));
                }
            }
        }
        arr_18 [i_1] |= 2561929421223590083;
    }
    var_19 = (((max(31565, -25494))));
    #pragma endscop
}
