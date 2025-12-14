/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max((min(((min(var_13, var_0))), ((580788566 ? 392891580 : 3072)))), var_2));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0 + 1] [i_2] &= (max(((max(var_0, (arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_0 + 1])))), ((~(arr_8 [i_0 + 2] [i_2] [i_2] [18])))));
                    var_21 ^= (min(8, 8));
                }
            }
        }

        for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_22 ^= (min((max((arr_17 [i_6 - 3] [i_3] [i_4] [0] [i_6 - 2]), (arr_14 [i_6 - 2] [i_4 + 4] [16] [i_3 - 1] [i_0] [i_0 + 1]))), ((((arr_14 [i_3 - 1] [16] [i_0] [i_0 + 3] [i_0] [i_0]) ? (arr_0 [4]) : (arr_14 [i_3 + 1] [i_3] [i_3 + 1] [i_0 + 1] [i_0] [i_0]))))));
                            arr_20 [i_0] [i_0] [i_4] [i_5] [i_6] [i_6 - 3] = (max((((var_19 >= (arr_8 [i_0 + 1] [i_3 + 1] [i_0] [i_6])))), (max((min((arr_7 [i_6 - 3] [1] [i_0]), (arr_19 [i_0] [i_0] [9] [i_0] [i_0] [i_0 + 1] [i_0 - 1]))), var_0))));
                            var_23 = (min(var_23, ((((((arr_12 [i_0]) + 9223372036854775807)) >> ((((((var_7 ? (arr_15 [2] [i_5] [i_4] [6] [6] [2]) : (arr_7 [2] [i_5] [i_0]))) | (arr_10 [0]))) - 498925552)))))));
                        }
                    }
                }
            }
            var_24 = (min(var_24, var_8));
            var_25 = ((-(((!((max(var_5, var_5))))))));
            var_26 = (max(var_26, -2));
            var_27 &= ((~((((((arr_8 [i_0] [2] [1] [i_3]) ? (arr_15 [i_0] [i_0] [i_0] [i_3] [i_3 + 1] [8]) : (arr_14 [24] [i_0] [i_0] [i_3] [i_0] [i_3 - 1])))) ? ((min((arr_8 [i_0] [i_0] [10] [i_0]), var_16))) : (4294967274 % 27)))));
        }
        for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
        {
            var_28 |= (((arr_19 [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1]) ? ((((arr_19 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [3] [i_0] [i_0 + 1]) >= (arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1])))) : ((max((arr_19 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0] [i_0 - 1]), (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 2]))))));
            var_29 ^= ((var_16 ? 2 : var_12));
            var_30 = (((((arr_8 [i_0] [i_0 + 2] [i_0] [i_0]) ? var_9 : var_16))) ? (((var_4 ? ((var_19 ? 33 : 10)) : var_17))) : (max(6021456263640720842, 4294967274)));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_25 [i_0] = ((-((-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_31 = (min(var_31, ((max(((max(((var_4 ? var_13 : (arr_0 [18]))), ((max((arr_1 [i_0] [i_8]), var_13)))))), (max(-7247834475306971390, (var_5 + var_5))))))));
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_32 ^= ((5 ? (!4294967280) : -1254347453443070965));
        var_33 = max((arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]), var_3);
    }
    #pragma endscop
}
