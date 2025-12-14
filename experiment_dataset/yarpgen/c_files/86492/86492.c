/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(((min(var_3, var_1))), (min(152, var_9)))), (((max(var_1, var_13))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, ((min(((max((arr_1 [i_0]), ((min(var_12, (arr_0 [i_0]))))))), (min(((min(var_5, var_11))), (min(var_5, 4)))))))));
        var_16 = (min((min((arr_1 [i_0 - 1]), ((min(113, 4073544183))))), ((var_13 ? (arr_1 [i_0]) : (((max(var_8, 113))))))));
        var_17 *= (arr_0 [i_0]);
    }
    #pragma endscop
}
