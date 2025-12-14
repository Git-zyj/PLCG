/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((((3693860044 ? (arr_7 [i_2] [i_2] [i_1] [i_1]) : var_3))) / (min(var_9, -1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (arr_12 [5] [i_3] [i_2] [i_1] [i_0]);
                                var_13 = (arr_0 [i_4] [i_4 + 2]);
                                var_14 = (((max(var_7, 601107239)) < (((((var_10 ? (arr_0 [i_2] [i_4 + 2]) : var_3)) / (arr_9 [i_2] [i_4 + 2]))))));
                                var_15 = (max(var_15, ((max((((((20655 ? var_6 : 113))) ? (arr_10 [i_0] [i_1] [i_2] [i_4 + 2]) : var_1)), ((((arr_1 [i_0]) <= var_5))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [6] [i_0] = max((max((arr_19 [17] [i_1] [6] [i_5]), (((var_10 || (arr_20 [i_5] [i_5] [6] [i_1] [6])))))), (arr_2 [i_1] [i_1] [i_6]));
                                var_16 = ((var_6 * ((min((arr_12 [i_0] [i_1] [i_2] [i_5 - 2] [i_6]), var_1)))));
                                var_17 *= ((((((!var_6) * ((0 ^ (arr_3 [i_1] [i_1] [i_6])))))) ? ((max(20479, (max(870364527855099590, var_8))))) : ((((min(var_2, (arr_6 [i_0] [i_5])))) ? (arr_16 [i_2] [i_5 - 4] [i_5 - 3] [i_5 - 3] [i_2]) : (min(var_1, -12703))))));
                                arr_22 [i_0] [i_1] [i_1] [i_2] [8] [i_1] [i_6] = ((((max(var_9, (max(var_2, var_7))))) ? (max((~var_4), (max(var_4, 601107239)))) : (-var_3 >= 160)));
                                var_18 = 8547729697704383820;
                            }
                        }
                    }
                    var_19 = ((870364527855099591 - (((((-15945 ? (arr_12 [i_0] [i_0] [i_0] [16] [i_2]) : var_0)) - (((arr_20 [i_0] [i_0] [i_1] [16] [i_2]) - (arr_3 [i_2] [i_1] [7]))))))));
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = var_10;
    var_22 = (max(var_6, 536870400));
    #pragma endscop
}
