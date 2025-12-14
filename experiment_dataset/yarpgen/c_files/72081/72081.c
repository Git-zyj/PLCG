/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((59054 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? 6482 : ((~(arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = (min(((max(2962497833, 218))), (max((arr_1 [i_0]), (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_8 [i_0] = ((~(arr_3 [i_0] [i_1])));

            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                arr_11 [5] [8] [16] [i_0] = var_15;
                arr_12 [i_1] [i_0] = var_5;
                arr_13 [i_0] = ((var_14 - (arr_9 [i_0] [i_2] [i_2])));
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                arr_18 [i_3] [i_0] [i_0] = ((~(arr_1 [i_0])));
                arr_19 [i_0] [10] [i_0] = ((arr_6 [i_0] [i_0] [i_3]) * (((arr_2 [i_0] [i_0]) ? 2962497835 : (arr_6 [i_3] [4] [4]))));
                arr_20 [8] [8] [8] [i_3] = (((arr_1 [i_0]) ^ (arr_1 [i_0])));
            }
            arr_21 [i_0] [i_0] = var_2;
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_24 [i_4] [i_0] [11] = ((-(max((max(var_18, 7)), (arr_6 [8] [i_4] [i_4])))));
            arr_25 [i_0] = (((((((min((arr_15 [i_0]), var_18))) ? 3968 : ((max((arr_16 [i_0] [i_4]), (arr_0 [i_0] [17]))))))) ? ((((arr_1 [1]) != var_6))) : ((max(var_6, (arr_23 [i_4 - 1] [i_4 - 1] [i_4 + 1]))))));
            arr_26 [4] = (min((arr_22 [i_4 + 2] [i_4 + 2]), (~7)));
        }
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_32 [i_5] = var_3;
            arr_33 [i_5] = (~var_3);
        }
        arr_34 [i_5] = (max((((var_13 ? 0 : (var_0 != var_5)))), (max(((3957 ? var_13 : (arr_30 [i_5] [i_5]))), (arr_31 [i_5] [i_5])))));
        arr_35 [i_5] = (max((((!(arr_28 [i_5])))), (((var_7 ? var_6 : var_4)))));
        arr_36 [i_5] = (((arr_27 [i_5]) ? (arr_27 [i_5]) : (arr_27 [i_5])));
    }
    #pragma endscop
}
