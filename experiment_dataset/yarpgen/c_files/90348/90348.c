/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = var_16;
                    var_20 ^= (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    var_21 = (((752956948 / (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) + ((((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]) - (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))));
                    arr_7 [i_0] [i_0] = var_3;
                }
            }
        }
    }
    var_22 = (min(var_16, ((min(1, 1)))));
    var_23 = ((var_9 - ((max(13979, 729731037)))));
    #pragma endscop
}
