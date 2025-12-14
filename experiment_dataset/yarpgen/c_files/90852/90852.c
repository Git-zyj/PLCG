/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (arr_1 [4] [i_1])));
                var_21 = var_10;
                var_22 = (arr_1 [i_0] [i_1]);
            }
        }
    }
    var_23 = ((~(~-1)));
    var_24 = ((((((((1 ? var_15 : var_13))) ? var_10 : -118))) ? var_3 : ((max((!7403671979253505973), 33236)))));
    #pragma endscop
}
