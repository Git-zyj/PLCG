/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((16383 ? var_8 : ((44 ? 0 : 56163))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((min((((1 ? -16384 : (arr_2 [i_0])))), var_7))) ? -var_14 : 40733)))));
                var_17 = (max(var_17, (((!((max((arr_2 [i_1]), (!44)))))))));
                arr_5 [i_0 - 2] = ((!((!(arr_4 [i_0] [i_0 + 1] [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_18 = ((-((-((var_1 ? var_6 : (arr_6 [i_2])))))));
        var_19 = (arr_6 [i_2]);
    }
    var_20 = 6473;
    var_21 = var_12;
    #pragma endscop
}
