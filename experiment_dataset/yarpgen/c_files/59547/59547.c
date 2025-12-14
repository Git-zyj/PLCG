/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 &= (max(((((((var_15 ? 1 : 1))) > (~4026531840)))), -1));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_9 [5] [i_1] [i_0] [i_0] = (arr_5 [i_0]);
                arr_10 [i_2] [i_2] = ((((((1 || (arr_0 [i_0]))))) | (((18446744073709551614 & 1317131654) ? 3150670622 : (-2147483647 - 1)))));
                var_20 = (min(var_20, ((((~1144296673) == var_14)))));
            }
            var_21 = (arr_0 [i_0]);
        }
        var_22 = ((61572651155456 | ((((max(1343444684, (arr_0 [i_0]))) + ((1 - (arr_5 [i_0]))))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_23 = 3150670622;
        var_24 = (1264292121 > -27612);
    }
    #pragma endscop
}
