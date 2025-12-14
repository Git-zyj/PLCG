/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (!0);
                var_14 += (((((!(-127 - 1)))) >= 125));
            }
        }
    }
    var_15 = (min(var_15, var_8));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_3] [i_2] = (((((((-(arr_13 [i_5] [i_4] [i_3] [i_2]))) | (arr_6 [i_3 - 1])))) % ((~(min(65530, 2146923080))))));
                        var_16 = arr_15 [i_3] [i_3] [i_4] [i_5];
                    }
                }
            }
        }

        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_17 = 2;
            var_18 = ((~(max((min(var_10, 2025843659)), 24))));
            var_19 = 24;
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = (min(var_20, (~-952520892)));
                            var_21 = (max((~6), (min(((var_8 >> (25214 - 25183))), (arr_15 [i_2] [i_6] [i_7] [i_8])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            var_22 = -3460;
                            var_23 = ((!(arr_31 [i_2] [i_6] [i_7] [i_7] [i_2] [i_7])));
                        }
                        arr_32 [i_7] [i_6] [i_6] = (arr_30 [i_2] [i_2] [i_2] [i_2] [i_7]);
                        var_24 = (((min((((-1073741824 ? 2269123636 : 61))), ((var_7 ? 3585411775991310885 : 1)))) + ((min((arr_15 [i_8] [i_8] [i_8] [i_7 - 2]), 1778524002)))));
                        var_25 = 2269123636;
                        arr_33 [i_2] [i_6] [i_7] [i_7] = (((((((6306212506178051815 << (144097595889811456 - 144097595889811456))) - (65517 != -1804557770)))) ? (min((arr_12 [i_7 - 1] [i_7] [i_6 - 2]), (arr_12 [i_7 - 1] [i_7] [i_6 - 1]))) : ((((2413099647780718183 != (arr_20 [i_8] [i_7] [i_6])))))));
                    }
                }
            }
            var_26 = (min((arr_29 [i_6]), (2025843653 % 11055403231929524843)));
        }
        var_27 = (((arr_26 [i_2]) + var_12));
    }
    #pragma endscop
}
