/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 = ((~(!-var_14)));
        var_20 ^= 63;
        var_21 *= (max(2363517734, (255 < 1048560)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] [7] = ((~(min(((var_15 ? (arr_1 [i_1]) : 1023290786)), ((((arr_0 [7] [i_1]) ? (arr_2 [i_1]) : var_1)))))));
        arr_5 [2] = (((1931449562 ? 2363517726 : (arr_3 [i_1] [i_1]))) * ((max((((var_13 < (arr_2 [5])))), -var_10))));
        arr_6 [11] = (min(var_6, (max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])))));
    }
    #pragma endscop
}
