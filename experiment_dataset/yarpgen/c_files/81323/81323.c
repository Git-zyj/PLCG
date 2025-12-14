/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_2);

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_18 = (max((var_7 != 3255554774), -184));
        arr_4 [i_0] = var_15;
        var_19 = ((max(-72, 162)));
        var_20 = (max((((184 ? -1008145489791696719 : (~var_7)))), (var_4 % -23687)));
        var_21 = -64;
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_22 = (((~(100 & var_0))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                {
                    arr_13 [i_1] = ((max(-72, 186)));
                    var_23 = ((max(6222450924238994225, ((max(3873, 191))))));
                }
            }
        }
        var_24 = (max((max(185, 8205049918321739917)), (155 + 1)));
        arr_14 [i_1] = ((((67 >> (221 - 219)))) ? (max(-1551224722, ((var_14 ? 6393700565833410360 : 63704)))) : ((min(var_1, 70))));
    }
    #pragma endscop
}
