/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 6146;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (((((1 ? 23245 : 27335))) ? (((arr_3 [i_0] [i_1] [i_0]) ? 94517494 : 3639)) : (arr_3 [i_0] [i_0] [i_0])));
                var_22 *= var_12;
            }
        }
    }
    var_23 = (min(var_23, var_7));
    #pragma endscop
}
