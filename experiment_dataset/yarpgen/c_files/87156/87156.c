/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_4 ? (~var_9) : ((var_4 ? var_15 : 57))))) ? ((var_4 ? var_11 : (~-1761))) : ((var_5 ? (~-15) : ((var_12 ? var_7 : var_1))))));
    var_17 = (max(var_17, (((var_11 / (((-15 & 24745) ? (var_11 != -749001437240839625) : (max(var_14, var_6)))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = (~(min((~40791), (((arr_9 [i_0] [i_0] [i_2]) / (arr_7 [i_0]))))));
                        var_18 = (min(var_18, 1761));
                        arr_11 [i_0] [i_0] = 63975;
                    }
                }
            }
        }
        var_19 *= ((((((arr_2 [i_0]) ^ 4076))) ? (max((arr_7 [0]), (((47703 >> (((arr_4 [i_0] [i_0] [i_0]) + 4157994802069355748))))))) : ((((20 > (max(1753, (arr_7 [8])))))))));
        var_20 = (min((((arr_9 [i_0] [i_0] [i_0]) * (arr_2 [i_0]))), (((-1759 ? (arr_9 [i_0] [i_0] [i_0]) : var_3)))));
    }
    var_21 += var_14;
    #pragma endscop
}
