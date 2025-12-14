/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((12425661410246492238 ? (!var_1) : ((var_0 ? var_5 : var_17))))) ? ((((!((max(-74, var_7))))))) : (max(((var_19 ? var_15 : 457232075)), var_12))));
    var_21 = (1248131411 ? 37340 : 12425661410246492238);

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [1] = (0 / 9959);
        var_22 = (arr_2 [i_0 - 1] [i_0 + 1]);
        arr_5 [i_0] [i_0] = (((arr_0 [i_0 + 1] [i_0 + 1]) ? (max(((((-32767 - 1) ^ 32765))), ((~(arr_1 [i_0]))))) : (((((32746 ? -32754 : 72))) ? (arr_1 [i_0 + 1]) : (max((arr_2 [4] [i_0 - 1]), 28173))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((arr_2 [i_1] [12]) <= ((60 ? -128 : 596979501))));
        arr_9 [i_1] = ((9751 >> ((max((arr_3 [i_1 - 1]), ((!(arr_6 [i_1]))))))));
        var_23 ^= (max((arr_3 [i_1 - 1]), (((((arr_1 [i_1]) + (arr_0 [8] [i_1]))) - (((arr_7 [i_1]) ? (arr_1 [i_1]) : -109))))));
        var_24 = (min(var_24, ((max((((arr_1 [i_1 - 1]) ? ((max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])))) : (arr_7 [i_1]))), (max((36360 != 0), (((arr_7 [i_1 + 1]) - 1)))))))));
        arr_10 [i_1] = (max(((max((arr_3 [i_1 + 1]), (arr_1 [i_1 + 1])))), 11492640912487530855));
    }
    var_25 = var_8;
    #pragma endscop
}
