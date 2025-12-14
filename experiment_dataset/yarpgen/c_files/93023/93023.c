/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = ((var_7 & ((~(arr_4 [i_0])))));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_13 = (((((~(arr_9 [i_0] [i_0] [i_3 - 2] [i_3])))) ? (arr_11 [i_0] [i_1] [i_3 - 2] [10]) : ((min((arr_9 [i_3 + 1] [i_1] [i_3 - 1] [i_0]), var_11)))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = (arr_2 [i_3] [8]);
                        arr_13 [17] [i_2] [i_1] [i_0] [i_0] = (((!1) >> (4294967295 - 4294967268)));
                    }
                    var_14 *= ((~(arr_10 [i_0] [14] [i_2] [i_2])));
                }
            }
        }
    }
    var_15 = var_0;
    var_16 -= (~var_5);
    #pragma endscop
}
