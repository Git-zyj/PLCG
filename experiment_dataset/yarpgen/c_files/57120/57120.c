/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((!60115) || (((arr_1 [i_0]) || (arr_0 [i_0])))));
        var_13 = (min(var_13, (((((max(3428855376, 8877870755939570973))) ? (max(10844349545220163865, (arr_0 [12]))) : (((3880078620 ? 8892611348570831790 : 53))))))));
    }
    var_14 |= var_1;
    var_15 = (max(var_15, (((max(var_9, ((max(var_10, var_11)))))))));
    #pragma endscop
}
