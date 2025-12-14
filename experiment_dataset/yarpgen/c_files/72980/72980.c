/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (~37127);
    var_19 = (min(var_19, ((((min(((26423 ? 31274 : var_3)), ((min(var_4, 0)))))) ? (((var_11 >= (~var_2)))) : -var_7))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 &= 126976;
            var_21 = (((arr_3 [i_0]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (min((arr_2 [i_1] [i_1]), (arr_4 [i_0])))));
            arr_7 [i_1] [1] [1] = ((((-18824 ? (1 & 34261) : ((31274 ? var_10 : (arr_2 [i_1] [i_0]))))) ^ (((((-2147483647 - 1) & var_15)) % -var_6))));
            var_22 |= 34264;
        }
        var_23 = (arr_5 [i_0] [i_0 + 1] [i_0 - 1]);
        var_24 ^= 0;
    }
    #pragma endscop
}
