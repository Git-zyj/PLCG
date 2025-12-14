/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (max(0, (-13034942534119015905 == 20324)));
        var_11 = (max(var_11, (var_8 <= -890091368)));
        arr_2 [i_0] = ((+(((-890091369 != 16) ? ((min(var_2, var_3))) : var_1))));
        arr_3 [i_0] = (arr_0 [i_0]);
        var_12 = ((((((arr_1 [i_0] [i_0]) - var_0))) ? (((((min(30, 65535))) == (682 == -1080108255)))) : 67645734912));
    }
    var_13 -= var_5;
    #pragma endscop
}
