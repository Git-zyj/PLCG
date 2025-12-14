/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((+((183 ? (arr_5 [i_0] [i_1]) : ((~(arr_0 [i_0]))))))))));
                    arr_7 [i_1] [i_1] [i_2 - 1] = (arr_2 [i_1]);
                    var_12 = (max((((~(var_9 / 1)))), var_6));
                }
            }
        }
    }
    var_13 = ((((max(var_9, var_6))) | (max(183, (var_4 * 73)))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_14 = (min(var_14, ((((var_8 / 1) << (var_6 - 1750022858))))));
                var_15 = var_7;
            }
        }
    }
    var_16 = 16;
    #pragma endscop
}
