/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [15] [15] [i_1] = (max((((var_13 - var_1) > var_2)), (var_7 || var_0)));
                    arr_8 [i_0] [i_1] = var_9;
                }
            }
        }
    }
    var_16 = var_15;

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_17 ^= (max((var_4 - var_15), (var_15 * var_4)));
        var_18 &= (((var_4 <= var_11) << (((max(var_15, var_13)) - 4289276870))));
        arr_12 [1] = var_15;
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        arr_16 [1] [7] &= (max((var_11 || var_2), (var_2 && var_15)));
        var_19 = (var_11 > var_15);
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        var_20 = (((var_12 ^ var_3) >> (((21539 % 6908) - 813))));
        var_21 = (((((var_13 || var_5) << (var_3 - 4051942474))) << (var_11 % var_11)));
    }
    #pragma endscop
}
