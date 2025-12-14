/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((!((min((((!(arr_8 [i_0] [i_0])))), 29846))))))));
                    var_14 = (arr_5 [i_0]);
                    var_15 = ((((((arr_4 [i_0 - 1]) & (arr_4 [i_0 - 1])))) ? (arr_4 [i_0 - 1]) : ((((arr_3 [i_0] [i_0 - 1] [i_0 - 1]) == (0 || var_6))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (min(((((arr_13 [i_0] [i_0] [i_1] [i_1]) / ((-(arr_2 [i_0] [i_1] [i_0])))))), ((-(arr_7 [i_0] [i_0] [i_0] [i_0 - 1])))));
                                arr_14 [i_4] &= ((var_6 ? ((((max(var_3, 1767219555))) ? ((2473400330639233200 ? (arr_13 [i_0] [i_0] [i_2] [i_0]) : var_0)) : -var_4)) : -8987));
                                var_17 = ((-2062 == (((((30271 ? (arr_10 [i_0] [i_0] [i_1] [i_1]) : var_2))) ? (arr_8 [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))));
                                var_18 = (((arr_7 [i_0] [i_0 - 1] [i_0] [i_0]) ? (max(11749, (arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0]))) : (((arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0]) ? (arr_7 [i_0] [i_0 - 1] [i_0] [i_0]) : var_9))));
                            }
                        }
                    }
                    var_19 = ((-((((arr_9 [i_1] [i_1] [i_1] [i_1]) == var_11)))));
                }
            }
        }
    }
    var_20 = (((max((((-127 - 1) || -2062)), (var_8 || var_7))) ? ((((((var_1 ? var_9 : var_7)) == var_3)))) : ((-(max(var_7, var_1))))));
    var_21 = (~-1767219555);

    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_22 = (61172 ? -22030 : 130262119);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] [i_5] [i_5] = var_12;
                        arr_25 [i_5] [i_5] [i_5] [i_5] = (min((((!((min(130262103, (arr_8 [i_5] [i_5]))))))), (arr_3 [i_6] [i_6] [i_6])));
                        var_23 &= ((((max((((var_2 ? (arr_17 [i_5] [i_5]) : 130262136))), ((var_12 ? var_11 : 470710400894528176))))) ? (!var_6) : var_7));
                    }
                }
            }
        }
    }
    #pragma endscop
}
