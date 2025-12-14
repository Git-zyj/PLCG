/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (arr_1 [i_0 - 3] [i_0]);
                arr_4 [i_0 - 1] [17] = (((((~((((arr_3 [i_0]) >= (arr_2 [i_0] [i_1]))))))) ? ((max((arr_1 [i_1 - 2] [i_1]), (arr_2 [i_1 - 1] [i_0])))) : ((((((arr_3 [i_0]) ? (arr_2 [i_0 + 1] [1]) : (arr_3 [1])))) ? (((arr_0 [i_1]) ? 8005928441446763689 : var_11)) : ((((-81 + 2147483647) >> (((arr_0 [i_1 + 1]) - 24774058)))))))));
            }
        }
    }
    var_16 = var_14;
    #pragma endscop
}
