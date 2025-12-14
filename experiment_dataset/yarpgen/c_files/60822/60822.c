/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_11 >> ((var_2 / ((1644346084 ? var_17 : var_5))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 = var_16;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_1] = 63;
            var_22 = (min(var_22, ((((((max((arr_5 [i_0 + 2] [i_1] [i_1]), var_2)))) & var_4)))));
        }
        var_23 = (arr_2 [i_0 + 2]);
        var_24 = (((!var_19) ? (!var_4) : 80));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2 - 1] = ((((min((((arr_7 [i_2 - 1]) ? var_17 : (arr_8 [i_2]))), (arr_9 [i_2 + 2] [i_2 - 1])))) ? ((((arr_8 [i_2 - 2]) + ((max((arr_8 [i_2]), 57)))))) : (min((var_0 + var_5), var_18))));
        var_25 = (max((arr_7 [i_2 - 2]), (((arr_7 [i_2 - 2]) >> (((arr_7 [i_2 + 1]) - 49))))));
        var_26 = (min(((((arr_7 [i_2 + 2]) <= -2689))), (arr_7 [i_2])));
        arr_11 [19] [i_2] = (((((2147483647 ? var_1 : (((arr_8 [i_2]) ^ (arr_9 [i_2] [i_2])))))) ? ((min((arr_9 [i_2] [i_2]), var_4))) : (((1 < 57) ? (arr_9 [i_2 - 2] [i_2 - 2]) : (((arr_9 [i_2] [i_2]) ? var_16 : (arr_8 [i_2])))))));
    }
    var_27 = ((68 ? 18088 : var_15));
    var_28 += (min(((((17429 & var_15) ? var_2 : (~var_19)))), var_17));
    var_29 ^= var_3;
    #pragma endscop
}
