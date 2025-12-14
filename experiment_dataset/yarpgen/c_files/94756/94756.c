/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_8 [i_0 - 1] [i_1 - 1]);
                    arr_10 [i_1] = (!(arr_7 [i_1]));
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
