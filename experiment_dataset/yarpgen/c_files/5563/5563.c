/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((var_7 ? var_10 : ((max(var_5, var_4)))))), var_8));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_15 = (((((((arr_1 [i_0]) - (arr_3 [i_1] [i_0 - 1] [i_0 + 1]))) + 9223372036854775807)) >> ((var_6 ? (min(var_0, var_6)) : (((53 <= (arr_1 [i_0]))))))));
            var_16 = var_1;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = -1;
            var_18 = (((((var_4 << (((arr_3 [i_0 - 3] [i_0 + 3] [i_0 + 2]) - 7926338041051720592))))) > (max(var_4, (arr_3 [i_0 + 3] [i_0 + 2] [i_0 + 2])))));
            var_19 = (min((100 > var_11), (arr_7 [i_0])));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_20 -= (((max(255, (arr_0 [i_0 + 3])))) >= (((!(arr_0 [i_0 + 2])))));
            var_21 = (((((((max((arr_11 [i_0 - 2] [i_0]), (arr_0 [i_3])))) ? (arr_9 [i_0 + 3] [i_0]) : (max((arr_9 [i_0 + 3] [i_0]), var_8))))) ? (arr_10 [10] [10] [10]) : ((max(0, 1234980321)))));
            var_22 |= (min((((arr_8 [i_0 + 1] [i_3]) & (arr_8 [i_0 - 1] [i_0 - 2]))), (arr_2 [i_0 + 3])));
        }
        var_23 = (arr_3 [i_0] [i_0 - 2] [i_0]);
        var_24 = (max(1, (1 < var_2)));
        var_25 = (((32 && 255) ^ (((((var_6 ? (arr_5 [i_0 - 3] [i_0 + 2] [i_0 + 3]) : (arr_1 [i_0])))) ? (var_3 & 0) : var_0))));
    }
    var_26 = ((((min((min(var_13, var_6)), var_12))) | ((min(var_12, var_11)))));
    #pragma endscop
}
