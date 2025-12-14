/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((-1 >= (min(685176422, 1))));
                var_11 = max((((arr_0 [i_1] [1]) | (arr_4 [i_1]))), (arr_0 [i_0 - 1] [i_1]));
                arr_6 [i_1] = min((((arr_0 [i_0] [i_0]) ? (arr_4 [i_1]) : ((((arr_2 [i_1] [i_1]) & var_5))))), ((((!1) / (((arr_0 [i_0 - 1] [i_1]) ^ 1))))));
            }
        }
    }
    var_12 -= var_2;
    var_13 = ((1 << (var_6 - 3745375340599152481)));
    var_14 = var_4;
    var_15 = ((((min(15433764627278288300, (min(var_0, var_6))))) ? var_0 : ((((((min(-1, 105))) > var_4))))));
    #pragma endscop
}
