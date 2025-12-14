/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 += ((40 / -var_0) ? ((((min(-512, var_1))) ? ((var_10 ? (arr_8 [i_2] [i_0]) : (arr_7 [4] [i_1] [i_1]))) : ((((arr_7 [i_1 - 2] [i_1 - 2] [i_2]) ? (arr_4 [i_2]) : (arr_5 [i_1] [i_0])))))) : 144);
                    arr_9 [i_0] [i_0] [6] [i_0] = (((arr_6 [i_0] [i_0]) ? var_1 : (min((!144), (((arr_5 [i_1] [i_0]) << (var_7 - 36009)))))));
                }
            }
        }
    }
    var_12 = max(144, (max(var_0, (!var_0))));
    #pragma endscop
}
