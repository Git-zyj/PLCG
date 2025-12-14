/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_4] [i_1] = (min(((((((arr_7 [i_0] [i_2] [i_4]) - var_3))) - (((arr_7 [i_0] [i_0] [i_4]) + 18428729675200069632)))), (((-(((arr_3 [i_0]) - -21811)))))));
                                var_19 = (((arr_11 [i_0] [i_0] [i_2] [i_4]) >= (arr_3 [i_4])));
                                var_20 = (max(((((arr_11 [i_4] [i_2] [i_1] [i_4]) & ((~(arr_8 [i_4] [i_3] [i_2] [i_1])))))), (min((min((arr_4 [i_4]), var_3)), ((min(var_5, (arr_11 [i_0] [i_0] [i_2] [i_4]))))))));
                                var_21 = ((!(((((-(arr_8 [i_0] [i_0] [i_0] [i_0]))) ^ -7995)))));
                            }
                        }
                    }
                    var_22 = (min((arr_5 [i_0 - 2] [i_1] [i_2]), (((var_5 != var_12) + ((-(arr_7 [i_0 - 1] [20] [i_0])))))));
                }
            }
        }
    }
    var_23 = (max(var_23, -var_0));
    var_24 = ((min((!var_13), var_17)));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_25 += (arr_6 [i_5] [i_6 - 2] [i_7]);
                    var_26 = (max(var_26, ((min(16834, ((-(arr_4 [i_5 - 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
