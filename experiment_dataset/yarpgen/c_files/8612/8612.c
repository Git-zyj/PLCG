/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((min(10, 60730)) << (var_5 + 1845528071))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((22556 + ((((((arr_4 [i_0] [i_0] [i_0]) | (arr_4 [21] [i_0] [21])))) ^ (((arr_1 [i_0]) * 51))))));
                var_16 = var_10;
            }
        }
    }
    var_17 = (((((((var_1 ? 33814 : var_0))) ? -var_12 : ((var_0 ? var_9 : var_13)))) - ((51 ? var_8 : -var_5))));
    #pragma endscop
}
