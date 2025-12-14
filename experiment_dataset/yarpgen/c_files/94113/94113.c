/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 ^= (105 * ((((min(var_11, var_0))) ? var_1 : (arr_2 [i_0 - 2]))));
                var_14 &= ((((max((arr_4 [i_0] [i_1] [i_1]), (((~(-2147483647 - 1))))))) ? 55 : ((((!(arr_1 [12])))))));
            }
        }
    }
    var_15 = ((var_4 ? (max((max(26653, var_2)), ((var_5 ? var_9 : var_2)))) : var_5));
    var_16 = (((max(5243, 1733987354)) - ((var_2 ? (var_10 - var_11) : var_1))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 = (max(var_7, ((((arr_6 [i_4 + 1]) ? 1 : -26640)))));
                    var_18 = (((arr_7 [i_3 - 1] [i_2 + 3]) ? var_8 : ((min(var_10, (arr_5 [2] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
