/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((~(max(4294967295, 62031)))));
        arr_3 [i_0] [i_0] = (max((min(4294967295, 33523)), (min(15389, 4294967295))));
        arr_4 [11] = (min(14236551397383843012, ((min(-14621, (max(2320882661, -967486797)))))));
        arr_5 [i_0] [i_0] = 33523;
    }
    var_17 = var_8;
    #pragma endscop
}
