/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] &= (179 | 3523342793688391027);
                    arr_8 [i_0] [i_1] [i_0] = ((!((max(((max(77, -1))), (min((arr_0 [i_0 - 1]), 67)))))));
                    arr_9 [i_0 - 1] = (max(-68, 3667));
                }
            }
        }
    }
    var_14 = (min((min((var_5 ^ 1), ((((-56 + 2147483647) >> (-8966966870158014870 + 8966966870158014873)))))), ((5109119166774850646 ? 16486457707037556164 : ((max(473911608, -1020097645)))))));
    var_15 = ((30149 ? 590685712 : var_0));
    #pragma endscop
}
