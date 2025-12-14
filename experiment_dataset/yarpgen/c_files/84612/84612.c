/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((max(-1267159301052391009, 65535)) >= (arr_0 [i_0])));
                var_20 = (~3613928189);
                var_21 = (!1);
                var_22 += ((-((max((arr_4 [i_0]), (arr_4 [i_0]))))));
                var_23 = (min(var_23, 65535));
            }
        }
    }
    var_24 = (max(var_6, var_2));
    #pragma endscop
}
