/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((215 ? (((var_10 ? var_12 : var_8))) : ((var_8 ? var_2 : 3996093599))))) ? 298873697 : ((((((var_0 ? 27533 : var_18))) ? ((-1000272678 ? -125 : 1)) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((((((-21 ? 0 : -12509))) ? (arr_0 [i_0]) : ((((arr_1 [i_0]) ? var_7 : (arr_3 [10] [i_2])))))) * (((var_0 ? ((min(1, var_10))) : (((!(arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 -= (((((-(((arr_4 [i_0] [i_4] [12] [i_4]) ? var_9 : 1))))) ? 40205655 : (!536620391)));
                                var_22 = ((((!(arr_10 [i_2 - 3] [i_1] [i_3 - 1] [i_0 + 2] [i_4])))) >> (((min((((var_17 ? var_7 : var_6))), 3579207620)) - 1436165653)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_17 [i_0 + 1] [i_0] [i_2] [i_5] [i_6 - 2] = ((((min(243, 4294967295))) * (arr_15 [i_0] [i_2 - 2])));
                                arr_18 [i_0] [i_1] [i_2] [9] [i_0] = -var_12;
                                var_23 = (max(var_23, (arr_14 [1] [i_2] [i_5 - 1] [6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
