/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 -= (max((max(var_8, (arr_1 [i_0 - 2]))), (arr_1 [i_0 - 2])));
                var_16 = ((-((~((-(arr_1 [14])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 = (max(((-(((!(arr_1 [i_2])))))), ((((((arr_11 [i_3] [i_2] [i_3]) ? (arr_7 [i_3]) : 1)) != 10249985084795426790)))));
                                arr_18 [i_2] [i_3] [i_3] [i_3] [i_5] [i_6 - 2] = arr_11 [i_3] [i_5] [i_3];
                            }
                        }
                    }
                    var_18 = (min(var_18, ((max((arr_7 [i_2]), ((!(arr_7 [i_2]))))))));
                    var_19 = arr_13 [i_2] [i_2] [4] [1] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
