/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = min(2, 254);
        var_18 = (max(var_18, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((-254 ? var_15 : ((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))));
        var_19 = (min(var_19, ((((max(-16, (min((arr_3 [i_1] [i_1]), var_14))))) * ((var_15 & ((min((arr_2 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))))))));
    }
    var_20 += var_2;
    var_21 = (max(var_21, ((((max((255 - 254), ((min(254, var_12))))) >> ((min(13, -121))))))));
    var_22 = (max(var_22, (((min(var_8, var_14))))));
    #pragma endscop
}
