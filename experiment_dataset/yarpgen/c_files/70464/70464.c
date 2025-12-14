/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 += (((!1) != (arr_2 [i_0] [i_1 + 1])));
                var_18 |= var_0;
                arr_5 [i_1] = (((((var_14 ? (arr_0 [i_1 + 1] [i_0]) : var_14)) - var_13)) % (arr_2 [i_0] [i_0]));
            }
        }
    }
    var_19 |= var_6;
    #pragma endscop
}
