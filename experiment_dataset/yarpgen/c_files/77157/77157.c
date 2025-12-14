/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_9;
    var_17 = var_8;
    var_18 = ((((var_15 > (var_10 >= var_4))) ? ((-(0 || var_0))) : ((~(251 >= 4294967285)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (min((arr_4 [i_0]), (4294967285 != 11)));
                    var_20 = (min(var_20, ((((arr_1 [0]) | (-var_3 | 65535))))));
                    var_21 -= var_15;
                    var_22 = (((min((min(var_6, var_12)), 1121548329)) <= ((max(((min((arr_7 [i_0] [i_1] [i_0] [i_0]), var_10))), (max((arr_1 [i_0]), 12052)))))));
                    var_23 += (max(2095287858, ((min((arr_2 [i_0] [i_1] [i_2]), (arr_2 [1] [i_1 - 1] [8]))))));
                }
            }
        }
    }
    #pragma endscop
}
