/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((9357141912471584988 ? (max((((var_0 ? var_1 : var_3))), (min(var_4, 1619632632)))) : ((var_7 + (17972178751385015811 - -70)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 2] [i_0] = arr_4 [i_2] [i_1];
                    arr_7 [i_1] = (max(((609896740 % (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]))), ((36752 ^ (arr_3 [i_0 + 3] [i_0 + 2])))));
                }
            }
        }
    }
    var_11 = -var_5;
    var_12 = (max(var_2, (((64707 < ((var_4 ? var_2 : var_7)))))));
    var_13 = (max(var_9, var_5));
    #pragma endscop
}
