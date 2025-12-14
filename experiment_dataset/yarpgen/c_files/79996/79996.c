/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((3078768482 ? (max(158536858759146499, 6502526238643405975)) : var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((((min((arr_4 [i_0] [i_0 - 1] [i_1]), (((arr_2 [9] [i_1] [i_0]) / -20044))))) ? ((-(arr_4 [i_1 + 1] [i_1] [i_1 + 1]))) : (arr_2 [i_0] [i_0] [i_1])));
                arr_5 [i_1] [i_1] = (min((arr_4 [i_0] [i_1] [i_0]), (((arr_3 [i_1] [i_1]) ? 0 : (arr_3 [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
