/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(134217727 == 134217721)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (max((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (~var_1)));
                    arr_7 [i_2] [i_0] [i_1] [i_2] = (max(-1557396224, (arr_5 [i_2 - 1] [i_2] [i_2 - 1])));
                }
            }
        }
    }
    var_15 = ((((max((-127 - 1), var_9))) ? 3687616759 : ((~(max(var_9, -88))))));
    var_16 = ((var_10 ? var_2 : (max(((1 ? -61 : 234881024)), (((-(-127 - 1))))))));
    #pragma endscop
}
