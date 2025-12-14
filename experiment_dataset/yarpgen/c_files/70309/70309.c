/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = min(var_16, (!var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((((min(1, 1))) > (((((min(0, 1))) || ((min((arr_1 [i_1]), 8064))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = (-((9223367638808264704 >> (3883103196583763688 - 3883103196583763669))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((~4) || ((min(-1864114367, var_12))));
                            arr_14 [14] = (min(((min((min(65534, (arr_11 [i_0] [i_0] [i_0 + 3] [11] [i_0] [i_0]))), (var_12 <= 598825128)))), ((min(var_7, (arr_5 [i_0] [i_2] [i_3]))))));
                            arr_15 [i_3] [i_2] [i_0] [i_0] [i_1 + 3] [i_0] = ((!((min((arr_9 [i_3] [i_1] [i_2] [i_0 - 1]), var_16)))));
                            var_20 = (max((max((-9223372036854775807 - 1), 1)), (((-((~(arr_5 [i_0] [i_1] [i_2]))))))));
                        }
                    }
                }
                arr_16 [i_0 + 1] = ((max(var_0, var_14)));
            }
        }
    }
    #pragma endscop
}
