/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = 7685852102915205709;
                var_17 = (min(var_17, (((((-(8815693891635698695 / 1530948000))) >= (2147483647 / 13857))))));
            }
        }
    }
    var_18 = (min(var_18, (((13856 & (13242 & 424252749))))));
    #pragma endscop
}
