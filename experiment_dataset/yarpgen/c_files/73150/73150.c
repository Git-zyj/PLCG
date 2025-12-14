/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (min(((min((2147483635 ^ 111047577), 1))), var_2));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 = max((((arr_1 [i_0 - 4] [i_0 - 4]) - var_14)), (max(1, (arr_2 [i_0 + 1] [i_0]))));
        var_21 = (17 + -17601);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (((max((arr_3 [i_0 - 1]), var_15)) <= (min((arr_3 [i_0 - 3]), (arr_0 [i_0 - 4])))));
                    var_23 = (max(1, ((~(var_3 << var_15)))));
                    var_24 ^= (min(var_6, (arr_0 [i_0])));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_25 = (((((arr_4 [i_3 + 1]) ? (arr_4 [i_3 + 1]) : var_6)) + 127));
        var_26 = 11;
    }
    var_27 = var_17;
    var_28 = (min(var_28, ((((((-((min(1, 92)))))) ? (((-((9223372036854775807 ? -3011 : 1))))) : (min(var_6, ((min(var_15, var_3))))))))));
    #pragma endscop
}
