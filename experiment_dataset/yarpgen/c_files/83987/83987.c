/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (min(((min(0, 525278596))), (max((min((arr_3 [i_0] [i_1] [i_2]), 3024)), (((1 ? (arr_4 [i_0] [i_1] [8]) : var_13)))))));
                    var_20 = arr_3 [i_2] [i_0] [i_0];
                }
            }
        }
    }
    var_21 = (min((var_18 - var_15), (3365709027938741268 + 0)));
    #pragma endscop
}
