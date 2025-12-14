/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(var_9, (((var_3 ? var_0 : var_11))))) - ((((!(((1399287533992142003 ? 2863299987 : (-32767 - 1))))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, ((max(((((min(var_2, var_7))) | ((var_4 ? var_8 : (arr_0 [i_0] [i_0]))))), (~var_6))))));
        var_14 += 173;
    }
    var_15 = var_10;
    var_16 = (((max(0, 228)) > ((min(((min(var_5, var_6))), (~172))))));
    #pragma endscop
}
