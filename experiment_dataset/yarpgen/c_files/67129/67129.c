/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 + 2] [i_1] = (arr_1 [i_1]);
                var_17 = (!4095);
                arr_5 [0] [0] = (((((!(arr_0 [i_0 - 3] [i_1])))) * (arr_3 [i_1])));
            }
        }
    }
    var_18 = var_9;
    var_19 = (((-120 ? 63 : (var_12 / -59))));
    var_20 = ((-((var_10 ? (~10) : var_9))));
    var_21 = 56;
    #pragma endscop
}
