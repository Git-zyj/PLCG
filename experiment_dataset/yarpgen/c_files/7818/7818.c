/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-268435456 ? 8128107847685393221 : -113));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (((((3497351478 ? -113 : 1956511421))) >= (((!((4143895136222459970 || (arr_0 [i_0]))))))));
        var_20 = var_6;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_21 &= ((+((~((1 ? (arr_0 [i_1]) : (arr_3 [i_1 + 1])))))));
        arr_6 [i_1] = (((((arr_1 [i_1 + 2]) * ((max((arr_5 [i_1]), 112)))))) ? (((arr_5 [i_1 - 1]) ? ((0 ? (arr_3 [i_1]) : (arr_5 [i_1]))) : ((min(-112, var_0))))) : ((min((max(9223372036854775807, var_13)), (((~(arr_5 [i_1]))))))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (min(82647075, 18446744073709551612));
        var_22 = (min((arr_8 [i_2 - 1] [8]), (((arr_7 [i_2 - 3] [2]) ? -1 : 0))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            {
                var_23 = -71;
                var_24 = ((~((((max((arr_11 [i_3] [i_4]), var_12))) ? 78 : ((-(arr_12 [i_3 - 1])))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_23 [i_4] [i_3 + 1] [i_4] [i_3 - 1] [i_3 - 1] [i_3] = 128;
                            arr_24 [i_4] = (((arr_4 [i_3]) * 16));
                        }
                    }
                }
            }
        }
    }
    var_25 += (((((((max(0, var_12))) ? ((116 ? var_4 : var_10)) : var_16))) ? ((var_12 ? (min(var_1, 1)) : var_5)) : ((max((~-2048), var_9)))));
    var_26 *= ((((((((var_10 ? var_8 : 1))) ? var_14 : ((min(var_5, var_14)))))) ? ((((var_15 ^ 54431) ? ((126 ? var_9 : 132)) : var_2))) : ((var_5 ? (1 & var_1) : var_13))));
    #pragma endscop
}
