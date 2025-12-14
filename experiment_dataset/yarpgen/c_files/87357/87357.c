/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_3, -var_11)) > (((31 ? 20410 : 242)))));
    var_17 = (min(var_17, ((((min(var_0, var_4)) << ((((var_12 ? (~var_8) : var_2)) - 2290107085793933868)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 = (((max(13548498539537960469, -38555585) & ((((arr_0 [3] [i_0 - 1]) ? (arr_1 [i_0] [i_0]) : var_0))))));
        arr_2 [i_0] = min((((var_1 & (arr_0 [i_0] [i_0])))), 130023424);
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = max((max((var_2 * var_13), ((max((arr_0 [3] [3]), (arr_0 [0] [i_0 + 1])))))), ((min(var_1, var_12))));
        arr_5 [i_0] = (max(((49 | (max(15839051196909170368, 130023435)))), -var_1));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 = -38555585;
        var_20 = (((((max(-1, 1))) ? (max(255, 2607692876800381248)) : 50)));
        var_21 = ((((!((min((arr_6 [i_1 - 1]), var_13))))) ? ((((((min(76, (arr_6 [i_1]))))) % (((arr_7 [i_1]) ? var_0 : (arr_6 [i_1])))))) : (min(var_2, (arr_7 [i_1 + 1])))));
    }
    var_22 = (max(var_22, ((((max((min(var_14, 9333031353617672476)), ((min(-130023425, var_12))))) | var_0)))));
    #pragma endscop
}
