/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = -12024;
                    arr_9 [i_0] = ((~(arr_3 [i_0])));
                    arr_10 [i_0] [i_1] [i_2] = (arr_4 [i_0]);
                }
            }
        }
        var_14 = var_9;
        var_15 = (max(var_15, 20052));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_14 [i_3] &= -5474022337003845886;
        arr_15 [5] = (max(8388607, (min((arr_11 [i_3]), ((-8388588 + (arr_11 [i_3])))))));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        var_16 = (min(var_16, (~var_1)));
        var_17 = (max(var_17, ((((arr_18 [14]) ? (max(-8388608, 7663815686470351186)) : -3832851486970566893)))));
        arr_20 [i_4] &= var_0;
        var_18 &= ((166 ? var_6 : ((~((255 ? var_1 : 1077871050))))));
    }
    var_19 |= 166;
    var_20 ^= 46000;
    #pragma endscop
}
