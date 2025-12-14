/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = 1197913292;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = 1522572097804380189;
                arr_5 [i_1] = ((max(-74, (min(3097054004, 0)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (max(-94, var_14));
        arr_11 [i_2] [i_2] = (((max((arr_7 [i_2] [i_2]), 17)) > ((((25122 != (arr_7 [i_2] [i_2])))))));
        var_19 = ((-var_3 ? ((((88 ? 65535 : -1343575823)))) : 17));
    }
    var_20 = var_12;
    #pragma endscop
}
