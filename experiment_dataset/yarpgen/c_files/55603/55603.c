/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-303158236 ? var_1 : var_4)));
    var_11 = ((((max(-7704, -303158236))) + 2976681971115187161));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (max((((!(~var_3)))), (((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_0]) + 1323)) - 31))))));
        var_12 = ((((min(var_7, var_5))) ? (arr_0 [i_0]) : (max((((var_2 ? (arr_0 [i_0]) : (arr_0 [12])))), var_0))));
        arr_4 [i_0] = (!var_3);
        var_13 = (min((((arr_0 [2]) % ((-2976681971115187162 ? 303158243 : var_6)))), (arr_1 [i_0])));
    }
    var_14 = ((!(((((max(7710, var_7))) ? -43 : (var_1 * var_8))))));
    #pragma endscop
}
