/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 17581085702113014278;
        var_11 = ((10138088197298452069 | (arr_0 [i_0])));
        arr_4 [i_0] [13] = (var_9 < 17936926009526042253);
        var_12 = ((var_0 / (arr_1 [i_0])));
        arr_5 [i_0] = ((((((arr_2 [1] [i_0]) << (-9383 + 9412)))) || 17581085702113014278));
    }
    var_13 = (((((min(865658371596537320, var_9))) && (!1452481995))));
    var_14 = (min(var_14, -var_9));
    #pragma endscop
}
