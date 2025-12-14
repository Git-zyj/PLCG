/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((3048878979 ? (~1246088309) : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = var_3;
                    var_13 |= 255;
                }
            }
        }
    }
    #pragma endscop
}
