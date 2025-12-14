/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-(~var_12))));
    var_14 |= var_1;
    var_15 = (max(((min(-6081527581108383522, 998256004172055699))), var_3));
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((min((((~(arr_2 [i_0] [i_0] [18])))), (min((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_1] [i_0] [i_0]))))))));
                var_18 = (min((arr_2 [i_1] [i_1] [i_0]), 1));
            }
        }
    }
    #pragma endscop
}
