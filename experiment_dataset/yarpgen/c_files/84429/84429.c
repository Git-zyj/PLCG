/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (((arr_0 [i_0]) ? ((-(arr_1 [i_0]))) : (arr_0 [i_0]))) : ((+((min((arr_1 [i_0]), var_13)))))));
        var_18 = (min(var_18, ((var_3 ? (((~52730) ? 4969718812241220781 : 3221225472)) : 64942))));
        var_19 = (((((var_8 ? 20852 : (arr_1 [i_0])))) ? var_8 : 3221225459));
        var_20 = (max(var_20, (arr_0 [12])));
    }
    var_21 *= var_13;
    var_22 |= (((var_8 ? (max(3221225459, var_6) : (9223372036854775807 >= 50318)))));
    #pragma endscop
}
