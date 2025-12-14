/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(var_17, ((max(((var_8 ? (max(18446744073709551615, (arr_1 [i_0]))) : 4294967295)), (((arr_0 [i_0]) ? var_7 : (((18446744073709551615 ? (arr_1 [i_0]) : (arr_0 [i_0])))))))))));
        var_18 = (min(var_18, ((((arr_1 [i_0]) ? (max(4259245992401104024, 645068259)) : ((((((((arr_1 [6]) ? (arr_2 [12]) : var_16))) || (var_7 || -704340240))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 ^= var_14;
                    arr_10 [i_2] [i_1] [i_0] [i_0] |= ((1 ? (arr_4 [3] [3]) : (max(var_9, 704340240))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((var_15 ? (arr_13 [i_4] [i_0]) : ((1474471670 ? 0 : 2554432075806198640)))))));
                                var_21 ^= (max((!0), ((((max((arr_0 [i_0]), 0))) ? -645068259 : (arr_6 [i_4])))));
                                var_22 = (min(var_22, 1));
                            }
                        }
                    }
                    var_23 = (min(var_23, 31));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_24 = (max(var_24, (arr_18 [i_7])));
                    var_25 = (max(var_25, (((((min((arr_24 [i_6 - 2] [15] [i_6 + 2]), 1314448997))) ? (arr_24 [i_5] [i_5] [i_6 + 2]) : (arr_23 [i_5] [i_6] [i_6 + 2] [i_6 + 2]))))));
                    var_26 = (max(var_26, (((((((arr_20 [i_6 + 1] [i_6 - 1] [i_6 + 1]) ? (arr_19 [i_6 - 2]) : (arr_25 [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 2])))) ? (((arr_20 [i_6 - 2] [i_6 - 1] [i_6 + 1]) ? -87 : (arr_19 [i_6 + 2]))) : (arr_17 [i_6 - 1]))))));
                }
            }
        }
    }
    var_27 -= var_8;
    var_28 ^= var_2;
    #pragma endscop
}
