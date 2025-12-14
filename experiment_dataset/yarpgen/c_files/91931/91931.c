/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = 171069085;
                    arr_6 [i_0] [i_1] [1] [14] &= var_8;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, (arr_3 [i_3] [i_2] [i_1])));
                        var_18 = (arr_8 [i_3] [5] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_12 [4] [i_1] [i_2] [6] [i_2] [6] = ((min(117, (171069085 == 2))));
                        var_19 = (i_2 % 2 == 0) ? (((var_6 >> (((((((arr_9 [i_2] [i_1] [i_2] [i_4]) ^ var_7)) ^ ((max(var_13, var_8))))) - 2558291115))))) : (((var_6 >> (((((((((arr_9 [i_2] [i_1] [i_2] [i_4]) ^ var_7)) ^ ((max(var_13, var_8))))) - 2558291115)) - 3473372992)))));
                        var_20 = (min(var_20, ((((arr_3 [i_4] [i_2] [i_1]) & ((8191 ? 115 : 45451)))))));
                        arr_13 [i_0] [7] [i_2] [i_0] [1] = (i_2 % 2 == 0) ? (((((((((arr_2 [i_4] [i_4]) * (arr_3 [4] [i_1] [i_2])))) && ((((arr_4 [i_2]) % (arr_9 [i_2] [i_1] [1] [i_4])))))) ? (((!(20074 && 55)))) : ((+(((arr_1 [i_0]) << (((arr_4 [i_2]) - 130))))))))) : (((((((((arr_2 [i_4] [i_4]) * (arr_3 [4] [i_1] [i_2])))) && ((((arr_4 [i_2]) % (arr_9 [i_2] [i_1] [1] [i_4])))))) ? (((!(20074 && 55)))) : ((+(((arr_1 [i_0]) << (((((arr_4 [i_2]) - 130)) + 21)))))))));
                        arr_14 [1] [9] [i_2] [i_4] = (((((~((var_4 ^ (arr_7 [i_0] [1] [11] [i_0])))))) ? (((((var_8 && (arr_1 [8])))) << ((((14119990746337419101 ? 47220592 : 126)) - 47220573)))) : (arr_9 [i_2] [0] [1] [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((arr_7 [i_5] [1] [0] [i_0]) ? (((((var_9 >= (arr_10 [11] [i_1] [i_2] [i_5])))))) : (max((var_2 / var_1), (arr_2 [i_5] [i_0])))));
                        var_22 = (max(var_22, var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((var_6 % (arr_21 [i_6])))) << (((arr_2 [i_7] [i_1]) >> (((arr_19 [i_0] [8] [i_2] [i_6] [i_7]) / var_7)))))))));
                                arr_22 [i_2] [i_6] [i_6] [i_6] [i_2] [2] [i_2] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
