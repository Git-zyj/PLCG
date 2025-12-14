/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [19] = ((((min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 2])))) & (min(((2072 ? var_4 : var_9)), var_12))));
        arr_4 [i_0 + 1] [i_0 + 1] = -6222558293656200016;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_14 [i_0 + 3] [12] [i_2] [1] = (min(((1 ? (1024169352 / 77) : (min((arr_0 [i_2]), var_10)))), ((min(31, (min(1024169363, var_0)))))));
                        arr_15 [i_0] [i_0] [i_0] [3] [14] [i_0] = (arr_5 [14]);
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, var_4));
    #pragma endscop
}
