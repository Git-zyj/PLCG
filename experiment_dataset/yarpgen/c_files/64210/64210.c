/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(((!(((1 ? 8001259514647609592 : 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (arr_1 [i_1] [i_1 + 2])));
                arr_5 [i_0] [i_1] = (max(662978410, 1243872966124208406));
                arr_6 [i_1] = -1243872966124208408;
            }
        }
    }
    #pragma endscop
}
