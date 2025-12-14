/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_3 && var_17);
    var_20 = var_14;
    var_21 = 5032;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 1] = (((((1835311569653678457 ? var_14 : (max((arr_6 [i_0]), var_1))))) ? (!8343183467990820750) : 51970));
                    var_22 = (min(var_22, (!-5033)));
                    var_23 ^= ((max((arr_5 [i_0 + 2] [i_0 + 2] [i_2 + 1]), (arr_5 [i_0 - 2] [i_1] [i_2 - 1]))));
                    var_24 = -5029;
                }
            }
        }
    }
    #pragma endscop
}
