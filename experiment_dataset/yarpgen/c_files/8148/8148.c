/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max((((arr_1 [i_0] [5]) ? (max(var_12, 137)) : var_5)), (~var_7))))));
                    var_17 ^= var_0;
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        var_18 = (min(var_18, 143));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_19 = 99;
            arr_16 [i_3] [i_4] = (3543730821 + var_6);
        }
        arr_17 [i_3] = (max(228, -10));
        arr_18 [i_3] = (min((((4 ? var_7 : 982251079133393283))), ((((3189565682089006188 ? 64 : 132))))));
    }
    var_20 = 15257178391620545428;
    var_21 = (((((var_10 ? ((var_4 ? var_1 : 2481711894601277929)) : ((min(var_7, 8670090112370085511)))))) ? (max(-9216397529384403571, (min(141, 2896430278903790127)))) : var_3));
    #pragma endscop
}
