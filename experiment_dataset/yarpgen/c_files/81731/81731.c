/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 1));
    var_21 = ((var_7 ? ((var_8 ? var_2 : var_2)) : ((max((1 && var_16), var_13)))));
    var_22 &= var_14;
    var_23 -= (min(var_4, (((max(var_13, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_24 = (min(var_24, ((min(((max((arr_0 [i_0 - 1]), ((max(var_8, -9891)))))), ((+((max((arr_0 [i_0 + 1]), var_18))))))))));
                var_25 = (max((var_8 < var_4), (~36)));
                var_26 = (max(var_26, (((var_15 ? ((max((arr_0 [i_1]), (arr_3 [i_0 - 1] [i_0])))) : (var_1 || var_4))))));
                arr_4 [i_1] = (1 || -26883);
                var_27 = ((var_6 ? (arr_3 [i_0 - 2] [i_1]) : (arr_0 [i_0 - 3])));
            }
        }
    }
    #pragma endscop
}
