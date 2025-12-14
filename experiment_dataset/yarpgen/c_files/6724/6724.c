/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((1717240 & (max(15786869306155590680, -15786869306155590668))));
        arr_3 [i_0] [i_0] = var_4;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_11 = ((!(4293250055 - var_7)));
                        arr_11 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = (((((arr_4 [i_1] [i_1 + 2]) ? (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 5621204691895234869 : 63423)) : -var_6)) - (arr_9 [i_3] [i_0])));
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = (((((((((var_6 || (arr_4 [i_0] [i_1]))))) - (127 ^ 7)))) ? (((1717240 ? (2899157522 >= 29024) : 41382))) : (arr_5 [i_3] [i_2] [i_1])));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (-((1 ? 18446744073709551596 : (~2659874767553960928))));
        arr_14 [i_0] [i_0] &= (arr_7 [10] [6] [i_0] [i_0]);
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_18 [17] = ((((((arr_15 [i_4 - 1] [i_4 + 1]) ? (arr_16 [i_4 + 1]) : var_3))) - (min(var_10, 29024))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_12 = (~1);
            arr_21 [i_5] = (--12825539381814316746);
            var_13 = (min((min((1 + var_6), ((min((arr_15 [i_5] [i_4 + 1]), (-127 - 1)))))), 1));
        }
    }

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_24 [1] |= ((var_7 & ((((arr_15 [i_6] [i_6]) || var_7)))));
        arr_25 [i_6] = ((((((arr_19 [i_6] [i_6] [i_6]) ? (arr_19 [i_6] [i_6] [i_6]) : var_0))) ? (!var_5) : ((((((arr_19 [i_6] [17] [i_6]) - 61))) ? var_10 : var_0))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_29 [i_7] = (((arr_15 [1] [i_7]) + (arr_20 [i_7])));
        var_14 += (arr_20 [i_7]);
        var_15 = -var_6;
        var_16 -= var_5;
    }
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = max((min(var_3, var_4)), ((min((arr_23 [i_8 - 1] [i_8 - 1]), var_5))));
        arr_35 [i_8] = ((-((((arr_19 [i_8] [i_8 - 1] [i_8]) || (arr_19 [1] [i_8 - 1] [13]))))));
        arr_36 [i_8] = 65535;
        var_17 = (((!(var_9 - var_6))));
        arr_37 [0] = var_7;
    }
    var_18 += ((((!(!var_2))) ? var_4 : var_5));
    #pragma endscop
}
