/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = min((((arr_0 [i_0 - 2]) ? (max(-1592178055, var_6)) : ((65529 % (arr_9 [i_1] [i_1] [i_1]))))), 1574700558);
                    var_16 = (max(var_16, (((((max((arr_5 [i_0 - 3]), var_4))) ? (arr_5 [i_0 + 1]) : (max(var_10, (arr_5 [i_0 - 3]))))))));
                }
            }
        }
    }
    var_17 = (((((((max(200, 4064))) ? var_9 : (191 % var_9)))) && (((((max(66060288, var_15))) ? var_11 : (max(0, var_4)))))));
    var_18 = ((((var_11 == (65529 < 28860))) ? ((min((min(var_6, -45925894)), var_6))) : -2630142565532757542));
    var_19 = var_14;
    #pragma endscop
}
