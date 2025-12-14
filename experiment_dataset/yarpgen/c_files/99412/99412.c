/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_5));
    var_18 = (var_1 ? (41 > var_0) : var_8);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((-(~0)))) ? (arr_2 [i_0] [4]) : (arr_0 [i_0 - 1])));
                var_19 = (((((arr_0 [i_0 - 1]) >= (arr_3 [i_0] [i_0] [i_1]))) ? (~var_1) : ((-1 ? (((min((arr_0 [i_0 + 2]), var_12)))) : (9157456874243013321 + -9157456874243013321)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] [i_2] [i_3] = (!(arr_0 [i_0]));
                            arr_13 [0] [i_1] [i_2] [i_3] = ((1 ? 2370 : -663449868));
                            var_20 *= (((((~((max(72, (arr_2 [i_0] [9]))))))) - (((arr_7 [i_0 + 2] [i_1] [i_2] [i_3]) ? (arr_0 [i_3]) : (((arr_8 [i_3] [i_0 + 2]) ? (arr_6 [i_0] [i_1] [i_0] [i_3]) : (arr_7 [i_1] [i_1] [i_2] [i_3])))))));
                            var_21 = (min(var_21, ((~((((((arr_6 [i_0 + 1] [i_0] [i_0] [i_3]) - 31))) ? (arr_3 [i_3] [i_2] [i_1]) : 0))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    var_23 = ((-(var_11 ^ var_8)));
    #pragma endscop
}
