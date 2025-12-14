/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 |= 1;
        var_11 = (max(var_11, (((((min(var_9, (var_1 >= var_0)))) ? ((var_5 | (arr_0 [i_0]))) : ((((min(1, 2751966374)) > (((max(var_4, 1))))))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = (57344 == -53);
        var_13 &= (!1543000912);
        var_14 = var_6;
    }
    var_15 = var_2;
    var_16 = ((((1 ^ 1) >> var_4)));
    #pragma endscop
}
