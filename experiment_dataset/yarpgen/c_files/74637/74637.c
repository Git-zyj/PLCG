/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(var_0, var_9));
    var_19 = ((954147750959143035 / ((((((var_9 ? -48 : var_11))) ? ((var_10 ? 812573538 : var_15)) : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (var_17 ? (arr_2 [i_0]) : ((((arr_0 [i_0] [i_1]) < ((2831414611 ? 2930265063 : (arr_0 [i_0] [i_0])))))));
                arr_5 [i_0] = ((-((max((arr_4 [i_0] [i_1] [i_1]), (arr_1 [i_1]))))));
                var_21 = var_4;
                arr_6 [i_0] [i_1] [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
