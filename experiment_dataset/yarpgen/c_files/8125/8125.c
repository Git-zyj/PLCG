/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 19454;
    var_12 *= (~var_3);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 *= arr_2 [i_0];
        arr_3 [1] = ((~((~(arr_2 [i_0])))));
        var_14 = ((((var_3 | ((((arr_1 [i_0]) && (arr_0 [i_0] [i_0])))))) <= -14));
        arr_4 [i_0] = ((var_2 ? (min((var_10 % 1038410352186617176), (((1038410352186617176 ? 228 : -93))))) : (arr_2 [i_0])));
    }
    var_15 = (max(((-97 % (0 ^ 3963))), var_6));
    #pragma endscop
}
