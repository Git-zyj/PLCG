/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = -7473053252709950200;
                var_14 = arr_0 [i_1] [i_0];
                arr_5 [i_1] [i_1] [i_1] = ((((max((arr_2 [i_1]), (arr_2 [i_0])))) || ((max(-3106674628016200679, (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    var_15 = ((((9223372036854775807 ? 9223372036854775789 : var_5)) == 2127557242656502769));
    #pragma endscop
}
