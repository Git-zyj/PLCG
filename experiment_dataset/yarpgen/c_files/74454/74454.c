/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_6));
    var_17 &= (max((((~13216530207895801381) % (((var_14 ? 1 : -2045564057))))), (((var_7 >> ((((1 ? var_12 : 1)) - 41089)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (max(var_18, (((((max(((var_3 ? 127 : 31)), (arr_0 [21])))) ? ((~(~var_2))) : (max((arr_1 [i_0] [i_0]), (((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_0]) + 359932945)) - 22)))))))))));
        arr_2 [i_0] = (((((1 ? 16383 : 1))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
    }
    #pragma endscop
}
