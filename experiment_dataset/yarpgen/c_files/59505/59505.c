/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_1, 2007708175))) ? (((342029157 << (var_5 + 7264063715259870931)))) : var_11)));
    var_13 = (min(((!((min(var_3, var_6))))), ((1 == (var_6 / var_10)))));
    var_14 = (max(var_14, -7912967449697172082));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((max((((-(arr_0 [i_0])))), (1216639884 | var_4))), (((arr_1 [i_0] [i_0]) ? ((2007708175 / (arr_0 [i_0]))) : var_7))));
        var_15 -= (max(((max((arr_1 [i_0] [i_0]), var_7))), (arr_1 [i_0] [7])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (((((1 ? 9223372036854775797 : 3952938118))) ? ((((((arr_4 [11] [11]) ? var_2 : (arr_5 [i_0] [i_0])))))) : (((((3497049351 << (var_9 - 8977891257887238281)))) ? var_5 : var_1))));
                        arr_11 [i_0] [i_1] [i_1 + 1] [i_3] = arr_4 [i_0] [i_0];
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(var_8, (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))) ? (arr_6 [i_0] [0]) : ((((((arr_5 [i_0] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_7 [i_0] [5] [i_1] [i_3])))) ? 2007708175 : -var_5))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_17 *= (((arr_14 [i_4] [i_4 + 1]) ? (max(30132, (arr_15 [i_4] [i_4]))) : ((((max(4294967278, (arr_14 [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_5] = ((((min((arr_15 [i_6 - 1] [i_5 + 2]), (arr_15 [i_6 - 1] [i_5 + 4])))) ? ((((arr_15 [i_6 + 1] [i_4]) + var_2))) : 9223372036854775797));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_30 [i_4] [i_4] [i_6 + 1] [10] [i_6 + 1] = var_5;
                                var_18 |= ((!(3952938113 + 1)));
                            }
                        }
                    }
                    var_19 *= (arr_18 [i_4] [i_4]);
                }
            }
        }
        arr_31 [i_4] [i_4] = (min((((arr_23 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 2]) << ((((-18658 ? 2287259120 : -8649)) - 2287259109)))), -1945));
        arr_32 [i_4] = var_3;
    }
    #pragma endscop
}
