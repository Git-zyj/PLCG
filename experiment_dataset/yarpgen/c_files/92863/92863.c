/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 3858889231;
    var_15 = ((!(((var_1 ? 194572339 : var_5)))));
    var_16 = (var_10 ? (max(var_4, ((var_11 ? 20 : var_5)))) : var_5);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((!((max(3858889231, (arr_0 [i_0])))))) ? (max((arr_2 [i_0]), (arr_0 [i_0]))) : 4294967295));
        arr_3 [i_0] = ((-((((((arr_1 [i_0]) ? 14594282396776579592 : 65535))) ? var_6 : (max((arr_2 [1]), (arr_1 [i_0])))))));
        arr_4 [i_0] = (max(var_13, 24683));
        arr_5 [i_0] = ((-(max(4421067729518303553, (~var_1)))));
    }
    var_18 &= (max(var_9, (max((max(var_0, var_2)), -4421067729518303554))));
    #pragma endscop
}
