/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((var_6 && (arr_8 [i_3])))))));
                            var_18 = var_13;
                            var_19 &= ((~(((arr_7 [i_2 - 3] [i_2 - 3] [i_2] [i_2 + 3] [i_3]) ? (arr_9 [i_0] [i_0] [i_0] [i_2 + 3]) : var_13))));
                            arr_10 [i_1] = (((max(var_1, var_14)) < (((((-(arr_6 [i_2])))) ? (((arr_7 [i_0] [i_0] [i_2 + 3] [i_0] [i_3]) + 199)) : ((var_14 - (arr_1 [19])))))));
                            var_20 |= (arr_6 [i_0]);
                        }
                    }
                }
                var_21 = ((((((arr_9 [i_0] [i_0] [i_0] [i_1]) ? var_15 : (arr_9 [i_0] [i_1] [i_1] [i_0])))) ? (((arr_3 [i_1]) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (arr_5 [i_1]))) : ((min(255, 57)))));
            }
        }
    }
    var_22 = (((min((var_7 / var_12), (var_2 - var_12))) - (((min((var_12 || 209), 57))))));
    var_23 ^= var_12;
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {

                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    var_24 &= (254 || 47);
                    var_25 = (((max((arr_15 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4]), (min((arr_2 [i_4 - 2] [i_4 - 2]), var_12)))) < (max(var_1, (~51)))));
                    var_26 += (max(24, (((arr_8 [i_4 + 2]) ? ((min((arr_13 [7] [7] [7]), var_1))) : var_0))));
                }
                var_27 &= ((~(arr_2 [i_4] [i_5])));
            }
        }
    }
    #pragma endscop
}
