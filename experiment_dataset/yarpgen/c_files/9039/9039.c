/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((((min((min(var_2, var_15)), (((13 - (arr_1 [i_1]))))))) ? var_11 : (arr_0 [i_0] [i_0])));
                arr_5 [i_0 - 1] [12] &= (min(var_4, (arr_3 [i_0 + 1])));
                var_17 = (min(-24713, -14));
            }
        }
    }
    var_18 = (var_10 ^ 18);
    var_19 = var_7;
    #pragma endscop
}
