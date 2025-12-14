/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 511;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_1] |= (arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0]);
                    arr_11 [i_2] [i_0 - 2] [i_1] [i_0 - 2] = 5444889801828525075;
                    arr_12 [i_1] = (arr_1 [i_0 + 4]);
                }
            }
        }
        arr_13 [i_0 - 2] [i_0] = ((-(arr_8 [i_0] [i_0] [i_0] [i_0 + 3])));
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_16 [i_3] = (arr_6 [i_3] [i_3]);
        arr_17 [i_3] = (~806869632);
        arr_18 [i_3] [i_3] = (min(0, var_9));
    }
    #pragma endscop
}
