/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((((-var_3 || (((-886390090 ? var_0 : 0)))))), ((150 ? var_7 : (~-1929864840820955324))));
    var_11 = ((3575140254 ? 14511104032727504982 : var_0));
    var_12 |= ((((max(2606664436, 0))) ? (((~-564309107195691837) ? (((781076626 ? 27 : var_0))) : (min(var_5, 2404939482801855334)))) : ((min(60316, ((min(var_5, 15773))))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((57115 ? 3989389086996001570 : 218));
        var_13 = (!180);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = (max(1, (~21108)));
        var_15 += (max((arr_5 [i_1]), (arr_5 [i_1])));
        arr_6 [i_1] [i_1] = 142372313;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_16 = (((((max(var_1, 1918087355034796805)) ? ((2676969997 ? 238 : 16395)) : (arr_2 [i_2] [i_2])))));
        var_17 = ((+(min((arr_5 [i_2]), (((arr_7 [i_2]) ? (arr_0 [i_2] [i_2]) : 4618025177892216762))))));
    }
    #pragma endscop
}
