/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1264491306 ? ((((max(1264491306, var_1)) + ((-1 ? var_14 : 817751077))))) : (18446744073709551597 + 1264491306));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2 + 1] |= ((-1928091957 != (-10886 + 10885)));
                    var_16 *= (max(7034295477304844004, (((-1 + 127) ? 10895 : (max((arr_9 [i_2] [i_2 - 2] [i_1 + 1] [i_0]), 1099511627712))))));
                }
            }
        }
    }
    var_17 = (max(18302628885633695744, var_2));
    var_18 = (max((max((-127 - 1), (-6953 + 1264491308))), (max((255 + var_14), (4096 || var_12)))));
    var_19 = 1806393998;
    #pragma endscop
}
