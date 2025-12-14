/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [11] [i_1] [i_0] = (max((min((max(18446744073709551606, -1638578901)), (65535 + 16))), ((max((max(63017, 790)), 32)))));
                    var_12 = (max((0 != -3), (min(27989, -3219))));
                    var_13 = max((0 & -1638578883), (max(802866280, 790)));
                }
            }
        }
    }
    #pragma endscop
}
