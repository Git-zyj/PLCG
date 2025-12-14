/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -4035588528901234826;
    var_21 = var_18;
    var_22 = ((((~4164995374) ? -var_7 : (min(var_16, var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_23 = (min(129971934, 1));
                arr_6 [i_0] = (123 == -1);
                arr_7 [i_1] = (((arr_2 [i_1]) ? ((max((max(507904, (arr_0 [i_0]))), -1869635471))) : (max(var_14, (arr_1 [i_1 + 2] [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
