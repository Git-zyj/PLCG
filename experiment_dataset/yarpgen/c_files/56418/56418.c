/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(var_4, ((var_8 ? (((var_16 >> (var_4 - 7392)))) : (var_13 - var_17))))))));
    var_19 &= ((((((0 ? var_6 : var_2)))) ? var_13 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(((64466409 ? (arr_0 [i_0 - 2]) : 5)), ((min(-14, 1)))));
                var_21 = (min(var_21, (arr_5 [i_0 - 4] [i_0 - 3])));
                arr_7 [i_0] [i_0] = 65535;
                arr_8 [i_0 + 2] [i_0 - 1] [23] = -2;
            }
        }
    }
    var_22 = 45;
    #pragma endscop
}
