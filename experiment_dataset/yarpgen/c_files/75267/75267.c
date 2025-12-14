/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = 252;
                var_12 = (max(var_12, 4294967295));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_13 = 233;
                    arr_8 [i_2] [0] = 4294967295;
                }
            }
        }
    }
    var_14 *= var_10;
    #pragma endscop
}
