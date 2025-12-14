/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_0]);
                var_20 = (min((arr_3 [i_1] [i_0]), var_4));
                var_21 = var_5;
                var_22 ^= (min((((var_5 && ((max(var_1, 0)))))), var_5));
            }
        }
    }
    var_23 = (var_2 >= var_8);
    #pragma endscop
}
