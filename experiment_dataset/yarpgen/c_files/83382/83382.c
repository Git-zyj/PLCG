/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 -= (max(19433, 9227732198571181692));
                var_13 = (min((max(((min((arr_2 [i_0] [i_1]), var_3))), (max((arr_2 [i_0] [i_0]), -4137281581293990211)))), (min((min((arr_4 [i_0] [i_0] [i_0]), var_6)), (min(var_2, (arr_4 [i_0] [i_1] [15])))))));
            }
        }
    }
    var_14 = (min(var_14, ((min(((min(((max(-7230, 240633768))), (min(var_8, var_7))))), (min(((max(var_6, var_7))), (min(var_7, var_10)))))))));
    #pragma endscop
}
