/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] |= arr_5 [i_0] [i_1] [i_0];
                var_14 = (((arr_6 [i_0]) ? ((((arr_0 [i_0]) ? (arr_2 [9]) : (arr_0 [i_0])))) : ((max(var_5, 18446744073709551609)))));
            }
        }
    }
    var_15 = (((((((max(var_10, var_13))) ^ (min(18446744073709551609, var_6))))) ? 37846 : (max(var_6, (min(var_9, var_10))))));
    var_16 = var_1;
    var_17 += var_12;
    var_18 = ((var_4 ? var_13 : ((~((69 ? 2350470598 : 0))))));
    #pragma endscop
}
