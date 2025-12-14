/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = var_9;
                    arr_8 [i_0] [18] [i_1] = (max((arr_4 [i_1]), (arr_6 [i_1] [i_1] [i_1 - 1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min(((~(arr_0 [i_0]))), (((!(arr_3 [i_3 - 2] [i_4 - 1]))))));
                                var_18 = (max(var_18, (((-(min(0, var_5)))))));
                                arr_15 [i_0] [i_1] [10] [i_3 + 2] [i_1] = (max(24014, 0));
                                arr_16 [i_0] [i_1] [i_1 - 1] [i_1] [i_3] [10] [i_1] = min(var_3, ((~(max(-1821138461, var_1)))));
                            }
                        }
                    }
                    var_19 = ((min((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                }
            }
        }
    }
    var_20 = (max(20933, (min(var_1, ((min(0, -21404)))))));
    var_21 = (~-606464335);
    var_22 = var_1;
    #pragma endscop
}
