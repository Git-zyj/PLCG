/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ^ (arr_0 [i_0])));
        arr_3 [i_0] = (max((((arr_1 [5] [i_0]) | (arr_0 [1]))), (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] = (min((((arr_5 [i_0 + 1] [i_0]) ? (arr_4 [i_0] [i_1]) : ((var_9 / (arr_4 [i_2] [14]))))), (((!(arr_5 [i_1] [i_0]))))));
                    var_12 = (arr_1 [i_0] [i_0]);
                    var_13 = (max(var_13, ((3 ? (max((min(-21, -1)), 0)) : -1))));
                    var_14 = ((~((((1735240697 <= 6) && -1119093275)))));
                }
            }
        }
    }
    var_15 = 1048575;
    #pragma endscop
}
