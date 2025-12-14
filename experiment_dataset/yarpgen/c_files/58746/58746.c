/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((4319384936544718222 ? 14127359137164833394 : var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max(((1046922854 ? 4319384936544718222 : 2787919669)), (((((min(var_0, var_7))) ? (((arr_6 [i_1 - 1] [i_1 - 1]) + 51730)) : var_5))))))));
                    arr_10 [1] [i_1 + 1] [i_0] [i_0] = ((((min((arr_7 [i_2] [i_1 + 1] [i_2 - 1]), (arr_7 [17] [i_1 + 1] [i_2 - 1])))) ? var_9 : (arr_8 [i_2] [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
