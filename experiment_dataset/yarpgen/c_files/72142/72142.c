/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((!(((arr_1 [15] [i_0]) && (arr_0 [i_0])))))));
        var_18 &= ((-var_11 | (arr_0 [4])));
        var_19 = var_3;
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 &= ((max(((var_17 ? var_11 : var_4), var_9))));
        arr_6 [i_1] = ((-var_2 ? ((var_0 + (arr_3 [i_1] [i_1]))) : (~var_0)));

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_10 [8] = (-(min(var_14, ((max((arr_5 [i_2]), var_4))))));
            var_22 = (max(var_22, var_17));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_23 -= (((((arr_5 [7]) ? (((~(arr_7 [i_3] [i_5] [i_6])))) : (max((arr_8 [i_1]), var_2))))) ? (arr_0 [i_6]) : (((!(((var_9 ? var_7 : (arr_8 [i_1]))))))));
                            var_24 = (max(-var_9, (arr_20 [i_1] [i_1] [i_1] [i_4] [i_1])));
                            var_25 = var_17;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 6;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((2130610186 ? var_4 : ((var_3 ? var_0 : (arr_27 [i_7 + 1] [i_8 - 1] [i_9 - 2] [i_8 - 1]))))))));
                            var_27 = (min(var_27, var_17));
                            var_28 ^= (--4825);
                            arr_30 [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 1] [2] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_29 = ((var_13 ? (min(((var_15 ? var_11 : var_16)), ((min(var_5, var_4))))) : ((((var_14 == (min(-8278976762896164938, 65535))))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                var_30 = (((((((((arr_33 [i_10] [i_11]) ? var_10 : (arr_31 [i_10])))) ? (max(var_0, var_17)) : ((((arr_34 [i_10]) ? (arr_32 [i_10]) : var_17)))))) ? var_9 : ((((((-(arr_31 [i_10]))) + 2147483647)) >> ((18446744073709551608 ? 0 : 27677))))));
                var_31 = (max(var_31, var_17));
                var_32 = (min(var_32, (!25716)));
                arr_35 [i_10] [i_10] = 27698;
            }
        }
    }
    #pragma endscop
}
