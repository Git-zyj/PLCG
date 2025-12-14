/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 -= arr_0 [i_0 + 1];
        var_12 *= ((((2146435072 ? (arr_2 [i_0]) : var_6)) & (!790320218)));
    }
    var_13 = (((max(var_9, (733103868 - 3134933536)))) ? ((11 ? (~var_7) : ((var_0 >> (var_8 - 3398311012))))) : ((min(1951021726, 2451884537))));
    #pragma endscop
}
