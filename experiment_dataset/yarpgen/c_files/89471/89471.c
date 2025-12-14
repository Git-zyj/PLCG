/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? var_3 : (max(var_4, (~var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (arr_0 [1])));
        var_12 *= (arr_0 [8]);
        var_13 = (max(var_13, (~1)));
        arr_4 [i_0] [i_0] = 1;
        arr_5 [i_0] = ((((0 ? 65533 : (arr_1 [i_0]))) * (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = -7181051517424870813;

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_13 [i_1] [i_1] = 1;
            arr_14 [i_1] = ((~(0 - 12201)));
            var_14 ^= (min((arr_8 [1] [i_2]), (((!(((var_1 ? 7181051517424870813 : 8191257765666679497))))))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_15 = 239117252;
                var_16 = (max(var_16, ((((((!(arr_6 [i_3])))) <= ((((!(arr_17 [i_1 - 1] [i_1 - 1] [i_3]))))))))));
                var_17 = var_9;
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_18 = ((((((((arr_16 [i_1] [i_1] [i_4] [i_4]) ? -506523932 : 1))) ? (arr_12 [i_1] [i_4] [i_1]) : ((1 ^ (arr_18 [i_1]))))) | ((-(arr_15 [i_1] [i_1] [i_1])))));
            arr_20 [i_1] [i_1] = (arr_6 [i_1]);
        }
        arr_21 [i_1] [i_1] = ((((min((arr_10 [i_1 - 2]), (arr_10 [i_1 - 3])))) ? ((var_6 ? (arr_10 [i_1 - 3]) : (arr_10 [i_1 + 1]))) : (((arr_10 [i_1 + 1]) + (arr_10 [i_1 - 1])))));
        arr_22 [i_1] [i_1] = (min(1, (arr_19 [i_1])));
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_26 [1] [7] = ((-7181051517424870826 ? ((((arr_18 [0]) ? ((((!(arr_24 [5]))))) : ((-7181051517424870810 ? 2934751010877678951 : 7181051517424870819))))) : (max((min(9052932271407428733, (arr_11 [2] [2] [i_5 - 2]))), (((var_4 ? var_3 : 8731)))))));
        var_19 = (max((!var_9), (max((min(var_8, (arr_6 [12]))), (arr_19 [i_5 - 3])))));
        var_20 = var_3;
        arr_27 [i_5 - 3] = -5804224165899707883;
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_21 = (max(var_21, 1));
        var_22 = (min(var_22, (arr_16 [16] [1] [i_6 - 3] [i_6 - 3])));
        arr_30 [i_6] = var_2;
        var_23 = ((+(max((arr_7 [1]), 268435456))));
    }

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_33 [i_7] = ((((((((arr_32 [i_7] [i_7]) / 467327417))) ? (((arr_32 [i_7] [i_7]) ? var_9 : 9052932271407428735)) : (((max(var_9, 1))))))) ? var_2 : (((((((arr_31 [i_7]) ? var_0 : var_2))) ? 127 : (arr_32 [i_7] [i_7])))));
        var_24 = var_2;
        var_25 = (max(var_25, ((max(9223372036854775807, (((arr_31 [i_7]) - var_2)))))));
        arr_34 [i_7] = (max(var_7, ((max((arr_31 [i_7]), (arr_31 [i_7]))))));
        var_26 = 60258;
    }
    #pragma endscop
}
