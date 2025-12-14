/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1879972760;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(((((((var_11 ? 15893 : var_11))) ? ((((arr_3 [i_0]) || 1))) : (var_10 == 42079)))), ((var_10 ? var_6 : (max((arr_2 [i_0] [i_1]), var_0))))));
                arr_6 [i_0] = (((((~(arr_0 [i_0] [i_0])))) ? (((var_4 ? (arr_4 [i_0] [i_1 + 3]) : ((max(21798, 42079)))))) : (((arr_0 [i_1] [i_1 + 1]) ? 252 : (arr_0 [i_1] [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
