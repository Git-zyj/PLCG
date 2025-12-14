/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~((min(var_16, -1751)))))) >= (max((((var_9 ? var_1 : var_11))), (max(18446744073709551615, var_11))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = ((((((((arr_1 [i_0 + 2]) ? var_10 : var_8))) && (arr_0 [i_0] [i_0]))) && (((((max(var_17, (arr_0 [i_0] [i_0 + 2])))) ? 0 : (max(var_0, var_6)))))));
        var_21 = (((((((((arr_0 [i_0] [i_0]) && 18571))) ^ (arr_1 [i_0 + 1])))) ^ (max((arr_0 [i_0] [i_0 + 1]), var_5))));
        var_22 = max((1 / 1), (arr_1 [i_0 + 1]));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_23 = arr_0 [8] [i_1];
        var_24 = (((((74 << (arr_1 [i_1 + 2])))) ? (((!((((arr_0 [1] [i_1]) ? (arr_1 [i_1]) : var_9)))))) : (arr_1 [i_1 - 1])));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (arr_4 [i_2 + 1])));

        for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (((((var_12 ? 27220 : var_15)) != (arr_1 [i_3 - 1]))))));
            arr_8 [i_3 + 1] [i_2] [i_2] = (min((arr_4 [i_2]), (arr_3 [i_2] [i_2])));
            arr_9 [i_2] = ((((!(-32767 - 1)))));
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_27 = (((var_1 - 4735819976536984310) > var_11));
            var_28 = ((34 >> (-10421 + 10448)));
            var_29 &= (max(var_12, (arr_1 [i_2 + 2])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_30 = (min(var_30, (((((max((~9648), var_13))) ? var_8 : var_17)))));
                        var_31 = (max(var_31, (arr_17 [i_4] [i_6])));
                        var_32 &= var_1;
                    }
                }
            }
        }
        var_33 &= (max((arr_13 [i_2 + 1]), (((arr_13 [i_2 - 1]) ? var_10 : 9662))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            {
                arr_24 [i_7] = 18773;
                var_34 -= ((!(((((arr_22 [i_7] [i_7]) ? 3056512853784324411 : var_4))))));
            }
        }
    }
    #pragma endscop
}
