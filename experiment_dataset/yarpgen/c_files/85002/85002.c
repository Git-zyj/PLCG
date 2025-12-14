/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0 + 2] [i_0] = arr_2 [2];
        arr_5 [i_0] = (arr_0 [i_0 + 2]);
        arr_6 [i_0 + 3] [i_0] = (((((((min(var_16, var_15))) && ((((var_1 + 9223372036854775807) << (var_8 - 26)))))))) * (((arr_2 [i_0 - 1]) ? (1 == 6859) : var_5)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (((arr_9 [i_1]) ? ((((arr_7 [i_1]) && -14))) : (!-13)));
        var_18 = (min(var_18, (((!((max((max(-14, (arr_7 [i_1]))), ((((arr_8 [i_1]) == (arr_8 [i_1]))))))))))));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_19 = (min(var_0, ((((((arr_7 [i_2 + 1]) && -14)) || (((arr_9 [i_2]) && (arr_8 [i_2]))))))));
        var_20 = (min(var_20, (((!((!(arr_12 [i_2 - 2] [i_2 - 2]))))))));
        var_21 = ((!((((arr_7 [i_2 + 3]) / (arr_10 [i_2 - 2]))))));
    }
    var_22 = var_8;
    var_23 = ((var_10 && (~-25)));
    #pragma endscop
}
