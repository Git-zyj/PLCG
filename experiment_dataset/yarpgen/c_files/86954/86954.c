/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(((var_0 ? 2676208794 : 1618758501))))) ? var_2 : var_13));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min((arr_0 [i_0] [i_0]), var_1));
        arr_3 [3] [i_0] = (((((((((arr_1 [i_0]) ? var_18 : (arr_0 [i_0] [i_0])))) ? -1 : ((max((arr_2 [i_0]), (arr_0 [i_0] [i_0]))))))) - 1));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                arr_10 [i_2] [i_2] = 1618758502;
                arr_11 [i_2] = (max(103, ((3200220301 ? 511 : 1))));
                arr_12 [i_1] [i_2] = (((((-(arr_9 [i_1] [i_2] [i_1])))) ? ((1094746985 ? 1411375181 : (arr_0 [i_1] [i_2]))) : var_6));
            }
        }
    }
    #pragma endscop
}
