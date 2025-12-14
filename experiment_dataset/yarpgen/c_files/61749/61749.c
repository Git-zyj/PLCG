/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, 5739));
                    var_16 &= ((min(((max((arr_2 [i_2] [i_2 + 1]), (arr_0 [i_1])))), var_1)));
                    var_17 = (1 / 4270020571298891068);
                }
            }
        }
    }
    var_18 = (max(((((var_9 >> 4) == (var_5 << var_8)))), ((((max(var_7, var_14))) ? ((var_5 ? 2305708369850623171 : 30879)) : ((((-3878039733235677355 + 9223372036854775807) << (((var_1 + 1184319617) - 48)))))))));
    #pragma endscop
}
