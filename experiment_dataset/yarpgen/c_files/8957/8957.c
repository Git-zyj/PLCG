/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_4;
    var_11 = (min(var_11, var_9));

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] |= (((((min((-9223372036854775807 - 1), var_4))) / (arr_2 [i_0]))));
        var_12 = arr_0 [i_0] [i_0];
        arr_4 [i_0] = 39;

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            var_13 = (min((((9223372036854775807 == 1425) <= (30646 == 28))), (((-9223372036854775807 - 1) < (arr_6 [i_1 - 1] [i_0])))));
            var_14 = 31;
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = (min((4294967294 > 52), -9223372036854775807));
        var_15 = -15381;
        var_16 = 9;
    }
    #pragma endscop
}
