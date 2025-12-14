/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 -= -1828805614;
        arr_3 [i_0] [i_0] = ((~(52000 & var_0)));
        var_13 = (max(var_13, var_9));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (arr_1 [i_1 + 1])));
        var_15 = (!-2147483632);
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
    {
        var_16 = 1795405828;
        var_17 = (arr_2 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = (-64037 ? (((~(arr_5 [i_2] [i_2])))) : ((22 ? (arr_0 [13]) : (arr_9 [i_2 + 3] [i_2 + 3]))));
        var_18 *= min(((((((65507 ? 11999989406644491819 : 9514))) || (arr_0 [i_2 + 3])))), (((arr_1 [i_2 - 1]) ? 9 : (arr_1 [i_2 - 1]))));

        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            var_19 -= arr_4 [i_2];
            var_20 = (max(var_20, ((min((arr_7 [i_2] [i_2]), ((-(arr_11 [i_3 + 2] [i_3 + 2]))))))));
            arr_15 [5] = 9223372036854775776;
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (((arr_9 [i_4 + 3] [i_4 + 3]) ? (arr_9 [i_4 + 3] [i_4]) : (arr_9 [i_4 - 1] [1])));
        var_21 = (max(var_21, (((+((((arr_1 [i_4]) <= var_2))))))));
    }
    var_22 = var_5;
    var_23 = ((((min(var_1, var_7))) ? (min(var_9, (434563118056785383 / var_9))) : var_8));
    #pragma endscop
}
