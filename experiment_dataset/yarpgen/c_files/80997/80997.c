/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = ((!((max(-1, 12709)))));
                var_13 ^= 63;
            }
        }
    }
    var_14 ^= ((1885763237 != (((18 > 0) * 12072965564054291758))));
    #pragma endscop
}
