/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));
    var_13 -= (((((((var_5 ? var_1 : var_1))) ? (max(var_9, var_0)) : var_1)) + (~var_11)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((((((-477882250 ? 600233787858902989 : 2520968034)) < (~var_2))) ? (!var_11) : (max(-15, 1773999244))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((((max((((var_6 ? var_2 : var_1))), (max(18446744073709551599, 1332011056))))) ? ((var_9 ? var_8 : var_2)) : ((((min(var_3, var_2)))))));
                }
            }
        }
        var_14 = (((((var_1 / var_3) || (var_10 ^ var_6))) ? var_0 : ((var_4 ? var_11 : ((var_1 ? var_5 : var_0))))));
        var_15 += ((max(var_4, var_6)));
        arr_10 [i_0] = ((((max(((var_5 ? var_9 : var_6)), var_9))) ? (var_1 || var_7) : ((var_11 << (var_6 - 1892608380)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((var_4 - (max(var_9, var_2))));
        var_16 = var_7;
    }
    #pragma endscop
}
