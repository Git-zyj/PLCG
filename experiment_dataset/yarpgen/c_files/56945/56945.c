/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_4, (((var_8 > 1) ? (((var_4 ? 1 : -10677))) : (min(var_5, var_6)))));
    var_11 = (((0 > (~1))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(((0 * (arr_0 [i_0]))), (!0)))) ? (((!((max((arr_1 [i_0]), var_0)))))) : (~var_4)));
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0]) == -var_4))) * -var_0));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] |= 0;
        arr_9 [i_1] [i_1] = (~84);
        arr_10 [i_1] = (((!var_4) ? 144115050636902400 : ((var_5 ? (arr_5 [i_1]) : (-9223372036854775807 - 1)))));
        arr_11 [i_1] = (((~20813) * ((1 ? 0 : 4294967280))));
    }
    var_12 = var_0;
    var_13 |= (((((min(var_8, var_0)))) / ((957954963 ^ (((-7040363696293471690 ? 0 : var_0)))))));
    #pragma endscop
}
