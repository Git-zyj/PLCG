/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_13));
    var_19 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [4] [5] [5] [5] = (max(((-(arr_0 [i_1 - 1] [i_1]))), (min((min(-43812437, 1)), (var_4 > 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_12 [i_4] [i_0] [13] [i_1] [i_0])));
                                arr_13 [i_4] [i_3 + 1] [i_1] [i_1] [i_0] = (arr_1 [i_0]);
                                var_21 &= min(-1212507922, (arr_7 [i_3 - 3] [i_1 + 1] [0]));
                                arr_14 [i_0] [i_0] [i_2] [9] [i_0] = ((min(1, (max(var_12, (arr_10 [i_1] [i_1] [i_3] [i_1]))))));
                                arr_15 [i_1] [i_4] = (arr_10 [i_1 + 1] [18] [i_1] [i_1 - 1]);
                            }
                        }
                    }
                    var_22 = (~1);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((var_6 - var_16) - ((max(16974852329997721751, var_17))))))));
                                var_24 = (min(var_24, ((max(13896729197494815571, 31284)))));
                            }
                        }
                    }
                    var_25 += -5136885845881848126;
                }
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
