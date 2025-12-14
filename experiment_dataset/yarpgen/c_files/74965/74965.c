/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (var_4 <= var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 = ((-(arr_1 [i_0])));
        var_16 = -42;
        var_17 = ((-((((arr_1 [i_0]) < var_10)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_18 &= ((-((~(~18046)))));
        arr_4 [i_1] [i_1] = ((((min(-419980547033502842, (arr_0 [i_1] [i_1])))) ? ((var_6 ? 0 : 1322767400)) : -1));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_19 ^= (max(var_4, (((((arr_3 [i_2 - 1]) + 2147483647)) << (((-38 + 51) - 13))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (((arr_0 [i_2 - 1] [i_3]) ? 24781 : (arr_0 [i_2 - 1] [i_2])));
            var_21 = (max(var_21, (((~((0 ? 14998921918229113632 : 0)))))));
            arr_9 [i_2] [i_3] = arr_0 [i_2] [i_3];
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_22 = (((((60 ? (arr_6 [i_2 - 1]) : var_8))) ? ((((arr_7 [i_4]) == (((arr_12 [i_2] [i_4]) ? 40229 : 0))))) : ((((arr_7 [i_4]) ? (arr_0 [17] [22]) : (-9223372036854775807 - 1))))));
            var_23 += (((((min((arr_12 [i_2] [i_4]), (arr_11 [i_2] [7])))) ? ((15455035045187664110 ? -1525327035 : -30)) : ((((arr_6 [i_4]) == (arr_0 [i_2] [i_4])))))) * (((((arr_3 [i_2 - 1]) + 2147483647)) >> (((arr_3 [i_2 - 1]) + 20382)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_20 [i_6] = (((!(((arr_1 [i_6]) || var_3)))));
                        var_24 -= ((arr_11 [i_2 - 1] [i_4]) << (((-4625586355118157229 - var_1) + 4625586355118157367)));
                    }
                }
            }
            arr_21 [i_4] [i_2] = (max((arr_5 [i_4] [i_2 + 1]), ((62025 ? 0 : -2096601648))));
        }
        var_25 ^= (min(6175617445588107578, -992113245));
    }
    var_26 = (max(var_26, 65520));
    var_27 = ((-var_9 ? (max(1, var_9)) : (min(512, ((448 ? var_10 : var_2))))));
    #pragma endscop
}
