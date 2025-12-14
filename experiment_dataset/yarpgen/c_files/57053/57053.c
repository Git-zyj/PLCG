/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((127 ? 10537 : 35331));
        var_14 = (min(var_14, (arr_0 [i_0])));
    }
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_16 = ((min((((!(arr_7 [i_1] [17] [i_1] [i_1])))), (arr_9 [i_3] [i_2] [i_1] [i_1]))));
                    arr_11 [i_3] [1] [i_2] [i_1] = (arr_3 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
