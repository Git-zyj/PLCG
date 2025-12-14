/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_4));
    var_19 = (((((var_4 / (var_3 / var_8)))) ? var_12 : (-52771 * 9)));
    var_20 = (((!var_10) && ((!(!var_10)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 = ((!(!1)));
        var_22 -= var_11;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_23 = (((((19191 ? 10914022476595522951 : ((min(395500264, 681041970)))))) ? (((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_1 [i_1]))) ^ (((min(var_5, 138)))))) : ((~((~(arr_1 [i_1])))))));
        arr_5 [i_1] = (!-var_16);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_8 [0] [0] &= (arr_6 [i_2]);
        var_24 = (min(var_24, ((((((((var_3 | (arr_6 [i_2]))) | ((min((arr_6 [i_2]), 0)))))) ? (arr_7 [i_2]) : ((~((65535 ^ (arr_6 [i_2]))))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_25 = ((395500272 || (((~(arr_9 [i_3] [i_3]))))));
        arr_12 [i_3] = ((((-1 != ((252 ? (arr_11 [i_3]) : (arr_9 [i_3] [i_3]))))) ? (((arr_7 [i_3]) >> (var_0 - 58453))) : (!0)));
    }
    #pragma endscop
}
