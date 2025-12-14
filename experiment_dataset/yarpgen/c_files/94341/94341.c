/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = arr_5 [i_0] [i_1 - 2];
                arr_8 [i_0] [i_1 - 1] = ((max((arr_4 [i_1 + 1] [i_1 + 1] [i_1]), (arr_4 [i_1 - 2] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, ((max((arr_1 [i_0]), (((arr_0 [i_1]) ? ((min(1013582947300777519, 3125983730932129989))) : 6696230154971931997)))))));
                            arr_13 [i_2] |= -var_7;
                            arr_14 [i_0] = ((((arr_11 [i_0] [i_0] [i_2] [i_0] [i_2 - 1]) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_2 - 3]) : (arr_11 [i_0] [i_0] [1] [i_3] [i_2 - 3]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                arr_20 [i_5] [i_5] [i_4] = ((((((1 < -3125983730932129983) >> (((((arr_18 [i_5]) ? (arr_19 [i_5]) : var_3)) - 1054431912))))) <= ((-534934469 ? var_4 : (max(11750513918737619595, (arr_15 [i_5])))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_11 = -46;
                            var_12 = (max(var_12, ((((!2861058212) ? (arr_25 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 2]) : ((((((min((arr_22 [1]), (arr_19 [i_7])))) < (max((arr_19 [i_6]), (arr_15 [i_6 + 2]))))))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_36 [i_4] [i_5] [i_8] [9] [i_5] = (max((!1897739410), (max((max(6696230154971931995, (arr_31 [i_5] [i_8] [i_5] [i_8]))), (max((arr_33 [i_5] [i_5] [i_5] [i_5] [i_10]), (arr_28 [i_4] [i_8] [i_8] [i_8])))))));
                                var_13 = ((((arr_27 [i_9 - 1] [i_9 - 1]) ? (arr_27 [i_9 - 1] [i_9]) : (arr_27 [i_9 + 1] [19]))));
                                var_14 = (~128);
                                var_15 = (min(var_15, (((arr_19 [i_4]) ? 46 : ((-(arr_25 [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 - 1])))))));
                            }
                        }
                    }
                }
                arr_37 [2] [i_5] [2] &= (((-2147483647 - 1) ? (min(((-(arr_34 [i_4] [14] [i_5] [i_5] [i_4]))), 4294967267)) : (arr_23 [i_4] [i_4] [i_4])));
            }
        }
    }
    #pragma endscop
}
