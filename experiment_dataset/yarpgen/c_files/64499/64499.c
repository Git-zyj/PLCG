/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_0, var_15)))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 -= ((-((-114 + ((51551 ? (arr_1 [i_0]) : -115))))));
        arr_2 [16] = (((var_10 + var_5) - 106));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = var_0;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = var_1;
                        var_21 = (((min(106, 0)) << (((~16) & 0))));
                        var_22 = (max(var_22, ((max(var_3, (max(var_3, (max(var_15, 4294967289)))))))));
                    }
                }
            }
            var_23 *= (5441045532048960200 > 106);
            var_24 = (((((max(4294967292, var_15)) << (var_15 - 1389847813))) / (~var_8)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_25 -= (min((((max(13005698541660591436, 5441045532048960200)) * var_6)), ((((!84) | -51)))));
                        var_26 = 0;
                    }
                }
            }
        }
        var_27 = 84;
    }
    #pragma endscop
}
