/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = -1608891542;
        var_20 ^= ((-((18959 + (arr_0 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                {
                    var_21 = ((+(max((arr_3 [i_3]), var_12))));
                    var_22 -= (arr_4 [i_1]);
                    arr_9 [i_1] [i_1] [i_3] = (arr_4 [i_2]);
                    arr_10 [i_1] = (min(61145, (arr_8 [i_1 - 4] [2] [i_3])));
                }
            }
        }
    }
    var_23 = var_11;
    var_24 = var_13;
    #pragma endscop
}
