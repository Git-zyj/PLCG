/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] = min(-12640, -1);
                var_19 = ((((max(-7194881887387418084, (((-1 ? 96 : (-2147483647 - 1))))))) ? (((255 ? 12639 : var_2))) : (((((-(arr_4 [i_0] [i_1])))) ? 1 : (max(584789554312288667, -758469195))))));
            }
        }
    }
    var_20 = ((var_6 ? ((var_18 ? var_6 : var_16)) : (((!var_0) ? ((var_10 ? var_7 : var_18)) : var_16))));
    #pragma endscop
}
