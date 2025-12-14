/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((140179010 ? 1541870548406669738 : 857349836868933760));
        var_15 ^= (~var_2);
        arr_3 [i_0] = (((!27163292382703381) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((min(((((arr_7 [i_1]) < 1922074001))), ((((arr_1 [i_1]) == ((var_1 ? 27163292382703382 : (arr_4 [i_1])))))))))));
        arr_8 [i_1] = ((((max(((var_13 ? 1843468102 : var_9)), var_4))) ? (((arr_4 [i_1]) ? (arr_1 [i_1]) : (!var_7))) : ((-(-21 || 27163292382703401)))));
        var_17 &= (((((-(~22434)))) ? (min(((-7104295301317013184 ? (arr_1 [i_1]) : var_12)), (arr_4 [i_1]))) : (arr_4 [i_1])));
    }
    #pragma endscop
}
