/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_2, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (max((arr_5 [i_0] [i_1 - 3] [i_2]), (max((arr_5 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_1 - 2])))));
                    var_18 = ((((min((arr_5 [i_1 + 1] [i_1 + 2] [i_1 - 3]), (arr_5 [i_1 + 2] [i_1 - 2] [i_1 - 1])))) ? (max(var_2, var_7)) : ((((arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2]) ? (arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 3]) : (arr_5 [i_1 - 3] [i_1 + 2] [i_1 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
