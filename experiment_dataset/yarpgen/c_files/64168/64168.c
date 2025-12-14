/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max((max(((92 ? var_4 : 0)), var_11)), ((-((var_9 ? var_1 : var_4)))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = var_8;
        var_14 = (min(var_14, (min((((-(~var_2)))), ((((1 ? var_0 : var_8)) & (((var_9 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))))))));
        var_15 = ((var_4 ? ((((max(var_1, 7680)) != 65535))) : (max(-11, 14))));
    }
    #pragma endscop
}
