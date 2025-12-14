/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((((((min(0, 0)))) % var_12))) ? var_8 : (((var_3 - 0) ? var_11 : (1 == -23490)))));
    var_14 = var_9;
    var_15 &= ((((((var_2 > var_10) ? (((7936 ? -32753 : var_7))) : (min(var_9, 4294959346))))) ? ((min(1489787301, ((var_10 ? 1 : -23490))))) : (((((1221911850 ? var_3 : -23490))) ? ((var_7 ? 18446744073709551615 : var_4)) : (1 > 5370223218126726948)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_16 *= (arr_2 [i_0]);
                var_17 = (min(var_17, ((((arr_4 [i_0 + 1] [i_1 + 2]) % (((arr_1 [i_0 + 2]) ? 62508 : (arr_1 [i_0 + 1]))))))));
            }
        }
    }
    #pragma endscop
}
