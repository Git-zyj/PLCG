/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max((!-2209097167245094758), (min(176690544, -30599)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = (var_4 - var_10);
                var_13 = ((~(min(((max(var_10, var_11))), (min(-23231, -176690545))))));
            }
        }
    }
    var_14 = (min(36028797018959872, -36028797018959870));
    #pragma endscop
}
