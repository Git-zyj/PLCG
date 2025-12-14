/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_11 = (max(((((((arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_0]) ? 6658071981944094334 : 155))) ? (arr_3 [i_1 + 4]) : (((max(155, (arr_5 [1] [i_1] [i_2]))))))), (max((-53 & var_2), (~var_2)))));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 3] [i_1] = (arr_9 [i_0] [i_1 + 3] [i_2] [i_4]);
                            arr_17 [i_0] [i_1] [2] [i_1] [2] = ((((((6806870197345940286 == (arr_11 [i_1 - 2] [i_1 + 1] [i_4 + 1]))))) - (min(((1024 ? (arr_9 [1] [i_1] [1] [6]) : 3841816974)), (min(1, (arr_3 [i_3])))))));
                            var_12 ^= var_8;
                            var_13 = (max(248, (arr_7 [i_1])));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_14 ^= ((((((arr_11 [i_0] [i_1 + 2] [i_1 + 2]) ? (max((arr_6 [i_1 + 2] [i_3] [i_5]), (arr_6 [3] [i_1] [0]))) : 11788672091765457283))) ? (max((arr_2 [i_1 + 2]), 9223372036854775807)) : (((var_4 ? (-127 - 1) : (arr_0 [i_2]))))));
                            arr_22 [i_1] [i_1] = (arr_2 [i_0]);
                            var_15 = (arr_2 [i_0]);
                            var_16 = (min(var_16, (((((max(((6658071981944094358 >> (6658071981944094345 - 6658071981944094299))), ((((arr_3 [10]) ? (arr_21 [i_0] [i_0] [10] [i_3] [i_5]) : (arr_21 [i_0] [i_5] [6] [i_3] [8]))))))) ? (arr_21 [i_5] [i_3] [i_2] [i_3] [i_0]) : (((9223372036854775807 % 155) ? 6658071981944094332 : (arr_11 [i_0] [i_1] [i_3]))))))));
                        }
                        arr_23 [1] [i_1] [i_1] [i_2] [i_3] = 135;
                        var_17 = (max((((!((max(11788672091765457281, 127)))))), (~4064)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_18 += (max(70368744177663, (arr_14 [i_2] [i_1] [i_1] [i_6])));
                                var_19 = (arr_2 [4]);
                                var_20 ^= ((!((((arr_2 [i_7 + 2]) ? var_0 : (arr_2 [i_0]))))));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((((((min((arr_4 [i_1 + 4] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 - 2]))))) | 9223372036854775807)))));
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
