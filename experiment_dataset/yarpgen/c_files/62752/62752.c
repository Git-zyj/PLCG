/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_8, (max(31138, var_15)))) != (((((40 != -43) || 255))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 += -2109131068;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0 + 3] = -9223372036854775788;
                    var_19 = var_8;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 ^= (103 != -1453775876);
                        var_21 = var_7;
                    }
                    arr_10 [i_1] [i_2] = ((var_12 & (arr_9 [i_0])));
                    arr_11 [i_0 + 3] [i_0 + 3] = (-2147483647 - 1);
                }
            }
        }
    }
    #pragma endscop
}
