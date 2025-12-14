/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [5] [i_0] [i_0] = (((arr_1 [i_0 + 1] [i_0 + 1]) ? var_4 : (arr_1 [i_0 + 3] [i_0 + 2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = (((var_4 ? (~var_6) : (~var_2))));
                                arr_17 [i_0] [i_0] = var_6;
                            }
                            for (int i_5 = 4; i_5 < 15;i_5 += 1)
                            {
                                arr_21 [i_0] = (!((((((arr_3 [i_0]) ? (arr_8 [i_0] [i_3] [i_5 - 2]) : (arr_14 [i_5 + 1] [i_1]))) * var_7))));
                                var_10 = (!(arr_12 [i_5 - 1] [i_1 + 1] [i_1 - 3] [i_0 - 1] [i_1 + 1]));
                                arr_22 [i_0 + 1] [i_1] [15] [i_0] [14] = var_7;
                            }
                            arr_23 [i_0] [i_1 + 2] [i_2] [i_3] [i_0] = ((((max((arr_11 [i_3] [i_1] [i_1]), var_7))) ? (((arr_12 [i_3] [15] [i_3] [7] [i_3]) * var_1)) : (!var_0)));
                        }
                    }
                }
                arr_24 [i_1] [i_1 - 3] [i_0] = (((min(-var_8, ((max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_1]), var_4)))))) ? (((!((max(var_5, var_1)))))) : ((((!(arr_15 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_0 + 3] [i_1 - 1] [i_0] [i_1 + 2]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_29 [i_1 - 1] [i_0] = (min(var_1, var_5));
                            var_11 = var_0;
                        }
                    }
                }
            }
        }
    }
    var_12 = (min(var_12, (!var_4)));
    var_13 = var_8;
    var_14 = var_8;
    #pragma endscop
}
