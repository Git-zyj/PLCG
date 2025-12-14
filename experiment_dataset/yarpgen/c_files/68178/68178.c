/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 *= ((~(arr_0 [i_0])));
            var_14 = (~var_11);
            var_15 -= var_5;
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_16 = ((((max((arr_7 [i_0] [i_2 + 1]), var_0))) ? ((((arr_6 [i_2 - 2] [i_2 - 2]) ? (arr_6 [i_2 - 1] [i_2]) : (arr_6 [i_2 - 2] [13])))) : (arr_7 [i_0] [i_0])));
            var_17 = ((~(~var_1)));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_18 *= var_2;
            var_19 *= var_12;
        }
        for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_20 &= var_3;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        var_21 *= (((((~(arr_5 [i_5 - 1])))) ? (max((arr_5 [i_5 + 1]), (arr_5 [i_5 + 2]))) : (935988535 ^ 13985193469072461284)));
                        var_22 -= var_12;
                        var_23 = var_5;
                    }
                }
            }
            var_24 = (max(var_24, (!17687454939725742744)));
        }
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] = ((var_12 >= (min((arr_12 [i_8] [i_7] [13]), (arr_13 [i_8 - 1] [i_7] [i_7])))));
                        var_25 = (max(var_25, (((((((max((arr_7 [i_0] [i_7]), 1)) > -var_7)))) * var_11))));
                        var_26 = ((((min(4294967295, 1))) ? 4294967295 : (arr_23 [i_7 + 4] [i_7 + 4] [i_7 + 2] [i_7 - 2])));
                        arr_29 [i_7] = (max((min((~4461550604637090331), (arr_4 [i_0] [13] [i_8 + 1]))), (var_7 != var_4)));
                        var_27 |= (min(var_6, var_7));
                    }
                }
            }
        }
        var_28 = (min(((min(var_9, (arr_27 [i_0] [i_0] [i_0])))), (arr_12 [i_0] [i_0] [i_0])));
        var_29 = (max(var_5, (!var_3)));
        arr_30 [i_0] = (((!(arr_12 [i_0] [i_0] [i_0]))) ? (~-5768) : ((1 ? 3490626006 : 935988535)));
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_30 = var_6;
        var_31 = (max(var_31, (((!(((var_9 ? (((arr_31 [i_10 + 2]) ? 13985193469072461284 : var_12)) : (arr_31 [i_10 + 1])))))))));
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_32 = ((((var_4 && (arr_31 [i_11 - 1]))) ? (((((arr_32 [i_11 - 1]) == (max((arr_34 [6] [6]), var_0)))))) : (((arr_33 [i_11 + 1] [i_11 + 1]) ? (((arr_32 [i_11]) >> (arr_34 [i_11] [i_11 + 2]))) : (arr_33 [i_11] [i_11])))));
        var_33 *= ((((((!(arr_31 [i_11 - 2]))))) != 13985193469072461302));
    }
    var_34 += (min((((!(!var_10)))), (var_7 - var_6)));
    var_35 = (((!935988536) * (max(var_4, (((var_4 ? var_5 : var_5)))))));
    #pragma endscop
}
