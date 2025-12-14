/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((~((-(arr_0 [i_0])))));
        var_18 += (max((((-(arr_0 [10])))), (((((-72 & (arr_0 [0])))) ^ 39429))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_19 = (min(var_19, (((((9911 ^ (arr_1 [i_1]))))))));
        var_20 = (max(var_20, 49975));
    }
    var_21 = (min(var_21, ((((123 != -13377) & (((65009 || 11796537693852401940) >> (!76))))))));
    var_22 -= ((-13403 <= ((var_5 ? (-127 - 1) : ((-(-127 - 1)))))));
    #pragma endscop
}
