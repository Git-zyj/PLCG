/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (min(((max(var_5, -var_10))), 13165486255976362477));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 *= ((var_8 ? var_11 : var_4));
                        arr_9 [i_0] [i_0] [10] [i_3] = 32645;
                    }
                }
            }
        }
    }
    var_21 = (((((((var_4 <= var_18) > (max(var_17, 5281257817733189138)))))) > (((((20 ? 1585667009385494713 : 1315697477))) ? (((var_12 ? 67 : 117))) : 13165486255976362477))));
    var_22 = var_0;
    var_23 = (max((max(1315697477, 1)), 20));
    var_24 -= (min(7021466374949180512, 32657));
    #pragma endscop
}
