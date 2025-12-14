/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!141);
    var_21 = ((((!(296862502 <= 2332)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = 1569777080;
                var_23 = 14;
            }
        }
    }
    var_24 = ((!(((~(min(-1569777077, 5842)))))));
    #pragma endscop
}
