/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_7);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = ((!((min((max(2915703222, -1359669125)), ((min(3437, -559280688))))))));
        var_19 += ((((-(min((arr_1 [4]), (arr_1 [6]))))) % (1165761492 > 559280687)));
        var_20 = (((arr_1 [i_0]) ? ((((-(arr_0 [i_0]))))) : (((arr_1 [i_0]) ? (((150476643 > (arr_1 [i_0])))) : ((max(var_8, var_10)))))));
        var_21 = ((+(((arr_0 [i_0]) ? (((arr_0 [i_0]) ? 9 : 20)) : (((-(arr_1 [i_0]))))))));
    }
    var_22 = (~var_16);
    #pragma endscop
}
