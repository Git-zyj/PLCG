/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((((var_14 ? var_9 : var_1))) ? var_11 : var_11))));
    var_17 = var_5;
    var_18 = ((-(((0 + var_15) ? (var_0 + 43934) : var_0))));
    var_19 = (max(var_19, (((((~var_0) ? var_14 : 134217727))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = (arr_1 [i_1] [i_1]);
                            var_21 = (arr_3 [1] [i_1] [i_2]);
                            var_22 ^= ((((arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (arr_9 [i_2 - 1] [i_2 + 2] [i_2 - 1]))));
                            arr_11 [i_0] [i_0] = var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_23 = (((min((var_7 - var_8), ((min(-8535, 50852))))) - (min(((max((arr_17 [i_0] [i_0] [i_4] [i_5 + 1]), 0))), ((var_11 ? (arr_4 [i_0] [i_0] [i_0]) : var_0))))));
                            var_24 = (max(var_24, (((-(min(-865107299, (22005 == var_11))))))));
                            var_25 = (max(var_25, ((min((((((arr_5 [i_5] [i_4]) ? var_12 : var_15)) - 232)), (arr_9 [i_0] [i_0] [i_5]))))));
                            var_26 = (max(var_26, var_7));
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_1] = (((((+(((arr_18 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : -12))))) < ((((arr_13 [i_0] [i_0] [9]) ? (arr_12 [i_0] [i_1] [i_1]) : (arr_17 [i_0] [5] [12] [5]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_27 = ((~((-865107299 % (min((arr_15 [i_6] [3]), var_7))))));
                            var_28 = ((((((min(2, var_7)) - var_4))) ? (((((-32767 - 1) ? var_1 : 13)) + (((0 ? 1205950289 : var_9))))) : ((((-(arr_20 [i_6] [i_6] [i_1] [i_0])))))));
                            var_29 = ((((min((((var_6 ? var_4 : (arr_20 [i_0] [i_1] [i_6] [16])))), ((var_0 ? var_14 : (arr_7 [i_0] [i_6] [i_7])))))) ? ((-((-1203138126541734769 ? 7 : (arr_13 [i_0] [10] [i_7]))))) : (max(var_11, ((min(43526, 13)))))));
                            arr_25 [i_0] [7] [i_1] [i_6] [i_1] = (((max(var_15, (arr_10 [i_0] [i_0] [i_7 - 1] [i_7])))) ? (((min(var_11, (arr_10 [i_0] [i_1] [i_6] [i_7 - 1]))) + (arr_12 [i_7] [i_1] [i_1]))) : (max(var_2, (min(12046463794867694208, var_1)))));
                            arr_26 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0] = (arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
