/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_2, ((((var_8 + 2147483647) << (((var_8 + 1701529599) - 27)))))));
    var_11 = (max(var_11, var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_12 -= (arr_0 [i_0]);
        var_13 |= ((var_9 - (arr_1 [i_0] [i_0 - 2])));
        var_14 = (min(var_14, (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = (((arr_1 [i_0 + 1] [i_0 + 1]) & (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 -= (min((((var_7 ? ((min((arr_4 [0]), var_5))) : ((min(var_1, (arr_4 [i_1]))))))), (((max((arr_0 [i_1]), var_8)) | (arr_0 [i_1])))));
        var_16 = (min(var_16, ((((((var_9 % (arr_4 [i_1])))) ? ((var_4 * (arr_4 [i_1]))) : ((min(var_7, (arr_5 [i_1])))))))));
        var_17 += (arr_1 [i_1] [i_1]);
        var_18 = ((((min(var_0, var_2))) ? var_5 : (arr_1 [i_1] [i_1])));
    }
    var_19 = ((((max(var_7, var_2))) < var_6));
    var_20 = var_0;
    #pragma endscop
}
