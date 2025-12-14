/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (((((~(arr_4 [i_0] [i_1])))) ? (((!((max((arr_7 [i_0] [i_1] [i_1] [i_2]), -32764)))))) : ((min(213, 48488)))));
                    arr_11 [i_2] = (arr_0 [i_2]);
                }
            }
        }
    }
    var_10 = var_5;
    #pragma endscop
}
