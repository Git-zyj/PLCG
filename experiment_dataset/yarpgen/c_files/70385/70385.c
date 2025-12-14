/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((!-1579063405) ? ((var_2 ? var_4 : 191)) : 4202342301))) ? ((196 ? 16874507677951660907 : 77)) : ((((((var_11 | -730) + 2147483647)) >> ((((max(var_1, var_0))) - 98)))))));
    var_16 = ((((43 ? ((24 ? 4178101852 : var_3)) : (21 > var_12))) <= var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] [1] [i_2] = (((((var_0 ? (arr_1 [i_2 - 1]) : (arr_3 [i_0] [i_1 + 2] [i_2 - 1])))) && (((arr_1 [i_1 - 2]) || 1))));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_2] [i_1 - 1] [15] [0] = 43;
                        arr_12 [i_2] [i_2] [i_1] [i_2] = ((235 ? -1774025919 : (((((~(arr_5 [i_2] [i_1] [i_3])))) ? ((249 ? 13194139533312 : 43652998)) : (!15)))));
                        var_17 = (((max((((arr_2 [i_3 - 2]) ? (arr_2 [i_3]) : 14348)), ((-(arr_2 [i_1]))))) <= ((((var_10 ? var_11 : (arr_1 [i_3])))))));
                        arr_13 [i_2] [i_2] = ((-((min(-733, 2803094991)))));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_18 = (((((242 ? -15687 : 192))) ? (((!3) ? ((~(arr_5 [i_2] [i_1] [i_2 - 1]))) : var_11)) : (((!((min((arr_15 [2] [2] [i_2]), var_0))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4 - 2] = (((((((var_7 ? (arr_3 [i_1] [i_1] [5]) : 249))))) & (((var_12 || var_6) ? (((arr_6 [i_0] [i_1] [i_2] [i_4]) ? 268435424 : (arr_0 [i_1]))) : (((max(var_4, 23117))))))));
                        var_19 = 234;
                        var_20 = var_11;
                    }
                    arr_17 [i_2] [i_0] [i_2] = 21;
                    var_21 = (arr_5 [i_2] [i_1] [6]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_25 [i_5] [i_1] [i_1] [8] [i_1] |= (min((((arr_14 [i_1 + 1]) == (arr_5 [i_0] [i_2 + 2] [i_2 + 2]))), ((((max((arr_10 [i_6]), 198))) && 130048))));
                                arr_26 [i_2] [i_2] [i_2] = (max(5, 12));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((((((65 ? 47 : -18750))) ? ((min(1835614319, var_3))) : ((733 ? 2933921975 : 191))))) ? ((~((var_8 ? var_14 : var_8)))) : ((max(var_1, 242)))));
    #pragma endscop
}
