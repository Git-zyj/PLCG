/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_12 = (min(var_12, ((((((((~(arr_6 [i_0] [i_0] [i_4] [7])))) ? 4194102634156264121 : (((max((arr_2 [i_4]), var_10)))))) << (((57424 % 12582912) - 79)))))));
                            var_13 &= ((-(arr_0 [i_0])));
                            var_14 &= (arr_10 [i_0] [i_2 - 3] [i_2 + 1] [i_3]);
                            var_15 = (max(var_15, ((((arr_9 [i_4] [12] [i_3] [i_4]) ? (((arr_2 [i_3]) ? (arr_2 [i_0]) : var_10)) : ((((arr_5 [i_3]) != (arr_5 [i_4])))))))));
                        }
                        arr_12 [i_3] [i_1] [i_2 + 1] [i_1] [i_2] [i_0] &= ((((((var_8 / (arr_5 [i_0]))))) ? ((-(min(18446744073696968703, var_10)))) : (((arr_9 [i_3] [i_2] [i_3] [i_3]) ? ((12582912 ^ (arr_0 [i_2]))) : 12582904))));
                        var_16 = (min(var_16, (((((((((arr_0 [i_3]) ? 18446744073696968689 : (arr_2 [i_2])))) ? 0 : (((arr_9 [i_3] [i_1] [i_1] [i_3]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_2]))))) >= 7875917225658231850)))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_17 &= (((arr_3 [i_0] [i_0]) % 7875917225658231840));
                            arr_15 [i_5] [i_5] [i_5] [i_0] |= arr_2 [11];
                            arr_16 [i_5] [i_3] [i_2] [i_5] [i_0] [i_1] [i_0] &= (((((arr_14 [i_0] [i_2 + 1] [i_2 + 1] [i_3] [i_5] [i_5] [i_0]) != (arr_8 [i_0] [i_2 - 3] [i_5] [i_3]))) ? -6 : ((var_9 ? (arr_9 [i_5] [i_2 + 1] [i_5] [i_5]) : var_8))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_18 ^= ((240 ? var_8 : var_10));
                        var_19 &= ((+(((var_5 || var_9) ? -var_8 : ((max((arr_10 [i_0] [4] [4] [i_0]), (arr_8 [i_0] [i_1] [i_2] [i_0]))))))));
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_20 = (min(var_20, (arr_6 [i_8 + 1] [i_7] [i_2] [i_0])));
                            var_21 -= (((arr_19 [i_0] [i_8 - 1] [i_8] [i_8] [4]) ? (((arr_3 [i_1] [i_1]) ? (arr_2 [i_1]) : var_11)) : (arr_22 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_22 = (max(var_22, (((23337 != (arr_6 [i_0] [i_1] [i_0] [i_7]))))));
                            var_23 = (max(var_23, (arr_0 [i_9])));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] &= min((arr_25 [i_7] [i_7] [2] [i_1] [i_0] [i_7]), (!var_0));
                        }
                        arr_27 [i_7] [i_2] [i_7] [i_7] [i_7] &= (~(((7 != ((((arr_4 [i_7] [i_2] [i_1] [i_0]) ? (arr_7 [i_1] [i_0] [i_2] [i_1] [i_0] [i_0]) : var_3)))))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_10] &= (((arr_4 [i_10] [i_7] [i_1] [i_0]) ? 18446744073696968704 : var_6));
                            var_24 -= var_5;
                            var_25 = (min(var_25, (arr_19 [i_0] [i_7] [i_7] [i_7] [i_7])));
                            var_26 |= (((arr_14 [i_10] [i_10] [i_2 + 1] [i_2] [i_2] [i_2 - 3] [i_2 - 3]) >> ((((var_2 << 1) <= (max(511, 4294967295)))))));
                        }
                    }
                    var_27 &= (arr_13 [i_0] [i_2 - 3]);
                    arr_31 [i_0] [i_2] [i_1] [i_0] &= ((((arr_6 [i_0] [i_1] [i_2 + 1] [i_2 + 1]) ? var_9 : (arr_6 [i_0] [i_2 - 2] [i_2 + 1] [i_0]))));
                }
                var_28 &= 0;
            }
        }
    }
    var_29 &= ((((!((max(-5, 1))))) && ((!((min(23359, 4294967295)))))));
    #pragma endscop
}
