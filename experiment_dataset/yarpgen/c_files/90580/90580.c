/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = ((!(49491 <= 2396713576979447400)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_22 = (max(var_22, (arr_0 [i_0 - 1])));
        arr_3 [i_0] = ((49500 && (((var_14 ? (min(16668, var_16)) : (max(24071, var_10)))))));
        arr_4 [i_0] = min((arr_0 [i_0]), (((-(((var_5 && (arr_2 [i_0]))))))));
    }
    #pragma endscop
}
