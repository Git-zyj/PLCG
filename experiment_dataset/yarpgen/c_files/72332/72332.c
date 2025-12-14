/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-9223372036854775807 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((((((arr_2 [i_1] [i_1 - 3] [i_1 - 3]) | 7))) ? ((((((1 ? 554835387 : 241))) || (((var_3 ? var_3 : -554835388)))))) : (((!((max(1, (arr_1 [i_1])))))))));
                    var_14 = (min(var_14, (1 + -17650)));
                }
            }
        }
    }
    #pragma endscop
}
