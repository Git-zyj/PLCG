/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((((var_11 + -55) * (arr_1 [i_0]))));
                    var_15 = ((((((arr_0 [i_2]) ? 55 : (arr_5 [i_1])))) ? 2147483647 : (arr_1 [i_2])));
                }
            }
        }
    }
    var_16 += -125;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_17 = (((((((min((arr_12 [i_3]), var_4))) ? (((-32767 - 1) ? (arr_11 [i_3] [i_3] [i_3]) : var_6)) : ((((var_10 || (arr_10 [i_3] [3])))))))) && (((3935818416 ? var_12 : var_4)))));
                var_18 = ((var_12 ? var_7 : (min((arr_12 [i_3]), (arr_10 [i_3] [i_3])))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_19 = (1 % 1);
                    arr_16 [i_5] = ((3935818402 - ((49 ? 40 : 3935818418))));
                }
                var_20 = (((arr_14 [i_4] [i_4] [17] [i_4]) != -var_1));
            }
        }
    }
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
