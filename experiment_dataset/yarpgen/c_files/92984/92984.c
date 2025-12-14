/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0] [i_0]) != (!var_6)));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? ((((arr_1 [11] [i_0]) & var_6))) : ((-(arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_7 [i_1] = (((((arr_6 [i_2] [i_2 - 1] [i_2 - 2]) ? (min((arr_6 [i_1] [i_1] [i_2]), 2)) : (((((arr_6 [i_1] [3] [i_1]) != (arr_5 [i_1]))))))) % ((((max(10, (arr_4 [i_1])))) ? var_6 : (arr_4 [i_1])))));
            arr_8 [i_1] [i_1] = ((((((min((arr_6 [9] [i_2] [15]), var_10))) ? (((((arr_6 [i_1] [13] [0]) > (arr_4 [i_2]))))) : (arr_6 [i_2 - 2] [i_2 - 2] [1]))) >> (var_8 - 785938551)));
            arr_9 [i_1] [i_1] [i_2] = ((((((arr_6 [15] [i_1] [15]) / (((-24900 ? (arr_3 [i_1]) : (arr_3 [i_1]))))))) - ((((min((arr_3 [i_1]), 2))) ? (max(0, var_11)) : ((((arr_5 [i_1]) ? var_6 : 8514)))))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_1] [9] = ((((((arr_10 [i_2 - 2] [i_3 + 1] [i_2 - 2]) != ((((var_2 != (arr_11 [i_1] [i_2] [i_1] [i_5])))))))) != (arr_12 [i_1] [i_2] [i_2] [i_5])));
                            arr_18 [i_5] [i_1] [i_4] [i_2] [i_2] [i_1] [i_1] = (((~-28167) ? (((18446744073709551615 % (arr_11 [i_1] [12] [i_1] [0])))) : (arr_13 [3] [i_2 + 1] [i_3] [i_1])));
                        }
                    }
                }
            }
        }
        arr_19 [i_1] [2] |= (((((((max(24812, (arr_16 [i_1] [i_1]))) != (arr_11 [i_1] [i_1] [16] [i_1]))))) != (((((arr_5 [i_1]) ? 3768071382600971195 : var_8)) >> (((min((arr_12 [i_1] [9] [i_1] [10]), (arr_14 [i_1] [8] [3] [i_1] [17]))) - 20645))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_14 = (((-(arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]))));
        var_15 -= var_6;
    }
    var_16 &= var_3;
    #pragma endscop
}
