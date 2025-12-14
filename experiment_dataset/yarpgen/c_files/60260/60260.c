/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = (!((((10000111942992585364 & var_2) - 1320106576876953053))));
                var_17 = ((((-32 & -946712103) + 9223372036854775807)) << (((min(var_11, ((var_5 ? 946712096 : var_12)))) - 5330)));
            }
        }
    }
    var_18 &= (max(var_5, (max(((max(var_9, var_13))), 946712116))));
    var_19 = (min(var_19, var_13));
    #pragma endscop
}
