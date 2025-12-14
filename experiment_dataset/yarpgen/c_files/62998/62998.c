/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1719329459;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((-2790 | (1314143650457324797 || 8034122210484280962))) <= 2040));
                var_19 = (max(var_19, 17132600423252226818));
                var_20 = (((17784895069351272047 & 20122) & ((-758761155 ^ (18092579258320358992 | 2037)))));
            }
        }
    }
    var_21 = (((-12535 + 2147483647) << ((((((-2040 | 17132600423252226839) != -251181957))) - 1))));
    #pragma endscop
}
