/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = ((~(max(var_13, (~3264170152141080205)))));
        var_17 ^= (min(((((arr_3 [i_0 + 1]) * (arr_3 [i_0 - 1])))), ((528634523142250011 ? 13291452259780215973 : (arr_3 [i_0 - 1])))));
        var_18 = ((~(min(var_4, ((~(arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1 - 2] [1] = 528634523142250011;
        var_19 = ((((65535 ? (!-22558) : (var_12 ^ 3626908330812966747))) * ((max((var_0 < var_4), (~74))))));
    }
    var_20 ^= -var_7;
    #pragma endscop
}
