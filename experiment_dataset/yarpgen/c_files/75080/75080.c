/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = ((((((max((arr_0 [i_0]), var_0)) & ((min(3779772146998552445, -3779772146998552440)))))) || (((var_10 ? 3779772146998552455 : 25)))));
                    var_12 ^= ((var_5 >= (min(4294967295, 0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                var_13 = 32765;
                var_14 &= (((!-7825710831229045808) ? 1 : 32759));
            }
        }
    }
    #pragma endscop
}
