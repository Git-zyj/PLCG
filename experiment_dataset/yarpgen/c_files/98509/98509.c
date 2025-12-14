/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((((~var_7) ? var_15 : var_14)) << (var_16 + 1890372973)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = 1048544;
        var_20 = min((max((arr_2 [9] [i_0]), var_0)), ((min(6764, -1443289523))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [4] [12] &= (((max((arr_0 [i_1 - 2]), (arr_6 [i_1 - 2]))) < (((max(var_9, var_13)) >> (((min((arr_3 [i_1]), var_16)) + 1890372977))))));
        var_21 = ((((min(-1443289523, 261719002702685912))) ? (arr_4 [i_1]) : ((30934 ? 763 : 8694101094812143337))));
    }
    var_22 = var_1;
    #pragma endscop
}
