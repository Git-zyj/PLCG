/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (!-32767);
        arr_3 [i_0] = var_10;
    }
    var_15 = var_10;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((-((-(arr_10 [i_2] [1] [i_2] [i_2])))));
                    var_16 = var_3;
                    var_17 = ((-(((arr_10 [i_2] [i_3 - 1] [i_3 - 2] [i_3 - 1]) ? (arr_10 [i_2] [i_3] [i_3 - 1] [i_3 - 1]) : (arr_10 [i_2] [i_3 - 2] [i_3 - 2] [i_3 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
