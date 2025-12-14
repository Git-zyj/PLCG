/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-1239882029 / ((((max(var_2, 156))) + 932218598))));
    var_13 = (((max((min(135923520, var_1)), -var_5))) ? var_4 : (-105 == var_7));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 -= (((arr_6 [i_2 + 3] [i_0 + 1] [i_0]) ^ ((((arr_6 [i_2 - 2] [i_0 - 1] [i_0]) + (arr_6 [i_2 - 1] [i_0 + 1] [i_0]))))));
                    var_15 = ((-((var_5 ? (arr_0 [i_0] [i_0]) : var_0))));
                    var_16 = ((var_7 ? var_8 : (((max(231, var_7))))));
                    var_17 = (max(86, var_11));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] = (((var_9 == 5399780716984248628) & ((-(-127 - 1)))));
                        arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] = (((((((min((-2147483647 - 1), (-9223372036854775807 - 1))) + 9223372036854775807)) + 9223372036854775807)) >> (var_5 - 154)));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, 1));
    #pragma endscop
}
