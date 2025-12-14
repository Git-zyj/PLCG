/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_10 = (((arr_1 [i_0]) < ((var_9 ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 1])))));
        arr_2 [2] &= ((((arr_0 [i_0 - 2]) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 - 2]))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_11 = (((((var_5 & (!var_6)))) ? (min(2221410215, 1)) : (((max((arr_0 [i_1]), var_4))))));
        var_12 = ((-(arr_0 [i_1])));
        arr_5 [i_1] [i_1] = var_7;
        arr_6 [i_1] = (615428986 > (1 == 1));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_13 *= min(1, 1);
                    arr_14 [i_3] [i_2] [i_1] = ((-11844 ? (arr_12 [i_1] [i_2] [i_1]) : (((arr_7 [i_1] [i_2] [i_3]) / (arr_10 [i_1] [i_2])))));
                    var_14 = (min(((1 ? (arr_11 [i_2] [i_2] [i_3]) : 1)), ((max(((198 ^ (arr_1 [i_1]))), var_2)))));
                    var_15 = (min(var_15, (((arr_11 [i_3] [i_1] [i_1]) ? 1 : ((-577961205 ? (max(1718636729, 1035009766)) : (!0)))))));
                }
            }
        }
    }
    var_16 = (min(((max(var_5, -14854))), var_3));
    var_17 = (((((2669289082 & (var_8 & 1)))) ? var_9 : var_9));
    var_18 = var_5;
    var_19 *= (max(var_0, (min(var_3, 1))));
    #pragma endscop
}
