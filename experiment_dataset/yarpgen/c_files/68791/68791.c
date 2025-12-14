/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-(((!(281474976710655 - 18446462598732840928)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, var_5));
                    var_17 *= (max((--281474976710656), ((max((7296 / -24033), 7296)))));
                }
            }
        }
    }
    #pragma endscop
}
