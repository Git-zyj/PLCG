/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= min(var_15, ((-(max(var_7, 15)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((!((!(arr_0 [i_1 - 1] [i_1])))));
            var_19 = (-(arr_5 [i_1 + 1]));
            arr_7 [i_0] [i_1] = var_10;
            var_20 = (arr_4 [i_1]);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = (!var_0);
            arr_12 [i_0] [i_2] = 7926;
        }
        var_22 = (max(var_22, (((2995341472796093039 ? 2147483647 : (arr_9 [i_0] [18] [i_0]))))));
        var_23 = (~-var_14);
    }
    #pragma endscop
}
