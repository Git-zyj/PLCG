/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((min((max(var_2, 1), var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [2] [i_0] [i_3] = (1 > 13627924331625172782);
                            var_21 = (max(((~(((arr_8 [i_0] [i_0] [i_1] [i_2]) ? (arr_2 [i_3] [i_0]) : var_8)))), ((((arr_4 [i_1 - 4] [i_1]) ? (arr_10 [i_1 + 1] [i_2]) : (arr_4 [i_1 - 2] [i_3]))))));
                            var_22 = ((-(arr_11 [i_0])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_23 = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
                                var_24 = ((!((((arr_7 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_4]) : var_5)))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((!(arr_3 [i_0])));
                            }
                            for (int i_5 = 4; i_5 < 9;i_5 += 1)
                            {
                                var_25 = (max(var_25, (((((!(arr_5 [i_2] [i_5 + 2]))) ? (((var_1 && (arr_5 [i_5] [i_5])))) : ((19 ? (arr_5 [i_2] [i_1 - 4]) : (arr_5 [i_5] [i_3 - 1]))))))));
                                var_26 -= (min(-var_18, ((min((arr_14 [i_1 - 4] [i_3 + 1] [i_5 - 3]), (arr_14 [i_1 - 4] [i_3 + 1] [i_5 - 3]))))));
                            }
                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                var_27 = ((((!((max((arr_18 [i_0] [i_1] [i_1] [i_3 + 1] [i_6] [i_0] [i_3]), (arr_0 [3] [i_0])))))) && ((min((arr_7 [i_6] [i_3] [i_2]), (arr_0 [i_1 - 1] [i_0]))))));
                                var_28 = (min(var_28, (((((((arr_6 [i_0] [i_3 - 1] [i_2] [i_1 + 2]) < var_14))) >> ((((1 ? (-127 - 1) : 1)) & (arr_4 [i_3] [i_3]))))))));
                            }
                        }
                    }
                }
                var_29 = ((!(((((((arr_3 [i_0]) << (var_17 - 14327508419452400779)))) ? ((var_1 - (arr_2 [i_0] [i_1]))) : (!1))))));
                var_30 ^= ((((max((min(237, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))), (((var_4 ? (arr_5 [4] [i_1]) : var_3)))))) ? (((max(var_10, (19 > 1))))) : (((var_7 != (arr_20 [0] [i_1] [i_1] [i_1] [i_1 - 2]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_31 = (arr_19 [i_0 - 1] [i_1] [10] [i_8]);
                            var_32 = (((((arr_28 [i_0] [i_7] [i_0]) ? var_11 : (arr_14 [i_0 - 1] [i_0 + 2] [i_0 + 2])))) - ((-(arr_28 [i_0] [i_7] [i_8]))));
                            var_33 = (((((!((max((arr_20 [i_0] [i_1] [i_7] [2] [i_8]), (arr_4 [i_1] [i_7]))))))) >> (((!(arr_0 [i_0 + 2] [i_0]))))));
                            var_34 = (min(((min((((arr_15 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_1]) ? (arr_10 [i_0] [i_7]) : (arr_23 [i_8] [i_7] [i_1] [i_0]))), (arr_27 [i_8] [i_7])))), (arr_19 [i_0] [i_0] [8] [8])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
