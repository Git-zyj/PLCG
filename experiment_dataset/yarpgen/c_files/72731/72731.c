/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(((min(2503010529, var_3))), var_11))) ? 21 : (((!(((29882 ? 2503010516 : var_2))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [14] [i_2] [i_1] = -1326687247;
                    arr_8 [i_1] [9] = ((32767 || ((max((arr_1 [i_0 - 2] [i_0 + 1]), ((min(2503010528, 2918742082945411085))))))));
                }
            }
        }
    }
    var_13 = var_8;
    var_14 *= 1;
    var_15 = var_1;
    #pragma endscop
}
