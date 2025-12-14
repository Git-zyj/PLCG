/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = -1;
                var_12 = (max(var_12, (((~((~((~(arr_0 [i_0]))))))))));
            }
        }
    }
    var_13 = (~37788);
    var_14 = (~37792);
    var_15 = 619541713136340009;
    #pragma endscop
}
