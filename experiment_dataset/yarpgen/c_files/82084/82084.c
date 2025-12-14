/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? (76 | 38) : ((((var_13 ? -1630305146 : var_15)) | (~43)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] |= -1889215958;
                    arr_11 [11] [i_1] [i_2] = (((((arr_6 [i_1 - 2]) % (arr_6 [i_1 - 2]))) < -28));
                    var_17 = ((!(((var_12 - (arr_3 [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
