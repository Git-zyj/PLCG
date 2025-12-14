/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_2));
    var_17 = (max(var_14, var_11));
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_3 [i_0 + 1] [i_0] [i_0 - 1]) ? var_12 : (arr_3 [i_0 - 1] [i_0] [i_0 + 2])))) ? (((arr_2 [i_0 - 2] [i_0 - 2]) - (arr_2 [i_0 - 1] [i_0 - 2]))) : (199 || 97357890)));
                    var_20 = ((((-var_6 || (((var_15 ? (arr_1 [i_0] [i_2]) : (arr_5 [i_0] [i_0] [i_0] [i_0])))))) ? ((97357890 ? 18 : 2533)) : ((var_4 ? (arr_4 [i_2] [i_1]) : 58685424))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_21 = (min(var_21, (((!517066172) ^ 373840092))));
        var_22 = ((-(arr_9 [i_3] [i_3])));
        arr_10 [i_3] = ((11 ? (4294967284 == 39) : var_4));
        var_23 = ((arr_4 [i_3] [i_3]) ? (arr_4 [i_3] [i_3]) : (arr_4 [i_3] [i_3]));
    }
    #pragma endscop
}
