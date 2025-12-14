/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 = (min((max((-327212589 * 0), 14)), var_7));
    var_16 &= var_7;
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [4] [4] &= (((max(8307328544098154579, 27)) ^ (((min(12436, 228))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (((1147217979 && 1105714144) / (min(1, 72053195991416832))));
            arr_7 [i_0] = (((-12436 > 22614) % 2205286576063367410));
        }
        arr_8 [i_0] = (max(((max(1, (22608 > -1)))), (min(1147217979, 4728936396157705753))));
        arr_9 [i_0] [i_0] = ((((5294325485117093506 >> (23598 - 23594))) * (1 != 1)));
    }
    #pragma endscop
}
