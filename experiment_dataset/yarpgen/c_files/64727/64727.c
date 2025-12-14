/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 -= (108 || 14106523525140969431);
        var_14 = (max(var_14, (((((-30780 ? 144605656 : -30780)) != 3542600352361221818)))));
        var_15 = ((!((max(-1880106644247730534, 95)))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_16 = ((((148 < -78) <= 108)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_13 [i_2] [i_2] = (((((2486271261 > 105) ? 64 : (3542600352361221818 - -26200))) >= 517480285));
                        var_17 = (max(var_17, -52));
                        var_18 = min((17233796454898839295 == 105), (16467952640903103879 * 14075135430337411698));
                        var_19 *= 8263161635894619251;
                    }
                }
            }
        }
    }
    var_20 *= ((13887399966456139910 * (((var_6 > (2172400438 * -144774540))))));
    var_21 = (max(var_10, (0 < 27)));
    #pragma endscop
}
