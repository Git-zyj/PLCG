/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((25674 << (65535 - 65529))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min((((arr_5 [i_0 - 3] [i_1]) ? (arr_7 [i_0 - 1] [i_1]) : (arr_1 [i_1] [i_2]))), ((max((arr_1 [i_1] [i_2]), 65534)))));
                    var_21 = (((((var_14 ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : (1295935691 + 6291735635417096643)))) ? (((!(arr_2 [i_1])))) : (((((max(2835939759607650006, var_6))) && ((min((arr_3 [i_0] [i_1]), (arr_4 [i_0] [i_2])))))))));
                    var_22 = ((~((-(arr_3 [i_0 - 1] [i_0 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
