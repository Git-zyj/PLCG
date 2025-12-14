/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -2377244593984077066;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0] [21]) + ((-(arr_1 [i_0 - 1])))));
        var_17 += (((((max(-17868, 12528)))) > 2377244593984077052));
        var_18 &= var_6;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = min((!-2377244593984077046), (min((arr_2 [i_0 + 1]), var_3)));
            arr_5 [i_0] [17] [i_1] = max((((((31564 ? 4519 : 192))) ? -2649493661405664496 : 32767)), 2047);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_20 = (((((!(arr_0 [i_0] [i_0 - 1])))) & ((min(59717, var_5)))));
            var_21 = ((~(max((~0), (max(-802472555516695919, 10977))))));
            var_22 = ((10977 | (((((min(-21078, 0))) >= 64)))));
        }
    }
    #pragma endscop
}
