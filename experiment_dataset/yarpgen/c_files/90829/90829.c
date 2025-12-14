/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_10 ? var_9 : 21444)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_19 = (max((max(2371893563, (arr_0 [i_0] [i_0]))), (max(1, (arr_0 [i_0] [i_0])))));
        var_20 = (((((~(arr_1 [i_0])))) ? var_13 : var_0));
        arr_4 [i_0] = (max(var_10, ((min(((min(1, 1))), var_4)))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_21 = (((arr_2 [i_1] [i_2]) ? 1 : (~30266)));
            var_22 = ((var_5 ? var_1 : 1));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_1] [i_3] = (((((arr_9 [i_1] [i_1] [i_3]) >= (arr_9 [i_1 + 2] [i_1 + 4] [i_1 - 1]))) ? (arr_7 [i_3]) : (arr_1 [i_1])));
            arr_15 [i_1] [i_1] [i_1] = (((arr_13 [i_3]) ? var_7 : 4070779381));
            var_23 = (max(var_3, (min(var_3, var_10))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_24 -= (arr_12 [i_1 + 3] [2]);
            var_25 = arr_17 [i_1] [i_1];
        }
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_26 = (((((20 ? (arr_17 [i_1] [i_5]) : 1122619347)) & (48797 >> var_9))));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((6765974526081700392 ? 1 : (((arr_23 [i_1 - 1]) * (arr_23 [i_1 + 1])))));
                    var_27 = var_9;
                    arr_25 [i_1] = ((((max(((var_11 ? 1 : (arr_12 [i_1] [i_1]))), (max(var_4, var_1))))) ? (((-(arr_22 [i_6] [1] [1])))) : (min(var_8, (arr_0 [i_1 + 4] [i_5 - 3])))));
                }
            }
        }
        var_28 = (arr_17 [i_1] [i_1]);
    }
    var_29 = ((max(var_9, (-2065082466 * var_8))));
    #pragma endscop
}
