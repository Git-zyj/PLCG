/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 -= -4088;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 = var_9;
                    var_15 = 14241843132252222278;
                }
                arr_8 [i_0] |= (max(((-0 ? 12310829712043352838 : var_10)), (((-2320853395639076217 ? ((var_9 ? 65024 : var_12)) : 0)))));
                var_16 = max(((max(7967, 56455))), ((-56455 ? -1 : (~61447))));
                var_17 = -var_11;
            }
        }
    }
    var_18 = (--0);
    var_19 = (~26725);
    #pragma endscop
}
