/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -11935;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_21 = ((~(min(var_4, ((1 << (31829 - 31802)))))));
        arr_3 [i_0] [i_0] = (min((min(-283580720, (~18410715276690587648))), ((+(min((arr_0 [8]), (arr_2 [0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [1] [i_1] [i_2 + 1] [i_2] [i_3] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                        var_22 = (((arr_4 [i_0]) >> (283580738 || -3426)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_23 &= min((((+(((arr_4 [i_4]) >> (((arr_1 [i_4]) + 732193880))))))), 15743776558757258969);
        arr_13 [4] [i_4] |= ((var_12 ? ((((arr_11 [0]) & ((min((arr_0 [i_4]), (arr_5 [i_4] [i_4]))))))) : (min(((var_4 ? (arr_7 [i_4] [i_4] [i_4] [i_4]) : (arr_2 [1]))), 3609040473779956142))));
        var_24 = (((((!((!(arr_8 [i_4] [i_4] [i_4])))))) & ((min((arr_4 [i_4]), var_12)))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_25 = ((((~(arr_8 [i_5] [i_5] [i_5])))) ? (!var_17) : ((~(arr_5 [i_5 - 1] [i_4]))));
            arr_17 [i_4] [i_4] [i_4] = (arr_11 [i_4]);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_22 [i_6] [i_4] [0] = -9121436978963288847;

            /* vectorizable */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_29 [i_4] [i_4] [1] [1] = (((arr_12 [i_6]) ? (arr_2 [0]) : (arr_12 [i_6])));
                    var_26 = (arr_1 [i_6]);
                    arr_30 [i_4] [i_6] [i_4] [i_7] [i_4] [i_4] = var_15;
                    arr_31 [i_4] [i_4] [i_6] [i_6] [i_4] [i_8] = (arr_2 [i_4]);
                }
                arr_32 [1] [4] [i_7] &= (arr_28 [i_4] [i_6] [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 3]);
                var_27 = (min(var_27, (((!(((0 ? (arr_21 [i_4] [i_6] [i_7]) : var_8))))))));
            }
            for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
            {
                var_28 ^= (((~var_15) ? (min((arr_8 [11] [i_6] [i_6]), (arr_9 [i_9 + 1] [2] [i_9] [2] [2]))) : ((((~(arr_27 [i_9 + 2] [i_9] [i_6] [i_4])))))));
                arr_35 [i_4] [i_4] [0] [i_9] = (arr_14 [i_4] [i_4]);
            }
            for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
            {
                var_29 = ((!(((~(arr_25 [i_10 + 2] [i_10 - 1] [i_10 - 1]))))));
                arr_40 [i_4] [i_6] [i_4] [3] = (min(((((var_5 ? (arr_34 [i_4]) : (arr_6 [1] [i_6] [8] [i_6]))) >> (((min(-5274347254629869950, (arr_18 [i_4] [i_4]))) + 5274347254629869999)))), (((((((arr_2 [i_10]) ? var_6 : var_8))) ? (arr_39 [i_6] [i_10] [i_10 - 1] [i_4]) : (min((arr_11 [i_6]), (arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_10]))))))));
            }
            arr_41 [i_4] = min(1, 15843066236992119008);
            arr_42 [i_4] = var_14;
        }
    }
    #pragma endscop
}
