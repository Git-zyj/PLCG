/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((8 ? var_1 : var_6));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((min(108, 31)), (var_1 && var_3)))) > ((max(65528, 1)))));
        var_11 = (!16616);
    }
    var_12 = (max(18446744073709551614, 32760));
    #pragma endscop
}
