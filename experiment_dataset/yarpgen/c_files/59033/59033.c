/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(-6227400240808705371, 12521)) % 15)) >= (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (!-11571);
                var_13 = (min((arr_4 [i_1 - 2]), (arr_4 [i_1 - 2])));
            }
        }
    }
    var_14 = ((((min(124, var_10))) ? (max((((13694 ? var_10 : 2147483647))), 6227400240808705371)) : (!var_7)));
    var_15 = ((var_6 ? var_3 : ((((var_1 | 1) != (!var_3))))));
    #pragma endscop
}
