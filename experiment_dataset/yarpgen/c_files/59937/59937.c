/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] = (1 > 1);
                        arr_11 [i_0] = (1 <= 1008806316530991104);
                        var_12 = (((~(arr_2 [i_0 + 1]))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (arr_2 [i_0 + 1]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_13 = (((~1) ? ((854144147 ? (arr_15 [i_4]) : (arr_14 [i_4] [i_5]))) : (((arr_15 [1]) ? 1 : 1))));
            arr_17 [i_4] [i_5] [i_5] = (((!554153860399104) ? (((arr_14 [i_5] [i_5]) % 1)) : 36846));
            var_14 -= (((arr_15 [i_5]) ? (arr_15 [i_5]) : (arr_13 [i_4])));
            var_15 = ((3447236983 ? -1 : (((arr_15 [i_4]) ? 2989319038 : 854144147))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_22 [i_6] = (!(((5928 ? 0 : 1))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_27 [i_9] [i_9] [i_9] [i_9] [2] = (((arr_23 [i_8] [i_6] [i_7] [i_9]) ? 1 : (arr_24 [i_7])));
                            arr_28 [i_4] [i_9] [1] [i_8] [i_9] [i_4] [i_4] = (i_9 % 2 == zero) ? ((((((arr_21 [1] [4] [i_6]) >> (((arr_26 [i_4] [i_4] [3] [i_8] [i_9]) - 36287)))) ^ (!1)))) : ((((((arr_21 [1] [4] [i_6]) >> (((((arr_26 [i_4] [i_4] [3] [i_8] [i_9]) - 36287)) - 28887)))) ^ (!1))));
                            var_16 = ((((-(arr_16 [i_4] [i_6] [i_8])))) ? ((((arr_21 [16] [i_6] [i_7]) ? 23 : (arr_21 [i_6] [i_6] [i_6])))) : ((0 ? (arr_16 [i_4] [i_6] [i_8]) : (arr_18 [i_9]))));
                            var_17 = ((36846 + 1) ? (arr_14 [i_4] [i_6]) : (arr_19 [i_4] [i_4]));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_34 [i_10] [i_11] = (~1);
                            var_18 = (min(var_18, (arr_18 [i_4])));
                        }
                    }
                }
                arr_35 [i_4] [i_4] [i_4] [i_7] = arr_32 [i_4] [i_4] [i_4] [i_6] [i_7] [i_6];
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_38 [i_12] [2] [i_4] [i_4] = ((((arr_29 [i_6] [6] [i_6] [i_12]) ? 0 : 1)));
                var_19 += ((36855 ? 683 : 7753006349580079918));
                arr_39 [i_4] [i_6] [i_12] = ((!(((5934 ? (arr_24 [i_4]) : 2860355650)))));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    {
                        arr_45 [i_4] = (arr_30 [i_4] [i_6] [1] [i_14]);
                        var_20 = 23;
                    }
                }
            }
            var_21 = ((-(((arr_16 [i_4] [i_6] [i_4]) ? 1947333595 : (arr_16 [i_4] [i_4] [i_4])))));
        }
        arr_46 [i_4] |= ((~(arr_25 [i_4] [i_4] [i_4] [i_4] [17])));
        var_22 = 17529250251154142954;

        /* vectorizable */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_23 = (max(var_23, (arr_13 [i_4])));
            arr_51 [i_4] [1] [i_4] = (((((arr_15 [i_15]) ? 7823 : (arr_36 [i_15] [2] [1] [i_15]))) % ((((arr_30 [i_4] [1] [i_4] [i_15]) << (((arr_49 [i_4] [i_15]) - 18196716789393037606)))))));
        }
    }
    var_24 = 7716706680543858687;
    var_25 = (~4241212799397806272);
    #pragma endscop
}
