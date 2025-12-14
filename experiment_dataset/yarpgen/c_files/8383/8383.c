/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (max(var_18, ((((~-123653249) && (!-19334))))));
        var_19 = (min(var_19, (((-(min((arr_1 [i_0] [i_0]), var_1)))))));
        var_20 = var_16;
        var_21 = ((((~(arr_1 [i_0] [i_0]))) ^ -1));
        arr_2 [i_0] = ((((((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0])))) >> (((arr_1 [i_0] [i_0]) - 4450301934488328013))))) * (min(var_3, var_2)));
    }
    var_22 = (~-2);
    var_23 = ((-var_4 ? (((((var_8 ? var_9 : var_0))) ? ((var_1 ? 31 : 1639212991)) : var_17)) : (((-var_13 ? var_9 : ((min(-6, 17))))))));
    #pragma endscop
}
