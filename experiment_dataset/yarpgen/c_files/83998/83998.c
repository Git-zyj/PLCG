/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = 2147483647;
                var_20 = -727881801;
                var_21 = (max((((((~(arr_3 [i_0] [i_1 - 2])))) ^ ((-30 ? 24576 : (arr_2 [i_0] [i_1]))))), (arr_3 [i_0] [i_1 + 1])));
            }
        }
    }
    var_22 = 29;
    #pragma endscop
}
