/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = (0 >= 2077940991);
                arr_8 [i_1] [i_0] [i_0] = ((45 ? 68 : ((((-1086390791 && 29906) || (arr_1 [i_1] [i_0]))))));
                arr_9 [i_0] = ((((((arr_4 [i_0] [i_1]) ? (arr_6 [i_0] [i_0] [1]) : (arr_6 [i_0] [i_0] [1])))) * (arr_1 [i_0] [i_1])));
            }
        }
    }
    var_20 = ((-1486050931 ? ((var_14 ? var_15 : 223)) : (min(1, -1722775069))));
    #pragma endscop
}
