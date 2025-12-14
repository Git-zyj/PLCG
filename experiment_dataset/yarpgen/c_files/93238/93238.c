/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(161, var_14))) ? var_11 : ((max(1, 160)))))) ? 1 : (((!(!2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))) ? (((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))) : ((253 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))));
                arr_5 [i_0] = (max((arr_0 [i_0]), (((!(arr_0 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
