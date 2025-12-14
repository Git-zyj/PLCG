/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (~-20130);
    var_16 = (--20119);
    var_17 = (((((-20130 ? -var_1 : var_10))) ? (4294967295 * 1) : ((((var_4 ? var_1 : var_11)) << 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((4128887748008830335 ? 1 : 1158408234534026267))) ? (max(18446744073709551601, -1)) : (((max((1 > 1), var_10))))));
                    var_19 = ((-((0 ? 1 : 4294967295))));
                }
            }
        }
    }
    var_20 = (max((var_1 * var_10), var_9));
    #pragma endscop
}
