/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_11;
    var_17 = (min((max((max(-1362009236, 0)), var_6)), var_1));
    var_18 = (max(var_18, ((max((-32767 - 1), var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] = -var_10;
                    var_19 ^= ((-((-135915175 ? 0 : 0))));
                }
            }
        }
    }
    #pragma endscop
}
