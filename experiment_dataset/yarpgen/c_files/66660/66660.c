/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (min(4053135857, 215562179));
                    arr_7 [i_0] [i_0 - 3] [i_1] [i_2] = (((((((max(var_2, 191))) ? (var_3 < -14820) : var_10))) ? (min((!var_14), (((arr_1 [i_0] [i_1]) | var_8)))) : (min(20239, ((var_14 ? (arr_5 [i_0 + 2] [i_0 - 4] [3] [11]) : (-32767 - 1)))))));
                    var_16 *= (((((299430464424654651 & (((min(0, var_8))))))) ? var_3 : var_5));
                }
            }
        }
    }
    var_17 = ((-(!var_7)));
    var_18 = ((-((max(var_7, var_8)))));
    var_19 = -85;
    #pragma endscop
}
