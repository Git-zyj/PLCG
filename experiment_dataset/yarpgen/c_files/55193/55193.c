/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min((((arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 3]) ^ var_2)), (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 2])));
                var_16 = (min(var_16, ((((((~((4 ? (arr_0 [16] [16]) : (arr_1 [i_0] [i_1])))))) ? (((arr_4 [i_1] [17] [i_1 - 2]) ? (arr_0 [i_1 + 2] [6]) : (arr_4 [i_1] [i_1] [i_1 + 1]))) : ((((((arr_4 [i_0] [5] [i_1]) ? var_4 : (arr_4 [i_1] [i_0] [i_0])))))))))));
            }
        }
    }
    var_17 = 247;
    var_18 = (min(var_18, (((var_3 / 683896730) & var_2))));
    #pragma endscop
}
