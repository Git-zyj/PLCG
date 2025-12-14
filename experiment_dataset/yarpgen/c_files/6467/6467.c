/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_10, 1559))) ? (((((0 ? var_0 : 1574))) ? (min(-2305530468814129594, 1)) : (((min(var_12, 51290)))))) : 1432410960));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((((arr_3 [i_0 + 3]) ? 1 : 14838053739149184555))) ? (((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0]))) : (((arr_1 [i_0] [i_0]) ? 15 : (arr_1 [i_0] [i_0])))));
                arr_5 [i_0] [4] [i_1] &= ((((((2803769903 ? 23 : 63967)))) ? 13 : (((((((arr_0 [6]) == -29626))) >> ((((18446744073709551604 ? 6611052621718726113 : (arr_0 [16]))) - 6611052621718726101)))))));
            }
        }
    }
    var_16 = 1056964608;
    #pragma endscop
}
