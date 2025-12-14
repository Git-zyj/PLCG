/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 ^= ((((min(-var_7, (arr_4 [i_0] [i_0])))) ? (max((((!(arr_5 [i_0] [i_1] [i_2])))), (arr_6 [i_0] [i_0] [i_0]))) : var_0));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_16 = ((var_10 >= (arr_0 [i_2] [i_4 - 2])));
                            var_17 = ((((var_12 ? 20084 : (arr_6 [i_0] [8] [8]))) + (arr_6 [i_1 - 2] [i_1 - 2] [i_4 + 3])));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_18 = (max(var_18, (~var_10)));
                            var_19 = -25;
                            arr_16 [8] [i_1] [i_3] = (((arr_5 [i_5] [i_1] [i_1 + 3]) ? (arr_5 [i_3] [i_1 + 2] [i_1 - 2]) : (arr_5 [i_1] [i_1] [i_1 + 2])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_11 [2] [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 1]) <= (arr_0 [i_1 - 1] [i_1 - 1]))))));
                            var_21 = (((arr_1 [i_1 - 3]) ^ (arr_0 [i_1 + 1] [i_1])));
                        }
                        arr_20 [i_1] [i_0] [i_1] [i_2] [10] = ((var_5 | (((arr_12 [i_0] [i_1] [12] [i_0] [i_3] [i_0]) + (arr_11 [i_1] [i_1] [i_2] [i_3] [i_3])))));
                    }
                    var_22 = ((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]), (((arr_1 [i_2]) ? (arr_4 [i_0] [i_0]) : 222)))));
                }
            }
        }
    }
    var_23 = (min(var_23, (394263667 > var_5)));
    #pragma endscop
}
