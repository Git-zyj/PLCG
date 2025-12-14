/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 ^= (arr_0 [i_0]);
        var_21 = (max((min((arr_1 [i_0]), (~-6718926953724904966))), (--6718926953724904965)));
        arr_2 [i_0] = ((((max(((6718926953724904965 ? var_3 : -6718926953724904982)), ((min(-2147483641, 1)))))) ? (max((max(6718926953724904959, var_1)), 74)) : -1));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_22 = var_5;
                        var_23 = (max(((((arr_10 [i_1 - 1] [i_2] [i_2]) || -6718926953724904966))), -6718926953724904966));
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_24 = (max(var_24, ((min(((-6718926953724904984 ? var_18 : var_16)), ((-7392463465658892158 ? -32560 : -26133)))))));
        var_25 ^= var_17;
    }
    #pragma endscop
}
