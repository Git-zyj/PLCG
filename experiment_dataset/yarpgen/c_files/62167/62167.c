/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(var_7, ((var_2 + (var_5 / 476)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, 127));
                var_18 = ((min((((29497 >= (arr_3 [i_0] [i_0])))), (min(var_10, (arr_5 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
