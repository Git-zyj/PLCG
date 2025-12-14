/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 19580;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((max((arr_0 [i_1 + 1]), (min((arr_1 [i_0]), var_10)))));
                var_14 = (max(144115187941638144, var_7));
            }
        }
    }
    var_15 |= (max(((max(var_3, var_3))), (((max(40403, 38611))))));
    #pragma endscop
}
