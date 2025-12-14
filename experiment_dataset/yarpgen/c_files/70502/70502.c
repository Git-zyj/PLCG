/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((max((arr_5 [i_0 + 1]), (max(401049547132804050, 18446744073709551615)))), (((var_3 ? var_10 : 1)))));
                var_11 = 1048575;
                var_12 *= var_1;
                var_13 = var_9;
            }
        }
    }
    var_14 = var_4;
    var_15 = ((-(max(var_0, (min(31, 64))))));
    var_16 = ((var_3 ? 1 : ((var_0 ? var_7 : var_0))));
    #pragma endscop
}
