/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((max(var_11, var_7))))));
    var_15 = ((-(((var_1 <= ((var_2 ? var_11 : 157)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 *= 1414892630;
                    arr_7 [i_2] [i_1] [i_1] = ((max((max(3221225472, var_12)), ((-4736962925542446974 ? 0 : var_10)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            {
                arr_14 [i_4] = (((((arr_9 [i_4 - 3]) || (arr_9 [i_4 + 1]))) ? (max((arr_9 [i_4 - 2]), 70368710623232)) : (min(var_5, 4948000748697276391))));
                var_17 = ((!((((max(var_4, var_13))) || var_12))));
            }
        }
    }
    #pragma endscop
}
