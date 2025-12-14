/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((~(!0)))), (((var_13 <= var_4) * 4204700707))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (((((min(var_9, var_15)) % ((max((arr_2 [i_0] [11]), var_5))))) | ((((var_12 ^ 120) ? ((max(var_8, var_1))) : ((~(arr_4 [i_0] [i_2]))))))));
                    arr_9 [i_1] [i_2] = max((var_16 > var_15), (min(-8024, (1 | 21798))));
                    arr_10 [i_0] [i_1] [i_2] |= ((~((1 ? 4204700724 : 44568))));
                }
            }
        }
    }
    var_21 = (((max(0, var_3)) * ((((((max(63, -66)))) / (2 * 90266607))))));
    #pragma endscop
}
