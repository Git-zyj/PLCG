/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (min(var_10, ((((19227 > 1508) ? (arr_0 [i_0] [10]) : ((((arr_0 [i_0] [1]) < (arr_0 [i_0] [14])))))))));
        var_11 = (arr_1 [i_0]);
        var_12 = (min(((~((min(var_8, 100))))), ((~(arr_0 [i_0] [i_0])))));
    }
    var_13 ^= (min((((((61951 ? 19227 : 19227))) ? (~var_9) : (((var_2 + 2147483647) >> var_6)))), var_6));
    #pragma endscop
}
