/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (min(((+(((arr_7 [i_0] [1] [i_0]) | (arr_5 [0] [0]))))), (((((max((arr_4 [i_1] [i_1] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_1 + 1])))) < ((min((arr_5 [i_0] [21]), (arr_3 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (arr_4 [i_1 + 1] [i_2] [i_3])));
                                arr_14 [i_0] [i_3] [i_0] [i_0] [i_0] = (arr_4 [i_4] [i_4] [17]);
                                var_14 = (max((max((1 / 13486531263961249865), 6)), ((max((arr_8 [15] [15] [15] [15] [i_3] [i_4]), (max((arr_2 [1]), (arr_10 [i_0] [i_0]))))))));
                                var_15 = (min(((+((min((arr_4 [i_0] [5] [i_0]), (arr_8 [i_1 + 1] [i_1] [i_2] [1] [15] [i_0])))))), (arr_9 [i_0] [i_2] [i_3 + 1] [i_4])));
                                var_16 = (arr_1 [i_0] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = ((!((max((((~(arr_6 [i_0])))), (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_2 [i_0]))))))));
        var_17 = ((~((max(((((arr_9 [i_0] [i_0] [i_0] [i_0]) > (arr_9 [i_0] [i_0] [i_0] [i_0])))), (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
        var_18 *= (max(((min((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0]))), (arr_10 [i_0] [i_0])))), ((-(((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5];
        var_19 = (max((arr_7 [i_5] [i_5] [i_5]), ((((-(arr_1 [i_5] [i_5]))) - (arr_7 [i_5] [i_5] [i_5])))));
    }
    var_20 = (max((max(var_1, (max(7, 0)))), var_8));
    var_21 = (max(var_21, ((max(var_5, (min(var_1, (var_7 > var_8))))))));
    #pragma endscop
}
