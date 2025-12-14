/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!-40);
    var_21 = ((((max(((min(255, 252))), -589829703871432449))) ? (((var_12 > -1427817918) ? var_5 : (max(var_8, var_15)))) : var_6));
    var_22 = (min(var_22, var_1));
    var_23 = (((var_3 & var_5) && 1058967024));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_24 ^= (-((-((-(arr_8 [i_1] [14] [14]))))));
                    var_25 = ((((1 ? 278344931 : 3887727526))) ? (max(((var_9 << (((arr_7 [i_0 + 1]) - 100)))), var_17)) : (70 <= 15));
                    arr_9 [i_0 + 2] [i_0 + 2] [i_2] = ((((min((arr_7 [i_2]), (((arr_6 [4] [i_1] [i_1]) ? 248 : var_10))))) ? (arr_4 [i_1]) : ((((arr_8 [i_0] [i_2] [i_1]) & (arr_0 [15]))))));
                    var_26 += (var_3 * (min((arr_0 [i_2 + 2]), (arr_3 [i_2 + 2]))));
                }
            }
        }
    }
    #pragma endscop
}
