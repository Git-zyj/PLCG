/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((!165), ((193 ? 153 : 91))))) ? ((((var_15 % 165) ? (min(255, var_2)) : (((min(var_14, var_17))))))) : (max((175 % var_3), (123647534560403404 >= 65535)))));
    var_21 = min(var_13, (min(((var_2 ? 165 : 1)), ((var_11 ? var_18 : 237)))));
    var_22 = (min(var_22, ((max(((var_2 ? var_16 : var_9)), (min(((var_2 ? var_0 : var_18)), (var_9 == var_1))))))));
    var_23 = (max(var_23, ((((max(var_3, (7 > var_9))) == var_7)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_24 ^= (max((arr_2 [i_0]), (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((((((arr_1 [i_0]) << (arr_1 [i_0])))) ? ((((((arr_2 [i_0]) - 9223372036854775807)) >= (((9223372036854775807 ? 77 : (arr_2 [i_0]))))))) : -21));
        var_25 |= var_18;
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_26 += (min(11, 92));
        arr_7 [i_1 - 2] = (arr_4 [i_1] [10]);
        var_27 -= (max(((((((min((arr_6 [i_1 - 4]), (arr_6 [i_1]))))) < (min((arr_4 [i_1 + 3] [i_1]), (arr_5 [i_1] [i_1])))))), var_3));
    }
    #pragma endscop
}
