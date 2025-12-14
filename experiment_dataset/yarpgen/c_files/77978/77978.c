/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(16380, ((16380 ? -16383 : 1536))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [17] [i_2] [i_3] [i_2] = ((((max(830532871, 1556935937))) ? (arr_12 [0] [i_1] [i_2] [8] [i_4]) : (max((arr_12 [i_0] [10] [1] [i_3] [i_4]), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))));
                                var_20 = (((((~(arr_1 [12])))) ? 2738031350 : (arr_7 [i_0])));
                                var_21 = ((max((arr_2 [i_4]), (arr_2 [3]))));
                            }
                        }
                    }
                    var_22 = var_0;
                    arr_16 [i_0] = ((((max(67553994410557440, 127))) ? (arr_12 [i_0] [i_0] [7] [i_1] [i_2]) : (((var_17 ? (arr_13 [i_0] [i_2] [0] [i_2] [i_0] [i_1] [3]) : (arr_10 [i_0] [i_1] [3] [i_2] [9]))))));
                    var_23 -= ((123 ? -123 : 1807087528));
                    var_24 = (max((arr_2 [i_2]), (arr_10 [i_0] [0] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_25 [i_7] [i_6] [i_8] = (((((arr_19 [i_8]) ? (arr_19 [23]) : (arr_19 [i_8]))) << (((((var_7 * -14) + 1069)) - 5))));
                            var_25 = var_6;
                            var_26 = (((((((min((arr_22 [i_5] [i_7] [i_7 - 1]), (arr_21 [i_7] [i_6])))) ? (min((arr_17 [i_7]), var_2)) : (((!(arr_21 [i_7] [i_6]))))))) ? ((min((max((arr_18 [8] [i_7 + 1]), var_5)), (min(16366, 123))))) : (min(var_7, (min(2738031360, 1556935935))))));
                            var_27 = var_15;
                        }
                    }
                }
                var_28 = (max(var_28, (arr_22 [6] [i_5] [6])));
                var_29 = (min(var_29, ((min(((-1570776746 ? 238 : ((2738031325 ? 82 : 1556935984)))), 4264951659)))));
            }
        }
    }
    var_30 = ((2738031360 ? 319327705 : -16365));
    var_31 -= (((((((var_11 ? -1829143963 : var_10)) & ((max(-126, var_16)))))) ? (max(var_0, var_7)) : var_1));
    #pragma endscop
}
