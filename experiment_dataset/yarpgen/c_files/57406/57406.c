/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = 13;
        arr_2 [i_0] = ((123 && (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = ((var_13 ? 18446744073709551615 : 11151310895473004832));
            var_17 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : -31843));
        }
        var_18 = 11072411748888284309;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_19 = ((arr_6 [14] [i_2]) ? (arr_8 [i_2] [i_2 + 1]) : (arr_6 [i_2] [i_2 + 1]));
        var_20 = 242;
        var_21 = ((-(arr_3 [i_2])));
        var_22 = (arr_7 [i_2 + 1] [i_2 + 1]);
        arr_9 [i_2] = (arr_8 [i_2] [i_2]);
    }
    var_23 = ((var_1 >= ((31 ? var_14 : var_11))));
    var_24 = var_0;
    #pragma endscop
}
