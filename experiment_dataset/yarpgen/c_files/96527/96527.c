/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((((min(var_3, var_11)))) - (93 - 9223372036854775807))), ((((49152 - var_10) == (((min(var_3, 8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [16] = 254;
                    arr_9 [i_2] [i_2] [i_1] [i_2] = ((!((max((arr_4 [i_0] [9]), (max(3403880308, var_3)))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_13 -= (max((((var_5 && (((4294967292 ? var_4 : var_5)))))), var_8));
                        var_14 = (((arr_4 [8] [i_1 - 2]) * ((min((arr_4 [i_2 + 1] [i_2 + 2]), var_11)))));
                        var_15 = (min(var_15, (arr_12 [i_0] [i_0])));
                        var_16 = (569676191 - 2748);
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_15 [i_0] [5] [i_2] [i_2] [i_2] = (((max((arr_13 [i_2] [i_2]), ((((arr_14 [21] [4] [i_1] [i_2 + 2] [i_4]) <= -4169350208467171130)))))) ? (min((0 % -9180496455612530949), var_10)) : 65511);
                        arr_16 [i_2] [i_2] = ((-6656212887615648054 ? var_6 : (arr_7 [i_0] [i_1])));
                        arr_17 [i_1] [i_2] = (((min(((max(255, 53))), 2066731928)) < (((min((arr_6 [i_0] [i_2]), (arr_13 [2] [i_2])))))));
                        arr_18 [i_0] [i_1] [i_2] [i_4] &= max(((((arr_12 [i_0] [i_4]) >= 2147483647))), 34940);
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [10] [i_1] [16] [i_0] [i_5] &= ((var_2 - (((arr_14 [i_0] [i_1] [i_1] [i_2] [i_5]) ? ((1 ? 176 : 161273214)) : (var_3 | 235)))));
                        arr_22 [i_2] [i_2] = ((((((!(arr_14 [13] [13] [i_2 - 1] [i_5] [i_5]))))) == (max((max(-5909319153617696583, (arr_13 [i_2] [i_2]))), (11 <= 319022464)))));
                        var_17 = ((((((arr_3 [14] [i_1 - 3]) ? -1163250124479166592 : ((min((arr_7 [17] [i_2]), 4294967295)))))) ? ((max((arr_3 [i_1 + 1] [i_2 + 2]), var_5))) : 43));
                        var_18 = (min(var_18, (((((arr_13 [i_2 + 1] [i_5]) ? -7974425790609800287 : (arr_13 [i_5] [i_5])))))));
                    }
                    var_19 = (arr_13 [i_1 - 2] [i_2]);
                }
            }
        }
    }
    var_20 = var_6;
    var_21 += (((var_3 ? 53837 : var_2)));
    #pragma endscop
}
