/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((41287 ? var_1 : ((((var_11 ? var_6 : var_2)) ^ (~5930843993949431475)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = (((((arr_1 [i_0]) ? var_0 : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((((!(arr_1 [i_0]))))));
        var_15 = ((((((((41451 ? var_9 : (arr_0 [8] [i_0])))) ? ((((arr_0 [i_0] [i_0]) ? var_2 : 24268))) : -var_11))) ? ((var_4 ? 42166 : var_11)) : (((arr_2 [i_0] [1]) ? var_12 : ((4294967295 ? 4286387782451707579 : 17))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_4 [i_1] [11]) / var_5));
        arr_6 [10] = 926;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((((min(3214691294, 64016))) ? ((14697185015274054004 ? ((var_3 ? 12515900079760120166 : 4294967295)) : (((var_12 ? 65512 : 36777))))) : 24265));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    {
                        var_17 = (min(var_17, (--3214691294)));
                        arr_21 [i_3] [5] [10] [5] [i_3] = (((!((!(arr_14 [0]))))) ? (max(3608419328336545908, 2147483647)) : 0);
                        var_18 = ((!(((1050069206 << ((((2147483616 ? var_8 : 17592186044415)) - 4166095559)))))));
                        var_19 *= 0;
                    }
                }
            }
        }
        var_20 = (min((arr_7 [i_2]), ((var_2 ? -var_12 : 17592186044415))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_21 &= ((var_6 - (arr_17 [i_6] [i_6])));
        var_22 = (((arr_8 [i_6]) && 10));
        var_23 = (!var_7);
        var_24 -= var_2;
        arr_25 [10] = ((var_4 ? 65535 : (arr_24 [4])));
    }
    #pragma endscop
}
