/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_6 || var_18);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_20 = (min(var_20, (arr_0 [i_0])));
        var_21 = (max(var_21, ((-7039 < (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (var_12 <= var_1);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((((((arr_1 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_6 [i_1])))) ? ((-var_10 ? (var_11 > 7045) : (((arr_5 [i_1]) ? 1 : (arr_1 [i_1] [i_1]))))) : ((((((arr_0 [i_1]) / (arr_5 [i_1])))) ? (arr_0 [i_1]) : ((var_12 << (var_9 - 38425))))))))));
        var_23 ^= (var_4 % (max((((arr_6 [i_1]) >> (7030 - 7003))), ((min((arr_5 [i_1]), var_4))))));
        arr_7 [i_1] = ((2137 ? (((min(1, (arr_5 [i_1]))))) : ((((max(76, (arr_1 [i_1] [i_1])))) ? ((((((arr_5 [i_1]) + 2147483647)) << (((arr_6 [i_1]) - 9029502011894662677))))) : (8470146263223345444 % var_9)))));
        var_24 = ((((((min(8470146263223345435, 208))) || (arr_5 [i_1]))) && ((!(((-7046 ? 8470146263223345444 : var_3)))))));
    }
    #pragma endscop
}
