/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (min((((~0) ? var_7 : var_3)), (!-117925237)))));
    var_11 = (max(var_11, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 |= (((((117925237 * (arr_2 [i_1])))) ? ((((-28051 >= (arr_2 [i_1]))))) : (((arr_2 [i_1]) ? (arr_3 [i_0] [i_0] [0]) : 189))));
                    arr_7 [i_0] [i_2] = (arr_5 [i_2 + 1] [i_2] [i_2] [i_2]);
                    arr_8 [i_0] [i_0] [i_0] = ((~(((arr_1 [i_0]) ? (arr_2 [i_0]) : 0))));
                }
            }
        }
        arr_9 [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
        arr_10 [i_0] = (((arr_4 [i_0] [i_0] [i_0]) >= (arr_4 [i_0] [i_0] [i_0])));
    }
    var_13 = (min((((var_1 > var_3) ? (min(18446744073709551615, var_6)) : var_6)), (min(((0 << (var_5 - 1295252557665125085))), 0))));
    var_14 = (((var_2 / ((min(var_8, (-32767 - 1)))))));
    #pragma endscop
}
