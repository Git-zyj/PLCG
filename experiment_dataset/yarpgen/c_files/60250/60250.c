/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(max(var_9, (!789268225170517753)))));
    var_12 = 103;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] = ((~(arr_1 [i_0])));
                arr_7 [i_0] = (((max(42, (arr_0 [i_0] [i_0]))) >= ((((61513 || (arr_0 [i_0] [i_1])))))));
                var_13 -= ((max((arr_0 [i_0] [i_0]), (~var_1))));
            }
        }
    }
    #pragma endscop
}
