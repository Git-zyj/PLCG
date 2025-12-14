/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = var_4;
                                var_23 = (((((arr_15 [i_0 + 1]) < (arr_15 [i_0 + 1])))) + (((arr_15 [i_0 - 1]) ? 1029551303 : var_12)));
                                arr_16 [i_0] [i_0] [1] [i_3] [i_4] = var_9;
                            }
                        }
                    }
                    var_24 = min(((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 2]))), var_13);
                    arr_17 [1] [i_1] [i_0] [1] = (max((!var_13), (((((arr_7 [i_0]) > 1029551278)) ? (((!(arr_13 [i_0])))) : ((((arr_9 [i_0] [i_2]) >= var_17)))))));
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] = (((arr_11 [i_0] [i_1 + 4] [8] [i_1 + 4] [i_0] [i_5]) ? ((((arr_8 [i_0 - 2] [i_0] [i_5 + 1]) > (arr_15 [i_0 - 2])))) : (arr_1 [i_0])));
                    var_25 = (((arr_7 [i_1 - 3]) ? (arr_9 [i_0] [i_0 - 1]) : 1029551304));
                }
                arr_21 [i_0] = var_8;
            }
        }
    }
    var_26 = ((var_9 ? ((((((-127 - 1) > var_10)) ? var_8 : (var_15 != var_15)))) : (max((var_13 + var_11), ((min(var_1, var_6)))))));
    #pragma endscop
}
