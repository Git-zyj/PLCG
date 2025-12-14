/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((~(arr_0 [i_0])))) ? ((((arr_0 [i_0 - 2]) | (((((arr_0 [4]) + 9223372036854775807)) >> (((arr_1 [i_0]) - 135860211))))))) : ((((((var_5 + 2147483647) >> (((arr_1 [i_0]) - 135860256))))) ^ (var_6 & var_12))))))));

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [1] = var_7;
            arr_5 [i_1] = ((~((~(arr_3 [i_0 + 2] [i_1 - 3])))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_14 ^= (!(arr_8 [13] [13] [1]));
            var_15 = (arr_1 [i_0]);
        }
        arr_10 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 = (max(var_16, (((~(~179))))));
        var_17 -= (arr_7 [5] [i_0] [i_0]);
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3 - 2] = (((((((max(1, (arr_11 [i_3])))) ? 29931 : (arr_12 [i_3])))) ? (((min(484521493927785023, (arr_11 [i_3]))) ^ (arr_12 [15]))) : (arr_12 [i_3])));
        var_18 ^= (min(var_0, (arr_11 [i_3])));
        arr_14 [i_3] = ((var_11 ? (-107 > 1) : (min((((arr_12 [1]) & 116883610)), ((max(29926, 0)))))));
    }
    var_19 = (max(var_19, var_4));
    var_20 |= var_6;
    var_21 = (~29127);
    #pragma endscop
}
