/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((796176194 <= 16098302693017902203) && ((min(((1 << (796176213 - 796176207))), (-9223372036854775807 - 1))))));
                arr_5 [i_1] = (2348441380691649413 || 108);
                arr_6 [i_0] [i_0] [i_0] = ((2348441380691649386 ^ (!15704)));
            }
        }
    }
    var_20 = (!2147483392);
    #pragma endscop
}
