/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((~(-127 - 1)));
                arr_6 [i_0] [i_0] = ((-((min(199, ((((arr_3 [i_1 + 1] [i_0]) || 4))))))));
            }
        }
    }
    var_13 = var_8;
    var_14 = (((((var_11 ? var_6 : (min(var_10, var_8))))) ? (((((var_11 ? var_3 : var_7))) ? ((var_10 ? -11 : 10)) : var_0)) : var_11));
    #pragma endscop
}
