/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 576460752303421440;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = 0;
                    var_12 = (min(26352, (1766615604 & 0)));
                    var_13 = ((!((min(var_7, -19062)))));
                    var_14 -= (((((var_6 ? (max(-3142359505903039, 0)) : ((min(1766615619, 0)))))) ? ((98 / (max(-1766615608, var_3)))) : (~216)));
                }
            }
        }
        arr_8 [i_0] = 1766615622;
        var_15 = (((max(1766615622, 2395708470)) << (((max(4229963464755755418, 4)) - 4229963464755755409))));
    }
    var_16 = 10884168499611956099;
    #pragma endscop
}
