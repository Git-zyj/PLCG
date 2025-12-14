/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_0));
    var_14 = ((var_4 ? ((127 ^ (var_7 & 860550230534524883))) : ((var_8 ? var_11 : (min(var_5, var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((((min(((((-127 - 1) ? 0 : 127))), var_2))) & ((-25049 ? (min((arr_7 [i_0] [i_0] [i_2]), var_10)) : ((min(2113929216, 9549)))))));
                    var_16 = (((((arr_4 [i_0] [i_1] [i_2] [i_2]) && ((max(-13188, (arr_1 [i_0])))))) ? (1 && 1) : -17894));
                }
            }
        }
    }
    var_17 = (max(var_0, -114));
    var_18 = -89;
    #pragma endscop
}
