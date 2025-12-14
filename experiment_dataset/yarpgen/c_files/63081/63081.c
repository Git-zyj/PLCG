/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_0 && var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [10] [i_1] [i_0] = (arr_7 [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_3] [i_1] = (((((arr_9 [i_4] [i_2] [i_1] [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (arr_9 [2] [i_4] [i_3] [i_3])))) ? (arr_12 [i_4] [i_0] [i_2] [i_0] [i_0]) : -15885);
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] [i_4] = ((((((1073479680 ? (arr_13 [i_0] [i_4] [i_4] [i_0] [i_1] [i_2]) : var_13)))) ? (((arr_5 [i_0] [13] [13] [8]) + (arr_5 [i_0] [i_2] [i_2] [i_4]))) : (arr_7 [i_2] [i_4])));
                                var_16 = (max(var_16, ((min(var_6, (((((var_7 ? (arr_7 [i_2] [i_2]) : (arr_6 [i_0])))) ? ((-26917 ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (arr_1 [i_0]))) : (arr_4 [i_1]))))))));
                            }
                        }
                    }
                    arr_16 [i_0] [2] [2] = var_10;
                    var_17 += (min((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_2]) : (arr_5 [i_0] [i_1] [i_1] [i_2]))) ^ (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) > var_2)))))), 15859));
                }
            }
        }
    }
    var_18 = (((min((-524682991 <= var_7), (var_1 | var_3))) > ((var_13 ? (var_12 ^ var_1) : var_12))));
    #pragma endscop
}
