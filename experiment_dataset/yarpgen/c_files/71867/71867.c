/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((32519 ? (1 != -4) : var_0)), (((var_5 || ((max(1, 21945))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(((((arr_0 [i_0]) != (arr_1 [i_0])))), ((((((~(arr_0 [1]))) + 2147483647)) << (1 - 1)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (min(var_20, var_14));
            var_21 = (min(var_21, (((~(arr_2 [10] [i_0] [i_0]))))));
            var_22 *= (((arr_0 [i_0]) * (arr_2 [1] [i_0] [i_1])));
            var_23 -= (((arr_1 [i_0]) % (arr_3 [1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_11 [i_1] [i_3] [i_1] = var_4;
                            var_24 = (max(var_24, ((((!var_1) / (((arr_10 [i_0] [1] [i_0] [i_0] [i_0] [i_0]) ? 1 : (arr_4 [i_0] [12] [i_4]))))))));
                            var_25 = 1;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_26 *= var_12;
                            var_27 = ((~(arr_3 [i_1])));
                            var_28 = ((arr_0 [i_1]) && (arr_7 [i_0] [i_1] [1] [i_3]));
                            var_29 = arr_3 [i_1];
                            arr_14 [i_0] [i_0] [i_1] [i_1] [i_3] [1] [i_5] = (~var_10);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_30 |= (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 0));
                            var_31 ^= (((((-(arr_17 [1] [i_2] [i_2] [i_3] [i_3] [i_6])))) ? (arr_16 [i_6] [1] [i_2] [i_1] [i_0]) : (((arr_1 [10]) ? 1 : var_6))));
                        }
                        var_32 = (!var_14);
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            arr_22 [i_7] [i_7] = (!var_1);
            var_33 = ((~((max((arr_7 [i_0] [i_0] [i_0] [i_0]), (!var_12))))));
        }
        arr_23 [i_0] [i_0] |= ((arr_17 [i_0] [1] [i_0] [i_0] [i_0] [10]) && ((min((~0), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1])))));
    }
    var_34 = (~var_14);
    #pragma endscop
}
