/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_1] = (max((((836028019 << (125 - 124)))), (min((arr_6 [i_1 + 1] [i_0 - 1]), (arr_2 [i_0 + 2] [i_0 + 2])))));
                    var_17 = (((-9223372036854775807 - 1) ^ (max(var_14, var_1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = ((((var_6 ? var_12 : 9223372036854775802))));
                                var_19 += (9223372036854775804 == var_13);
                            }
                        }
                    }
                    arr_12 [i_0 - 2] [i_1] [i_1] [i_1] = (((var_13 ? (arr_6 [i_0 - 1] [i_0]) : (arr_6 [i_0 - 1] [i_0]))));
                    arr_13 [i_0] [i_1] [i_2] = arr_0 [i_0 + 2] [i_0 + 2];
                }
            }
        }
    }
    var_20 += ((-(((((min(var_10, var_12))) < ((var_14 ? var_7 : 4294967284)))))));
    var_21 = (max(var_10, var_14));
    #pragma endscop
}
