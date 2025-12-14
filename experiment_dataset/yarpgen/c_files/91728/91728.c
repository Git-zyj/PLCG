/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (65535 | 1);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 ^= ((~(((arr_1 [i_0 + 1]) ? 136 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : 0))))));
        arr_2 [i_0 - 1] [i_0 + 1] = (((var_11 && ((!(arr_0 [i_0]))))) ? (min((arr_1 [i_0]), (((arr_1 [2]) ? 1 : 1)))) : 1);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    var_14 = (((min(-32693, 1))) ? ((((arr_9 [i_3 - 3] [i_2 - 2]) ? 1 : var_7))) : ((-(arr_10 [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [9] [i_2] [i_4] [i_5] = (max(((((arr_17 [i_1] [i_2 - 1] [i_2 + 1] [i_1] [i_4 - 3] [i_5 + 1]) ? ((((arr_14 [i_2] [1] [1] [i_4 - 3]) >= -19052))) : (min((arr_14 [i_2] [i_2] [i_3 - 3] [i_4 - 2]), -5824))))), (min(-3, (min((arr_3 [i_3]), 0))))));
                                var_15 ^= (max((((444087224 ? 0 : 444087238))), ((831224030 & (arr_11 [i_4 - 2] [i_4 - 2] [i_2 - 2])))));
                                var_16 = 1;
                            }
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_17 = (min(var_17, (((~((var_3 ? var_8 : (arr_5 [i_1]))))))));
            var_18 = (min(-54, (arr_13 [i_1])));
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_19 = (((arr_5 [i_7]) ? ((((max(49525, (arr_22 [i_7] [i_7] [i_7])))) ? (((max(65535, var_9)))) : (arr_10 [7]))) : (max(15, 1))));
        var_20 *= (arr_10 [i_7]);
        arr_26 [i_7] [i_7] = min(((+((min((arr_5 [i_7]), var_11))))), ((-(arr_13 [i_7]))));
        arr_27 [i_7] = ((((((arr_23 [i_7]) | var_10))) ? (((var_1 || (((var_4 ? 19035 : 1407043440)))))) : 32698));
    }
    var_21 *= var_7;
    #pragma endscop
}
