/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0 - 1] [i_3] [i_2] [i_2] = ((~(arr_9 [i_0 - 1] [i_3] [i_3 - 1])));
                        var_17 = (((~var_14) & (min(((min(var_2, var_6))), ((~(arr_4 [i_1] [i_1] [i_2])))))));
                        arr_11 [i_3] [i_2] [i_1] [i_1] [i_3] = ((~(var_11 & var_4)));
                        arr_12 [i_3] [i_1] [i_2] [i_3] = (((arr_1 [i_1 - 1] [i_1 + 1]) ? ((~(arr_1 [i_1 - 1] [i_1]))) : (arr_1 [i_1 - 1] [i_1])));
                    }
                }
            }
        }
        var_18 = ((((~(arr_9 [i_0 - 1] [0] [i_0]))) << (((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]) - 36992))));
    }
    var_19 |= var_0;
    #pragma endscop
}
