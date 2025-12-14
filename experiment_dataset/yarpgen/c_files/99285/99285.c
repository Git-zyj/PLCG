/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, (((-(min((arr_0 [i_0 + 2] [i_0 + 2]), (min((arr_1 [i_0]), (arr_1 [i_0]))))))))));
        arr_2 [i_0] = 12058;

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_14 = 12032;
            var_15 = (max(var_15, (!0)));
        }
        var_16 = (((((arr_3 [i_0 + 2] [2] [i_0 + 2]) & -212192548653092201)) - (arr_0 [i_0] [i_0])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] = (((((((max((arr_0 [8] [8]), 239)))) > (max(54, 8376398153785746095)))) ? (((12057 ? 707466351 : 139))) : ((((28736 >= (arr_5 [i_2] [i_2])))))));
        arr_9 [i_2] = (((((205 ? (((max(187, 48696)))) : ((var_1 ^ (arr_6 [i_2])))))) ? ((((14363 && 17791028657938059747) ? 0 : (!28736)))) : (arr_1 [4])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_17 = (arr_13 [i_3] [i_3]);
        var_18 |= (((((((arr_10 [i_3]) ? (arr_13 [1] [1]) : (arr_12 [i_3]))))) ? ((-(!0))) : 0));
    }
    #pragma endscop
}
