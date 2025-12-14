/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] = ((((((min(1, 29929))) ? var_10 : (var_8 < var_11))) | (~var_8)));
                    arr_9 [i_2] [i_0] = (arr_4 [i_0 + 1] [i_0 - 1]);
                }
            }
        }
    }
    var_19 = ((~(((((var_7 ? var_9 : 728381837)) < -728381839)))));
    #pragma endscop
}
