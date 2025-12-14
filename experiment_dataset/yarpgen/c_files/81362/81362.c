/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((57800 ? 18446744073709551615 : 3005293639026017588)))));
                    var_12 = (min(var_12, ((((-1395241716 + 2147483647) << 1)))));
                }
            }
        }
    }
    #pragma endscop
}
