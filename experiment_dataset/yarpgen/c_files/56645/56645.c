/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(4128768, (((min(4128743, 4128752)) + var_3))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((((18014398509481983 ? -32764 : (arr_2 [i_0 + 2] [i_0 - 1])))) ? (((var_16 ? ((4290838546 ? (arr_1 [3] [i_0]) : (arr_1 [i_0] [i_0]))) : (max((arr_1 [i_0] [i_0]), var_16))))) : (((arr_0 [i_0 - 1]) ? 9048721027225845474 : (max(576460614864470016, 21)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_3] = 26844;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_19 = (arr_5 [i_0] [i_0 + 2]);
                            var_20 = (max((arr_6 [i_1] [i_3] [i_4]), (((536870784 ? 27691 : ((1073739776 ? 4290838551 : 4294967295)))))));
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_21 = (-((-(max(var_11, (arr_4 [i_0] [i_1] [i_5]))))));
                            var_22 = ((!((!((max((arr_18 [i_5] [7] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2]), (arr_6 [i_2 - 1] [i_2 - 1] [i_0]))))))));
                            var_23 = (min((arr_16 [i_0 + 2] [i_1]), -4290838538));
                            var_24 = (var_6 * (max(1073030332, (max((arr_16 [i_3] [i_3]), 1073030324)))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_25 = (max(var_25, (arr_9 [i_2] [i_2] [13] [i_0 + 1])));
                            var_26 |= (((arr_20 [11] [i_1]) ? (min((arr_9 [i_0 + 2] [i_1] [i_0 + 2] [i_3]), ((-25 ? 37837 : var_8)))) : (((max((arr_20 [i_0 + 2] [i_2 - 3]), (max(240, (arr_18 [i_2] [i_1] [i_1] [i_2] [i_2] [i_3] [i_6])))))))));
                            var_27 = var_11;
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_28 = (max((min(((max(35979, (arr_3 [13] [13] [13])))), (max(var_6, -13)))), (max((arr_4 [i_2 - 1] [i_1] [i_3]), (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                            arr_25 [4] [4] [6] [i_3] = ((+(max((((arr_21 [i_0 - 1] [i_0 - 1] [i_3] [i_7]) ? 5237710593839807555 : 4128764)), ((max((arr_18 [i_2] [i_1] [i_2] [i_2] [i_7] [i_1] [i_1]), var_0)))))));
                            arr_26 [i_7] [i_3] [11] [i_1] [i_0 + 1] [i_0 + 1] [3] = (min((arr_14 [i_1] [i_3] [i_2 - 2] [i_1] [i_0]), (((arr_2 [i_1] [i_1]) ? (arr_15 [i_7 + 2] [i_3] [13] [i_1]) : var_14))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_29 = ((((max(576460614864470010, 31))) ? (arr_11 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8]) : var_16));
        arr_30 [i_8 + 1] [i_8 - 1] = (arr_10 [i_8] [i_8] [i_8] [i_8]);
        arr_31 [i_8 - 1] &= (((((~(arr_7 [i_8 + 2])))) ? (((arr_17 [14]) ? (max(16777215, 17870283458845081598)) : 15398991550370502118)) : ((4976 ? 1511410351 : 764021453626215551))));
    }
    var_30 = var_6;
    #pragma endscop
}
