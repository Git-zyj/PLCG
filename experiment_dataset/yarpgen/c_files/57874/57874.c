/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_11 ? (0 * 255) : -var_12)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 3145034032826148802));
                var_20 = (arr_3 [i_0 - 1] [1]);
            }
        }
    }
    var_21 = (max(var_9, (!var_4)));
    #pragma endscop
}
