/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_15 | ((var_5 ? 3698908248929123283 : 49601))))) ? ((max(((max(49601, 15936))), (max(var_6, var_14))))) : (max((!var_12), (var_14 ^ var_10)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(((-((17585368276929061267 ? 17585368276929061270 : -1810578923)))), ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_20 = (max(-1546170496, -104));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 1546170496;
        arr_7 [i_1] = (((var_15 | var_6) || ((max(((((arr_3 [10] [10]) >= (arr_5 [i_1] [i_1])))), ((var_12 ? var_13 : var_1)))))));
        var_21 = (((arr_4 [i_1]) ? 1 : var_4));
    }
    var_22 = (51387 && var_6);

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_23 = (((12640989684298003616 ? (((arr_3 [i_2] [i_2]) >> (var_6 - 953852738))) : var_13)) - ((max((!var_0), (max(1556092008, 2507201564))))));
        var_24 = (((arr_2 [i_2]) >= ((5670277473991091965 - (arr_2 [i_2])))));
    }
    #pragma endscop
}
