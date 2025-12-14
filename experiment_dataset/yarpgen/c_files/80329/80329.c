/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = var_4;
                    arr_8 [i_0] = (!31377);
                    arr_9 [i_0] [i_1 - 1] [i_2] [0] = ((((min((arr_1 [i_2]), var_0))) ? (((-15504 || var_0) * (max(85, 8977565173153830405)))) : (min((arr_3 [i_1 + 1]), (arr_3 [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_14 [i_4] = 13349510065869584947;
                arr_15 [i_3] [8] = (min((arr_1 [i_3]), (((var_0 > (arr_0 [i_4]))))));
                arr_16 [i_4] = (113 ^ var_7);
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
