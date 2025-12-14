/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~var_4) >= (((min(var_5, 61)))))) ? ((~(0 & var_12))) : var_2));

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_17 *= var_1;
            var_18 = (min((((((min((arr_1 [i_0]), var_5))) ? var_8 : 255))), (arr_0 [i_0])));
            var_19 = (((min(1, -29206))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_20 ^= (arr_6 [i_0]);
            var_21 = var_2;
            var_22 = (min(44164, (arr_3 [i_2])));
        }
        var_23 *= ((((min(((~(arr_2 [i_0 - 1] [i_0]))), (~var_6)))) == (((arr_2 [i_0] [i_0 - 4]) / (arr_6 [i_0 - 2])))));
    }
    for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (arr_2 [i_3] [i_3]);
        var_24 += (arr_6 [i_3]);
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_25 = min((min((arr_2 [i_4 - 1] [i_4]), 1946066454)), (((var_9 || var_15) ? (min((arr_13 [i_4] [i_4 - 1]), var_11)) : 248)));
        arr_16 [i_4] = ((18446744073709551615 - (arr_4 [2] [i_4] [i_4 + 1])));
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((((arr_28 [i_7] [i_7 + 2] [i_7 + 2]) > (((((arr_28 [i_7] [i_7 + 1] [i_7 + 2]) && (arr_28 [i_7 + 1] [i_7 + 2] [i_7 - 1]))))))))));
                                arr_30 [i_6] [i_8] [i_6] [i_6 + 2] [i_6] [i_5] = 62;
                                var_27 = (min((min(4044312313546607716, (arr_25 [i_5] [i_5 + 2] [i_6 - 1] [1]))), var_0));
                                var_28 = (arr_15 [i_9]);
                                var_29 += (min((min((((arr_14 [i_5]) - var_7)), ((min((arr_24 [i_5] [i_8] [i_9]), (arr_25 [i_5] [i_6 - 1] [i_8] [i_8])))))), 7309640654847635172));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_30 = (max(var_30, 2307));
                            var_31 = (min(var_31, (((((min(((var_6 ? (arr_1 [i_5]) : 18446744073709551611)), (arr_3 [i_5 - 3])))) ? ((-(arr_29 [i_5] [i_5 + 2] [i_5] [i_10] [i_10] [i_10] [i_11]))) : var_8)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
