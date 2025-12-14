/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_6, var_7));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((((((((var_3 ? (arr_2 [i_0]) : var_0))) ? ((max(1, var_2))) : var_1))) ? ((19866 ? (min(4080, 20310)) : 45693)) : -0));
        var_13 -= var_6;
        arr_5 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : -32760))) / (((arr_1 [i_0]) ? ((-20301 ? var_4 : -20277)) : (((~(arr_2 [i_0]))))))));
        var_14 = ((503316480 ? 1 : ((12241 ? -7149005678394147821 : 19871))));
    }
    var_15 = (((((max(var_5, -5525070949818945650)))) ? var_2 : ((((var_10 - 6714740744239871123) && var_8)))));
    var_16 = (max(var_16, ((((((20310 ? (~1) : (var_1 & var_2)))) ? ((((max(20301, var_5))) ? var_7 : ((min(var_2, var_9))))) : var_7)))));
    #pragma endscop
}
