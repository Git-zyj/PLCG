/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((min(var_13, var_14))), ((-(var_6 | var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_2 [i_2])));
                    var_22 = ((-(max(var_9, ((18446744073709551587 ? 73 : var_6))))));
                }
            }
        }
    }
    var_23 &= max(var_13, ((var_0 ? var_8 : ((var_1 ? var_16 : var_0)))));
    var_24 = ((var_3 + (((var_10 && -5799921596673840210) ? (max(120, var_2)) : (((var_6 >> (var_9 + 24390))))))));
    #pragma endscop
}
