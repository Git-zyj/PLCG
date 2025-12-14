/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 ^= (max((max(0, (arr_2 [i_1 - 1] [i_1 - 1]))), (((+((2964887545637976738 ? (arr_3 [i_1 - 1]) : 1792339729)))))));
                var_12 = (arr_2 [i_1] [i_0]);
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
