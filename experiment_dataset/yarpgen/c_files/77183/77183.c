/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 = ((((var_11 ? (arr_1 [i_0 - 2] [i_0 - 2]) : var_6))) ? (arr_2 [i_0]) : (arr_2 [i_0]));
        var_15 = ((var_3 + 2147483647) << (1 - 1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, (((55 ? ((67 ? 1101709181204408965 : -33)) : (!1))))));
                        var_17 = (var_5 + var_8);
                        var_18 &= var_2;
                        var_19 = (max(var_19, var_1));
                    }
                }
            }
        }
    }
    var_20 += var_10;
    #pragma endscop
}
