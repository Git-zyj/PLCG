/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] = ((min(((var_11 ? var_3 : (arr_3 [i_0] [i_1] [i_0]))), (((var_15 != (arr_4 [i_0] [i_0])))))));
                var_19 = ((((~var_3) ? (max(0, -23422)) : ((var_12 ? 4507340962353437291 : var_16)))));
                var_20 = ((((arr_1 [i_1] [i_0]) + (((arr_3 [i_0] [i_1] [i_1]) ? var_12 : var_11)))));
            }
        }
    }
    var_21 = (max(var_21, (((528482304 ? (-127 - 1) : 12965)))));
    #pragma endscop
}
