/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((var_5 ? (arr_1 [i_0]) : var_1))) ? (!var_10) : (max(((-6923976144608266106 ? -9429 : 0)), ((var_11 ? 9429 : (arr_2 [i_0] [i_1])))))));
                var_12 = (!(!var_9));
            }
        }
    }
    var_13 = ((((((min(164071140, 8)) * 13))) ? (((min(var_8, var_9)) / var_8)) : var_5));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_14 = (max(var_14, (((var_4 ? ((-(arr_7 [i_2 - 1]))) : 2147483636)))));
                    var_15 = ((~(~9445)));
                    var_16 = ((((((9450 ? 0 : 9419)))) ? (var_10 + var_1) : (((max(var_0, (arr_11 [i_3])))))));
                }
            }
        }
    }
    #pragma endscop
}
