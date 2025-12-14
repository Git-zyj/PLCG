/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= -12402;
    var_11 = var_5;
    var_12 = -12404;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [1] = (((arr_1 [i_0]) ? -3599 : (arr_1 [i_0 - 2])));
        arr_3 [i_0] = ((((min(13, 1015169905))) * 0));
        var_13 = (min(((max(-14615, (arr_1 [i_0 - 1])))), (max((arr_1 [i_0 - 1]), 7667098127283720452))));
        arr_4 [i_0] = (min(1015169929, (max(var_9, 3283311485))));
    }
    #pragma endscop
}
