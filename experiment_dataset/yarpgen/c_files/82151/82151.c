/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = (max(((((var_3 || (arr_5 [i_0] [i_1] [i_0]))) || ((((arr_5 [i_1] [i_1 + 1] [i_0]) ? 509014473 : var_5))))), ((var_5 || (arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1])))));
                            var_12 = (var_1 | 0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_13 = ((((arr_10 [i_1 - 1] [i_5 - 1] [i_5] [i_5 + 1]) % var_0)));
                            arr_14 [i_0] [i_0] [i_4] [i_4] = ((max(((123 ^ (arr_9 [i_0] [i_0] [i_0]))), 6)));
                            var_14 = ((((((arr_7 [i_0] [i_0] [i_1] [i_4] [i_5] [i_1]) ^ -32554)) & (max((arr_10 [i_0] [i_1] [i_4] [16]), (arr_12 [i_0] [i_0] [i_1 - 1] [i_4] [i_5]))))));
                        }
                    }
                }
                arr_15 [i_0] [i_1 + 1] [i_1 + 1] = ((((((((arr_2 [i_0]) + (arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_0])))) & (min(var_9, 4294967289)))) + (((255 ? (arr_5 [i_0] [7] [i_0]) : var_6)))));
                var_15 = ((-(((min((arr_1 [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0]))) - ((min((arr_0 [i_1]), (arr_12 [i_1] [0] [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_6 + 3] [i_7] [i_0] [i_6] = (((max(var_7, var_10)) <= (2 - -47)));
                                var_16 = (min(-var_8, (((-37 - var_9) + (((arr_19 [19] [i_8] [i_6] [i_7] [i_8]) + (arr_6 [i_1] [i_1] [i_1] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_29 [i_9] [i_9] = (922863537 | ((var_8 | (arr_17 [i_9] [i_9] [i_9] [i_9]))));
        var_17 = (((((arr_22 [i_9] [i_9] [i_9] [i_9] [i_9]) + 2)) * (~var_8)));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_33 [i_10] = (((max(-1144641216644902580, var_0)) & (((((max(var_0, (arr_17 [i_10] [i_10] [18] [i_10]))) + 9223372036854775807)) >> (min((arr_1 [i_10] [20]), (arr_9 [2] [18] [2])))))));
        var_18 *= ((((!(arr_0 [i_10]))) && (((var_4 && var_5) && (arr_9 [18] [i_10] [18])))));
        var_19 = ((!(var_9 + var_2)));
        arr_34 [4] [i_10] &= (((((min((arr_10 [0] [i_10] [i_10] [i_10]), 1458965019))))) - (((var_2 / var_5) / ((((arr_8 [i_10] [i_10] [3] [i_10]) - (arr_11 [i_10] [i_10] [i_10] [i_10])))))));
        var_20 = (min(((((4294967295 ? var_9 : (arr_19 [i_10] [19] [i_10] [i_10] [19]))))), 10));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_21 = -255;
        var_22 = ((((((var_0 ? var_0 : var_9)) - (((var_8 / (arr_24 [3] [8] [i_11] [8] [i_11])))))) / (min((arr_12 [i_11] [i_11] [i_11] [i_11] [i_11]), (((arr_37 [i_11] [i_11]) + var_5))))));
        arr_38 [i_11] = ((((((var_7 <= (arr_30 [i_11]))))) % (max(18891, 0))));
        var_23 |= ((((min((max(var_6, var_6)), ((max(var_1, var_8)))))) ? (!4294967295) : ((var_10 - ((min((arr_2 [2]), (arr_32 [i_11]))))))));
    }
    var_24 = (max(((1953746441 ^ (var_9 ^ var_6))), ((min((var_5 | 250), (var_5 & var_6))))));
    #pragma endscop
}
