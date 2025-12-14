/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(var_4 | var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(max(12758219453336887399, (arr_3 [i_1 + 3] [i_1 + 3] [9])))));
                var_21 -= (((((!(arr_0 [i_0] [8])))) ^ (((arr_3 [i_1] [i_0] [i_0]) ? (max((arr_2 [i_1 + 2]), var_16)) : -var_18))));
                var_22 = (-30227 ? 1 : -6);
            }
        }
    }
    var_23 -= (min((~58518), ((min((!0), 0)))));
    #pragma endscop
}
