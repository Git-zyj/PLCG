/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_5 & 0) ? (4429 != -4430) : (~var_7))) > ((var_3 ? (((-13418 + 2147483647) >> (2464 - 2441))) : ((4439 ? 4429 : 0))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = 56244;
        var_14 = 15365674777248718376;
        var_15 = (((!26) == -93));
        arr_4 [i_0 + 1] [i_0] = ((1 ? 4429 : 4430));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_16 = ((-(111 / -4429)));
        var_17 -= (((0 > -4429) ? 1 : 4430));
        arr_8 [i_1] [i_1] = ((((812943145 - (7546146357595282507 - var_3))) % 81));
        arr_9 [i_1] = ((-(+-30007)));
        var_18 = (min(var_18, var_6));
    }
    #pragma endscop
}
