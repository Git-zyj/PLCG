/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_2 [i_0 + 1]);
                var_12 = (23817 >> 0);
                var_13 = (arr_2 [i_0]);
                var_14 = ((((max(1, 32767))) || ((((max(var_11, var_0)) ^ ((var_0 ? (arr_4 [i_0] [i_0]) : (arr_1 [i_1]))))))));
                var_15 -= (((((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))) & (0 * var_1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_16 = (min(var_16, var_8));
                        arr_18 [i_2] [i_2] [i_4] [i_5] = (((((min((arr_17 [i_2] [i_3] [i_3] [i_5]), var_2))) | (arr_8 [i_3] [i_3]))));
                        var_17 = (min(1, ((var_11 ? (arr_8 [i_4] [i_3]) : var_11))));
                        var_18 += max(1, ((((max(0, var_5))) + (arr_17 [i_2] [i_3] [i_4] [i_5]))));
                        var_19 = (((((arr_14 [i_4]) || (arr_17 [i_2] [i_2] [i_2] [i_2]))) ? ((min((((var_5 ? var_2 : -5836))), (min(var_7, var_9))))) : var_4));
                    }
                    arr_19 [19] [i_3] [i_4] = 32512;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_20 = ((((((arr_16 [i_7 - 2] [i_7] [i_7 + 2] [i_7] [i_7 + 3]) <= (arr_16 [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7] [i_7 - 3])))) + ((max(var_7, var_8)))));
                                var_21 = ((-((var_4 ? (arr_16 [i_7 + 4] [i_7 + 3] [i_7] [i_7] [i_7]) : (arr_16 [i_7 - 1] [i_7 + 2] [i_7] [i_7] [i_7])))));
                                arr_26 [i_7 + 3] [i_3] [i_3] [i_3] [i_2] = (249 || 12124331127665294505);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((max(var_1, var_7))) / var_7));
    var_23 = (max((var_7 & 0), ((-(var_1 & var_6)))));
    var_24 = ((+(max((var_11 / var_10), var_0))));
    #pragma endscop
}
