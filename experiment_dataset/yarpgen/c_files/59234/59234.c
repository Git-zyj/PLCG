/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0] = (max((arr_3 [i_1]), (arr_5 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((min(((((((arr_1 [i_0]) ^ (arr_7 [6] [4] [i_2] [i_3]))) << ((((min((arr_3 [i_0]), (arr_9 [i_3] [i_1] [i_1] [i_0])))) - 216))))), (((arr_8 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1]) << (((arr_8 [13] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2]) - 620771041)))))))));
                                arr_12 [1] [i_1] [0] [1] [i_1] = (min(((((((((arr_11 [i_0] [i_0] [i_2 - 1] [i_3] [i_2 - 1] [i_2 - 1]) || (arr_9 [i_1] [i_1] [10] [6]))))) != (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_4])))), (((arr_9 [i_1] [i_2 - 1] [i_2] [i_2 - 1]) >> ((((max((arr_11 [1] [i_1] [i_1] [i_2] [1] [i_4]), (arr_2 [i_0] [i_1] [i_4])))) - 6199))))));
                            }
                        }
                    }
                    var_19 = ((((((arr_7 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) || (arr_3 [i_0])))) >= ((min((arr_9 [i_1] [i_2 - 1] [i_2 - 1] [7]), (arr_10 [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    var_20 = (min((max((arr_10 [i_1] [i_1] [1] [i_2 - 1] [i_1]), (arr_8 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_2 - 1]))), ((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [13]) << (((max((arr_10 [i_1] [1] [2] [i_0] [i_1]), (arr_8 [1] [i_1] [i_1] [i_2] [i_2] [i_2]))) - 620771049)))))));
                }
            }
        }
    }
    var_21 = ((var_12 && ((min((var_15 || var_8), (min(var_0, var_4)))))));
    var_22 = (var_2 < var_16);
    var_23 = (min(var_23, var_0));
    #pragma endscop
}
