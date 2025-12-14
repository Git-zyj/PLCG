/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), ((-((~(arr_1 [i_0] [i_0])))))));
        var_15 &= (max((arr_1 [i_0] [i_0]), (max(((((arr_0 [i_0]) == (arr_2 [i_0])))), (((arr_1 [i_0] [i_0]) ? var_0 : (arr_1 [i_0] [i_0])))))));
    }
    var_16 += (((((((var_2 ? var_7 : var_6))) ? ((max(var_13, var_12))) : ((var_4 ? var_12 : var_1))))) % (var_12 || var_0));
    var_17 = (max((max(14256822720234180590, -66)), var_14));
    var_18 = (min(((14339109104313661023 ? -108 : 1)), ((max((max(var_8, var_11)), var_5)))));
    #pragma endscop
}
