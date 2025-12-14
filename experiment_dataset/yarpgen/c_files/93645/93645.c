/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((~(min(296785, 9079256848778919936))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((-21 ? ((1062234854 ? (((!(arr_2 [i_1])))) : (arr_6 [i_0] [i_1] [i_2]))) : (min(46380, var_9)))))));
                    arr_8 [i_0] [i_0] = (~3232732422);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_12 = (((((((min(49010, 296785))) ? (((arr_11 [i_3]) ? 3232732442 : var_1)) : -3232732440))) ? (((((19023 ? var_3 : (arr_9 [i_3] [i_3])))) ? (((max(var_9, 0)))) : 9223372036854775807)) : (((arr_9 [i_3] [i_3]) ? ((9223372036854775786 ? 9223372036854775796 : -9223372036854775807)) : var_9))));
        arr_12 [17] [i_3] = (arr_10 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_13 = ((((arr_14 [i_4] [15]) ? var_7 : var_0)));
        var_14 ^= (arr_11 [i_4]);
        arr_15 [i_4] = ((((arr_9 [i_4] [i_4]) ? (arr_9 [i_4] [i_4]) : var_2)) % (arr_9 [i_4] [i_4]));
        arr_16 [i_4] [i_4] = ((+(((arr_11 [i_4]) ? (arr_14 [i_4] [i_4]) : (arr_9 [i_4] [i_4])))));
    }
    #pragma endscop
}
