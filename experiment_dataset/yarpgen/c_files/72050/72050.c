/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [3] = 1073741822;
        var_15 = ((((((arr_0 [i_0]) + var_12))) ? 9223372036854775807 : ((((((arr_0 [i_0]) % var_3)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_3 [i_1]) < (((var_10 && (arr_5 [i_1] [i_1]))))));
        var_17 = (!67);
        var_18 = (((var_8 ? var_12 : var_6)));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = ((var_11 / (arr_5 [i_1] [i_1])));
            var_20 = (((arr_3 [i_1]) ? (arr_7 [i_1] [i_1]) : ((((arr_5 [i_1] [i_1]) % (arr_5 [i_1] [i_1]))))));
            var_21 = (((var_2 - var_11) % (arr_3 [i_1])));
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (159 - 32565);
        arr_14 [2] [i_3] = var_10;
        var_22 ^= var_10;
    }
    for (int i_4 = 4; i_4 < 14;i_4 += 1)
    {
        var_23 ^= (((((((arr_4 [14]) / (arr_3 [6]))) + (((arr_11 [i_4]) / var_13)))) / (((max(var_12, 1762225305))))));
        var_24 = max((((arr_16 [i_4] [i_4]) + var_12)), 2532741984);
    }
    var_25 = max(((var_6 ? (var_14 || var_10) : (var_10 / var_2))), var_2);
    var_26 = (var_1 / var_9);
    #pragma endscop
}
