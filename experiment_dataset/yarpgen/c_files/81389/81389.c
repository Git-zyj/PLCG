/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0 - 1] [i_2] [i_0] = ((-(arr_5 [6] [i_1] [i_0 - 1])));
                        var_22 = ((~(((arr_0 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_2] [i_3])))));
                        var_23 = 44243;
                    }
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        var_24 = (max(((((arr_1 [12]) | (arr_7 [i_0] [i_0] [i_2 - 1] [i_4 - 2])))), ((~(max((arr_4 [i_1 - 1] [i_0]), (arr_5 [i_0] [i_1] [i_4 - 3])))))));
                        arr_12 [i_0 - 1] [i_0] [i_2] [9] = (i_0 % 2 == 0) ? ((min((max((max(var_11, var_3)), (arr_6 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]))), (((-(((arr_6 [i_0] [i_0] [i_0] [i_0 - 1]) << (((arr_4 [i_1 - 1] [i_0]) - 103524247)))))))))) : ((min((max((max(var_11, var_3)), (arr_6 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]))), (((-(((arr_6 [i_0] [i_0] [i_0] [i_0 - 1]) << (((((arr_4 [i_1 - 1] [i_0]) - 103524247)) - 574589241))))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0 - 1] = (min((max((arr_11 [i_0] [i_1] [i_1] [i_1 - 2] [i_1] [i_0]), (min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))), (arr_2 [i_0] [i_2] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] = (max(((((-(arr_5 [i_0] [i_0] [i_6]))) & (arr_8 [i_0] [i_6] [i_5] [i_2 + 1] [i_1] [i_0]))), (arr_5 [i_0] [i_0] [i_0])));
                                var_25 = (-(arr_7 [7] [i_0] [i_2] [i_0]));
                                var_26 = (((max(((-(arr_18 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_5]))), (arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (min((((arr_4 [i_2] [i_0]) ? (arr_5 [i_6] [i_1] [i_0]) : (arr_3 [i_0] [i_1]))), ((((arr_6 [i_6] [14] [i_2 - 1] [i_0]) <= (arr_17 [i_2 + 1] [i_0] [i_2 + 1])))))) : ((((arr_4 [i_0] [i_0]) ? (arr_16 [i_1] [i_0] [i_1]) : (arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_5] [i_6] [i_1 - 2])))));
                            }
                        }
                    }
                    var_27 = ((44254 ? 6034562100158579727 : 44243));
                }
            }
        }
    }
    #pragma endscop
}
