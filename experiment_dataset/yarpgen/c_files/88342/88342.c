/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [6] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_10 = -var_8;
            var_11 = (arr_0 [i_0]);
            var_12 = var_8;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 = 127;
            var_14 -= 32767;
            var_15 = ((~(~32767)));
            var_16 = (((arr_4 [i_0] [i_0]) ? 18446744073709551615 : (arr_4 [i_0] [i_2])));
            var_17 = ((~(arr_4 [i_0] [i_0])));
        }
        arr_7 [i_0] [20] = ((1276 ? (arr_0 [i_0]) : (arr_0 [2])));
        arr_8 [i_0] [i_0] = (arr_1 [i_0]);
        arr_9 [i_0] = (arr_1 [i_0]);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3] = ((((var_2 && ((!(arr_12 [i_3] [i_3]))))) && ((min((arr_10 [i_3]), (1276 * 29371))))));
        var_18 -= (arr_11 [i_3] [10]);
    }
    var_19 = var_1;
    var_20 += (min((((((18446744073709551609 ? -1 : var_3)) & -var_8))), var_0));
    var_21 = ((!(var_8 / var_5)));
    #pragma endscop
}
