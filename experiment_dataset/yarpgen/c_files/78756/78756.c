/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_2));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (((arr_0 [i_0]) && (((var_8 << (((min(var_0, var_8)) - 52611)))))));
        var_14 = (min((((((max((arr_1 [i_0 - 2]), 1))) > 1))), (max((arr_0 [i_0 - 3]), var_4))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = (min(((min((arr_0 [i_1]), (arr_0 [i_1])))), (max(((((arr_5 [i_1]) >= 4097))), 18))));
        var_16 = ((((((var_12 & 0) ? ((1 % (arr_0 [i_1]))) : (arr_6 [i_1])))) ? (arr_1 [i_1]) : (((!((min((arr_1 [8]), 55913))))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = (min((((((arr_0 [i_1]) == (arr_9 [i_1] [i_1]))) ? (((arr_0 [i_1]) ? 9006099743113216 : (arr_0 [i_1]))) : (((var_6 ? var_3 : (arr_7 [10] [i_2] [i_1])))))), var_5));
            var_17 = (min(var_17, (((((((((4294967289 ? 432458482 : -1))) ? (max(var_8, var_10)) : (arr_3 [i_1])))) ? (max((min((arr_5 [i_1]), (arr_0 [i_1]))), 30938708)) : (((arr_4 [6] [6]) ? (arr_0 [i_2]) : (arr_4 [i_1] [i_2]))))))));
            arr_11 [i_2] = ((((min(var_5, (arr_1 [i_1]))) | var_1)));
            var_18 = (min(var_5, ((((arr_7 [i_1] [i_2] [9]) != var_12)))));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_19 = (max(var_19, ((((arr_1 [i_1]) ? (arr_8 [i_3] [i_3 + 2] [i_3 + 3]) : (((((arr_7 [i_1] [i_3 + 3] [6]) ? 32767 : var_0)))))))));
            arr_15 [i_1] = var_8;
        }
        var_20 = var_3;
    }
    #pragma endscop
}
