/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((3046827226 ? 30 : 9002801208229888)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = (((((max(var_14, var_5)))) && (((((((arr_0 [i_0]) && (arr_1 [i_0] [i_1 - 1])))) * ((max((arr_3 [0] [i_2]), var_3))))))));
                    var_19 = ((~((((arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]) > (arr_8 [i_0 + 3] [i_1 - 1] [i_2] [i_0]))))));
                    var_20 ^= (((max((arr_2 [i_0] [i_0]), (arr_4 [i_2] [i_1] [i_0 - 1]))) / ((((arr_4 [i_0] [i_1] [i_0 + 1]) ? (arr_4 [i_0] [i_1] [i_0 + 2]) : (arr_8 [i_0] [i_0] [i_0 + 2] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_4] = ((min((arr_14 [i_0 + 2]), (arr_14 [i_0 + 3]))) % (max((arr_14 [i_4]), (arr_10 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_0 + 2]))));
                                var_21 = ((+((min((arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_15 [i_1] [i_1 - 1] [i_1] [i_1]))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((min((max((arr_12 [i_4] [i_4]), var_10)), (arr_3 [i_0] [i_0])))) ? (min(var_7, var_9)) : (((~((((arr_14 [i_4]) || (arr_1 [i_0] [5])))))))));
                                var_22 += (max(((~(((arr_4 [i_0] [i_1] [i_4]) ? (arr_15 [i_0] [i_4] [i_2] [i_3]) : (arr_7 [i_0] [i_0] [i_2] [i_3]))))), ((-(arr_14 [i_0])))));
                                var_23 += (arr_15 [i_0] [2] [2] [i_4]);
                            }
                        }
                    }
                    var_24 ^= (((((arr_3 [i_1 - 1] [i_1]) | (arr_15 [5] [i_2] [i_1 - 1] [i_0]))) != (((arr_15 [i_2] [i_2] [i_1 - 1] [i_0]) % (arr_15 [i_1 - 1] [i_2] [i_1 - 1] [i_0])))));
                }
            }
        }
    }
    var_25 -= (max(((max((min(var_14, var_15)), ((min(var_7, var_16)))))), (max(var_11, (var_12 - var_8)))));
    var_26 = var_16;
    var_27 = (min(var_9, (((((var_15 ? var_11 : var_13)) <= var_5)))));
    #pragma endscop
}
