/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 += var_4;
                var_19 = (min(((+(((arr_2 [i_1]) ? (arr_3 [i_1]) : var_11)))), var_11));
            }
        }
    }
    var_20 = (min(-38, ((var_3 ? (var_7 ^ var_4) : var_13))));
    var_21 = var_14;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    arr_12 [i_2] [18] [i_4] = var_9;
                    var_22 = -31;
                    var_23 = (max(var_23, (((min(-3604250995410185586, (arr_9 [i_2] [i_3] [i_4 + 1])))))));
                    arr_13 [i_4] [i_4] = (min((((arr_6 [0]) ? (arr_9 [i_4] [i_3] [i_4 + 1]) : (arr_10 [i_2] [14] [i_4]))), (((!(arr_10 [i_2] [1] [i_4 - 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
