/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -16;
    var_13 = 1;
    var_14 = max((max(64, (max(170755072, 11152)))), (((288230376151711743 <= (-99 * 1193351114)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min(((max(53118, (0 != 24158)))), (max(((max(27469, 827305708))), (min(11486639476282738777, -1702075785))))));
                arr_6 [3] = -1711523232;
            }
        }
    }
    #pragma endscop
}
