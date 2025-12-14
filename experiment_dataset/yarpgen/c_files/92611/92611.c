/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(-32751, var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] |= max(var_5, (((~(10 >= 1)))));
                var_16 *= (var_1 | var_2);
                arr_5 [5] [5] [i_1] = (max(3981680031, (min((~1359141361), (min(var_2, var_10))))));
            }
        }
    }
    var_17 = (max(var_9, -var_2));
    var_18 = ((-(!35)));
    #pragma endscop
}
