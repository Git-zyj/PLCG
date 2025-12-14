/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 -= var_10;
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] = (min((((var_7 < var_10) ? (((var_4 << (1812244440 - 1812244424)))) : (((arr_7 [21] [24] [i_1] [i_0]) & (arr_3 [i_2] [i_3]))))), (arr_1 [i_3])));
                        }
                    }
                }
                arr_13 [i_1] = (max(((max((min(127, var_2)), (min(var_6, (-127 - 1)))))), ((-var_6 ? (65514 >= 124) : (!1)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((((max((((var_5 ? (arr_17 [i_0] [i_0]) : (arr_11 [14] [14] [i_4])))), (max((arr_8 [i_0] [i_1 + 1] [i_4] [i_5] [i_6]), (arr_15 [i_0] [13] [i_0] [i_0])))))) ? (((1703075856 + (max(var_11, var_11))))) : (((((var_2 ? var_2 : var_10))) ? ((((arr_10 [i_0] [10] [i_5] [i_6]) ? (arr_17 [i_0] [i_1]) : (arr_11 [i_0] [2] [i_4])))) : (((arr_16 [i_1] [7] [i_6]) ? (arr_16 [8] [i_4] [i_5]) : var_7)))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [2] = (((max((arr_1 [i_1 - 1]), (arr_1 [i_0])))) ? (arr_7 [i_0] [i_1 + 1] [i_5] [24]) : ((((max(-1, var_5))) ? (max(var_8, (arr_11 [i_0] [i_0] [i_0]))) : ((-(arr_15 [i_0] [i_0] [11] [i_0]))))));
                                arr_22 [i_0] [8] [i_4] [14] [i_6] = (arr_17 [i_4] [i_6]);
                                arr_23 [9] [i_1] [9] = ((((min((((arr_16 [i_0] [i_0] [i_0]) ? (arr_7 [1] [5] [i_5] [i_6]) : -1)), ((min(13380, (arr_8 [8] [i_1] [i_1] [i_1] [i_1 + 1]))))))) ? ((2942268758 / (arr_15 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]))) : ((((var_10 ? (arr_20 [i_0] [i_0] [i_4] [i_5] [i_4] [1] [i_1 + 2]) : -2062341635165853200)) - (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (var_4 != ((~((1 ? var_4 : -110)))));
    #pragma endscop
}
