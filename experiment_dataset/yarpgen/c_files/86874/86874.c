/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((-21 + ((max(var_9, var_12))))) - (((min(var_9, var_10)))))))));
    var_16 += min((((min(var_5, var_7)))), (max((min(2358411225389859656, 2358411225389859648)), ((max(1243644419, var_12))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((min((max(var_3, var_5)), -8564688440298914049)));
        var_17 = ((((max(var_6, (var_4 / var_12)))) && ((((max(var_0, var_14)) & (min(-6458565461738978271, 32750)))))));
        arr_3 [i_0] = 1243644396;
        var_18 = (((min((arr_0 [14]), (arr_1 [i_0])))));
    }
    #pragma endscop
}
