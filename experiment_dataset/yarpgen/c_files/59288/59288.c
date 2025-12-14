/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = ((+(((arr_2 [i_0 - 1] [i_0 - 1]) % 127))));
        var_15 *= 22246;
        var_16 = (((arr_2 [i_0 + 1] [i_0 + 1]) ? ((var_5 ? 4294967270 : -811761116)) : (arr_1 [i_0])));
    }
    var_17 = (max(var_17, ((min(((max(var_8, var_13))), var_1)))));
    var_18 = 22246;
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_19 &= ((2 / -3132979828595331722) ? (arr_5 [i_1]) : var_12);
                arr_8 [i_1] [i_2] [6] = ((((arr_6 [i_1 + 2] [i_1 - 1]) ? 43284 : var_0)));
                var_20 = (max(var_20, (arr_5 [i_1])));
                var_21 = var_3;
            }
        }
    }
    #pragma endscop
}
