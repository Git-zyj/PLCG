/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (arr_3 [16] [i_1]);
                    var_10 = min((arr_4 [i_1]), (min(4294967295, (arr_0 [i_2]))));
                }
            }
        }
    }
    var_11 = var_0;
    #pragma endscop
}
