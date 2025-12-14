/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 499922936;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_13 = (32758 >= var_7);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = ((min(var_6, (arr_5 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_15 [i_5] = (min((max((arr_8 [i_5] [i_1] [i_2] [i_1]), ((((arr_0 [i_4]) <= (arr_6 [i_2] [i_4] [i_5])))))), ((((arr_13 [i_1] [i_3] [i_5] [i_5 + 3]) < (arr_9 [i_2] [i_2] [i_4] [i_2]))))));
                                var_15 = (((((-(arr_0 [i_4])))) ? (arr_8 [i_1] [i_1] [i_3] [i_1]) : (((((arr_14 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] [i_5 - 3]) && (arr_7 [i_1] [i_1])))))));
                                var_16 = ((((arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_4 + 1]) ? (arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_4 + 1]) : (arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_4 + 1]))));
                            }
                        }
                    }
                    var_17 = ((((arr_4 [i_3]) || var_2)) ? (((!var_3) ? (!-32758) : (((arr_6 [i_1] [i_2 + 1] [i_3]) ? (arr_8 [i_1] [16] [1] [1]) : (arr_6 [i_1] [1] [i_1]))))) : var_4);
                    var_18 = (((arr_8 [i_1] [i_2 + 1] [i_2 + 3] [i_2 + 3]) ? var_7 : ((499922935 ? (arr_6 [i_1] [i_2 + 2] [i_3]) : (arr_9 [i_1] [11] [i_3] [i_3])))));
                }
            }
        }
        var_19 = ((-((61440 & (arr_9 [i_1] [i_1] [i_1] [i_1])))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_20 = arr_13 [i_6] [i_6] [12] [i_6];
        arr_18 [13] [i_6] = 499922935;
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_21 = ((((((min(var_9, var_1))) - ((var_3 ? (arr_21 [1]) : -32758)))) + (((arr_1 [13]) ? var_8 : ((var_10 ? var_6 : 1))))));
        var_22 = (((-(((arr_3 [i_7]) ^ -499922923)))));
        var_23 = ((((arr_8 [i_7] [i_7] [i_7] [i_7]) || (arr_8 [i_7] [i_7] [i_7] [i_7]))));
        arr_22 [i_7] = (((((~(arr_13 [12] [10] [10] [12])))) ? (arr_10 [i_7] [i_7] [i_7] [i_7]) : ((((arr_8 [i_7] [i_7] [i_7] [i_7]) ^ (arr_14 [i_7] [9] [9] [i_7] [14] [9]))))));
    }
    #pragma endscop
}
