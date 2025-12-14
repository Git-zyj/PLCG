/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = var_11;
        arr_2 [9] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1 + 1] = (116 ? -110 : 1257787849675167121);
        var_22 = (arr_3 [i_1 + 1] [i_1 + 2]);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_23 = ((((var_7 ? (arr_3 [i_1 - 1] [i_1 + 1]) : var_17)) | (arr_4 [i_1 + 1])));
            var_24 ^= var_5;
            arr_9 [i_1] [i_1] [1] = -var_17;
        }
        var_25 = (arr_4 [i_1 + 1]);
        arr_10 [i_1] [i_1] = (((arr_5 [i_1 + 1]) >> (var_17 - 694520895)));
    }
    #pragma endscop
}
