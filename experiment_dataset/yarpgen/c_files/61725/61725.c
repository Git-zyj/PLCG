/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_18 = ((var_14 ? 0 : 9723147005017036738));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = var_9;
            var_19 = 26;
            var_20 = (!2137349506);
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {
                    var_21 &= var_11;
                    var_22 = ((var_9 ? ((17 ? (arr_8 [i_4 - 3]) : (arr_8 [i_4 - 2]))) : ((max((-2147483647 - 1), 9987)))));
                    var_23 = (min((~-2048), (1 <= -5148751644210343078)));
                }
            }
        }
    }
    #pragma endscop
}
