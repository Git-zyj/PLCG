/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [0] [i_1] [i_2] &= (((~(arr_6 [i_2 + 3] [i_2] [i_1]))));
                    var_12 = (max(var_12, (~383998308)));
                    arr_8 [i_0] [i_1] &= arr_2 [i_0] [i_1] [i_2];

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 &= var_11;
                        var_14 &= ((-(arr_5 [i_3])));
                    }
                    var_15 = (max(var_15, (((-(((((-1379002445 ? -1121046437 : -1121046434))) ? var_11 : var_2)))))));
                }
            }
        }
    }
    var_16 &= (((((-6778057031306845612 ? -1121046424 : -1121046424))) >= (((((-1121046437 ? var_2 : 2090812203))) ? (max(var_9, var_1)) : (min(166449696, 7844296102215332706))))));
    var_17 &= var_11;
    #pragma endscop
}
