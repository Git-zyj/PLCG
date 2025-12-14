/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -1521504993;
    var_16 += (max((max((((3322 ? 45100 : 8069524930164535079))), ((2552865318084591558 ? var_11 : -2552865318084591559)))), (~var_4)));
    var_17 = ((4684209034621811481 ? var_3 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (((((arr_0 [1]) != (((arr_6 [i_2 + 1] [i_2 - 1] [i_1] [i_0]) ? 2552865318084591558 : -8409)))) ? (min(2552865318084591559, -7862422212307912691)) : (arr_6 [8] [i_0] [3] [0])));

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        var_19 = (i_2 % 2 == zero) ? ((((((var_7 ? (arr_9 [i_2 - 3] [i_3 + 1] [i_3 + 3] [i_2]) : (arr_9 [i_2 - 1] [i_3 + 1] [i_3 + 3] [i_2]))) + 9223372036854775807)) << ((((arr_9 [i_2 - 3] [i_3 - 3] [i_3 - 1] [i_2]) && (arr_9 [i_2 - 3] [i_3 - 3] [i_3 + 1] [i_2])))))) : ((((((((var_7 ? (arr_9 [i_2 - 3] [i_3 + 1] [i_3 + 3] [i_2]) : (arr_9 [i_2 - 1] [i_3 + 1] [i_3 + 3] [i_2]))) - 9223372036854775807)) + 9223372036854775807)) << ((((arr_9 [i_2 - 3] [i_3 - 3] [i_3 - 1] [i_2]) && (arr_9 [i_2 - 3] [i_3 - 3] [i_3 + 1] [i_2]))))));
                        var_20 = ((3651514750195702665 % (((((arr_4 [i_0] [4]) ? var_13 : (arr_5 [i_2] [i_0] [i_2]))) >> (var_10 - 1492312782)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                arr_16 [i_2] = -1605780110;
                                arr_17 [i_2] [i_1] = (!var_1);
                                var_21 = (max(var_21, ((max(((var_2 ? (arr_14 [i_2 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_5 + 1] [i_5 + 1]) : 4970281654985287075)), (((arr_14 [i_1] [6] [i_2] [i_1] [i_0] [i_0]) ? (((var_10 ? var_2 : var_3))) : -2552865318084591559)))))));
                                arr_18 [i_2] [i_1] [i_2 - 2] [i_4] [i_2] [i_2 - 2] = (((var_0 ? (arr_9 [i_2 + 1] [i_4 - 1] [i_4 - 1] [i_2]) : (arr_9 [i_2 + 1] [i_4 - 1] [i_5 - 1] [i_2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_2));
    #pragma endscop
}
