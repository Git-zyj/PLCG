/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (((arr_4 [8] [i_0]) ? (((arr_4 [i_0] [9]) - (((arr_5 [i_2] [i_1] [i_0 - 1] [i_0]) / (arr_5 [i_0] [i_0] [i_0] [i_0 + 2]))))) : 21));
                    var_16 = ((~((~(((arr_4 [i_2] [i_1]) >> (var_6 - 9909010149345824018)))))));
                }
            }
        }
        var_17 *= ((min(0, 71)));
        var_18 = 4441;
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_10 [i_3] &= (arr_9 [i_3]);
        arr_11 [i_3] [i_3] = var_9;
    }
    #pragma endscop
}
