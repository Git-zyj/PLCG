/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((min(-1039211603, 7)), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (min(20367, var_10));
                var_16 = (min((max(511, -2213687604451965305)), (arr_5 [i_0] [i_1 + 1] [i_1 + 2])));
                arr_6 [i_1] = var_8;
            }
        }
    }
    var_17 = (max(var_17, (((var_2 - (((min(76167592335929606, var_12)) - (((min(var_5, 0)))))))))));
    #pragma endscop
}
