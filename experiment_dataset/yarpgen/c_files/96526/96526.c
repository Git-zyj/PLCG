/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= 251;
    var_16 = (((min(596898581215686899, var_10)) % 3434));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((((((var_7 ? (arr_3 [i_0] [i_2] [i_1 + 1]) : var_5))) ? ((-(arr_4 [i_1] [i_1] [i_2]))) : (-68 ^ var_5))));
                    var_18 = (min(var_18, (((+(((~1) ? 0 : 62102)))))));
                    arr_7 [i_1] [i_1] [i_2] = (((2211171212014702879 ? (-127 - 1) : ((var_9 ? (arr_1 [i_1 - 1]) : var_12)))));
                }
            }
        }
    }
    #pragma endscop
}
