/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((min(244, var_15))) > 5581))) | var_10);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = (((max((arr_2 [i_0 + 2]), (arr_1 [i_0 + 1]))) | (28 - -124)));
        var_20 |= (((((((65517 ? var_2 : (arr_0 [4])))) / ((var_4 ? (arr_2 [12]) : 65517))))) ? ((((min((arr_0 [0]), 36))) ? var_12 : (arr_1 [i_0]))) : (((((max(var_16, (arr_0 [16])))) ? (((arr_1 [i_0]) ? var_8 : var_17)) : 19))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_21 = (i_1 % 2 == 0) ? ((((arr_0 [i_1]) << (((arr_0 [i_1]) - 23906))))) : ((((arr_0 [i_1]) << (((((arr_0 [i_1]) - 23906)) + 23227)))));
        arr_6 [i_1] = (arr_5 [i_1 + 1]);
        var_22 = ((((max(18, (arr_4 [i_1] [i_1])))) ? (((arr_3 [i_1 - 1] [i_1]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (3929346976 <= -18241))) : (((((var_4 & 3795691178915889821) != (((40 >> (-18241 + 18269))))))))));
        var_23 -= (((((arr_2 [i_1 + 1]) << (((arr_2 [i_1 - 1]) - 1245931766916022055)))) > (arr_2 [i_1 + 1])));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] = (((18 ? 4276171908625769418 : -3795691178915889821)));
                    arr_15 [6] [6] [i_4] = (min((((((var_7 ? 32 : (arr_13 [i_2 + 1] [i_3] [i_4])))) - (((arr_5 [2]) ? (arr_3 [i_2] [i_3]) : 24)))), ((var_2 ? (((min(58441, 17)))) : 4294967272))));
                }
            }
        }
        var_24 = (min(var_24, (((((max(((4294967280 << (((arr_4 [1] [i_2]) - 3413338416)))), 3221889689))) | (((((arr_3 [i_2] [i_2 - 1]) ? var_3 : 54649)) - ((((-13 + 2147483647) >> (((arr_1 [i_2 + 1]) - 32))))))))))));
        var_25 = var_0;
        var_26 ^= (((((~((((arr_12 [i_2] [i_2] [i_2 + 1] [i_2]) > 900917211936748852)))))) ? (min((arr_12 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1]), (arr_12 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (var_1 * 46)));

        /* vectorizable */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_27 |= 1;
            arr_18 [i_2] [i_5] [i_5 - 1] = 3221889668;
            arr_19 [i_5] = (((arr_2 [i_2 + 1]) > (arr_17 [i_2 - 1] [i_5 - 1])));
            arr_20 [i_2] [i_5] [i_2] = (arr_11 [i_2 - 1]);
        }
    }
    var_28 = (((max((min(var_13, 15)), (((53215 ? var_6 : 15))))) > (var_16 == var_7)));
    #pragma endscop
}
