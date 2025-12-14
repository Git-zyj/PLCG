/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] |= (((((767664603 & (arr_2 [i_0])))) ? (~3106496105) : (((~(arr_0 [i_0]))))));
        arr_4 [i_0] = (max(4877, ((min((!3527302710), (!var_3))))));
        var_15 = ((-26174 ? var_8 : (arr_0 [i_0])));
        arr_5 [i_0] [i_0] = ((-4860 ? ((min(-4855, (min(4343, 85))))) : 3998));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (arr_7 [i_1]);

        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_17 = (max((((!(arr_8 [i_1])))), (((((23957 ? (arr_8 [i_1]) : 1))) ? (767664568 >= -10394) : ((max(11740, (arr_6 [i_1] [i_1]))))))));
            arr_12 [i_1] [i_2] = (max((max(var_6, 0)), (max(64, -23166))));
            arr_13 [i_1] = (i_1 % 2 == 0) ? ((((max(((10393 ? (arr_11 [i_1] [i_1]) : (arr_9 [i_1]))), (min((arr_9 [i_1]), (arr_11 [i_1] [i_1]))))) << ((((-((~(arr_6 [i_1] [i_1]))))) - 8382))))) : ((((max(((10393 ? (arr_11 [i_1] [i_1]) : (arr_9 [i_1]))), (min((arr_9 [i_1]), (arr_11 [i_1] [i_1]))))) << ((((((-((~(arr_6 [i_1] [i_1]))))) - 8382)) + 20596)))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_18 [i_1] [i_1] = (arr_7 [i_3]);
            var_18 = ((!(((((max(30, 10393))) ? (min((arr_7 [i_1]), -32181)) : (((-32508 ? (arr_8 [i_1]) : (arr_16 [i_3])))))))));
            arr_19 [i_1] [i_1] [i_1] = ((~(max((arr_7 [i_1]), -4195421583))));
            arr_20 [7] [i_1] [7] = ((((((((arr_16 [i_3]) && 1188471191)) ? (arr_10 [i_1]) : ((~(arr_17 [i_1] [0] [i_1])))))) && -120));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_19 &= ((-((~(arr_14 [16])))));
            var_20 = ((~(arr_6 [i_1] [i_1])));
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_25 [i_5] [i_5] = (~(max(-2156794802, var_6)));
        arr_26 [i_5] [i_5] = var_14;
        var_21 = (arr_22 [i_5] [i_5] [i_5]);
        var_22 += (((((15310 ? 12983 : (arr_15 [i_5] [i_5] [i_5])))) ? (((arr_15 [i_5] [i_5] [i_5]) ? 2138172482 : 188)) : (((99 ? 85 : (arr_15 [i_5] [i_5] [i_5]))))));
        arr_27 [i_5] = ((((max(((var_8 ? (arr_7 [8]) : 1)), var_0))) ? (max((arr_22 [i_5] [i_5] [i_5]), 832693024)) : (((-40 * (arr_9 [1]))))));
    }
    var_23 = (min((((((29540 ? var_0 : 1089202371))) ? (~4065378875) : (((min(1, var_9)))))), -var_2));
    var_24 = var_13;
    var_25 = var_14;
    #pragma endscop
}
