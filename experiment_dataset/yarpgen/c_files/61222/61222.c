/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-9223372036854775807 - 1) ? ((145 ? (((987447203 ? 91 : 987447203))) : 644611995)) : 65);
    var_17 = (-var_9 + -66);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_2] [i_2] [9] [i_2] = ((~(arr_6 [i_2 - 1] [i_0 + 1] [i_3])));
                        arr_15 [i_0 - 2] [i_1] [i_2 - 1] [i_2] = ((((arr_4 [6] [6]) ? 2039269950417547019 : 606187053093857144)));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, var_0));
                            arr_18 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2] = 1718221646520878156;
                            var_19 *= (((arr_17 [i_2 - 1] [i_3] [i_2] [i_1] [i_2] [i_1]) ^ ((8 ? 247 : 3295361590682938068))));
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0 + 1] [i_2] [i_0 + 1] [i_0] [i_2] = (((arr_6 [i_2 - 1] [i_0 - 2] [i_0 - 2]) ? -615966221 : (arr_6 [i_2 - 1] [i_0 - 2] [i_0 + 1])));
                            arr_23 [i_0] [1] [i_2] [i_3] [i_2] = (((arr_9 [6] [i_2 - 1] [i_1]) ? (arr_10 [i_2] [i_2 - 1] [i_2]) : (arr_10 [i_2] [i_2 - 1] [i_2])));
                            arr_24 [i_2] [i_2] = ((74 ? 44324 : -1916286504));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_20 = var_9;

                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_21 = 8;
                            arr_31 [i_0] [i_1] [i_2] [i_6] [i_7] = 4109914633;
                            arr_32 [i_0] [i_0] [i_2] [5] [i_0] = (((arr_2 [i_2 - 1] [i_2 - 1]) ? (arr_2 [i_2 - 1] [i_2 - 1]) : -1693118760));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_35 [i_2] [i_6] [11] [7] [i_2] = (arr_8 [i_2 - 1] [i_2] [6]);
                            var_22 *= 1;
                            var_23 = (min(var_23, var_6));
                            arr_36 [i_0] [i_1] [i_0] [i_2] [i_2 - 1] [i_6] [i_8] = (((arr_17 [1] [i_2] [i_2] [i_2] [i_2] [1]) + (arr_6 [i_0] [i_0 - 2] [i_2 - 1])));
                            var_24 = (min(var_24, 15865706122579895149));
                        }
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            var_25 *= (((arr_28 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 2]) ? (var_11 + 10254) : (-9223372036854775807 - 1)));
                            var_26 *= ((((110 ? var_10 : var_2)) ^ (arr_17 [10] [i_9] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }
                        var_27 = (max(var_27, (arr_11 [i_1] [i_2] [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_28 = ((-1 ? -1392549240 : -60));
                        var_29 *= (arr_39 [4] [i_2] [i_2] [4] [i_0]);
                    }
                    var_30 = ((+(max((arr_38 [i_2]), (arr_38 [i_2])))));
                }
            }
        }
    }
    var_31 = 1125350151028736;
    #pragma endscop
}
