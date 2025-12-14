/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((max(511, (arr_4 [i_0 + 1])))) ? ((var_9 * (arr_4 [i_0 + 1]))) : (arr_4 [i_0 + 1])));
                    var_14 -= (((((~(-9223372036854775807 - 1)))) && 50505));
                    arr_8 [4] [i_1] [i_0] = min(((max(50505, 15030))), ((-(arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                    var_15 *= 12912376142579803359;
                }
            }
        }
    }
    #pragma endscop
}
