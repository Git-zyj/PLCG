/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = var_1;
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((((min(((max((arr_7 [i_0] [4] [i_2] [4]), -1))), (min(10292595854153240369, var_3))))) ? ((((arr_6 [i_1 - 1] [i_1 + 1]) || (arr_6 [i_1 - 1] [i_1 - 1])))) : 255));
                }
            }
        }
    }
    var_11 = (min(var_11, var_0));
    #pragma endscop
}
