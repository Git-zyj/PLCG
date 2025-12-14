/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 ^= var_2;
        arr_2 [i_0] |= ((((max(var_5, (arr_0 [i_0] [6])))) ? ((75 ? (((min(3, (arr_0 [i_0] [i_0]))))) : (max(var_5, -23029)))) : (((max((min(-23022, -47)), (max(-23016, -27))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_12 = (min((var_7 | -20663), (((arr_3 [i_1] [i_1]) ? ((min(var_3, (arr_3 [i_1] [i_1])))) : ((max((arr_3 [i_1] [i_1]), -1313)))))));
        var_13 |= (min((min(var_5, (arr_6 [10]))), (arr_4 [i_1])));
        var_14 -= 23051;
    }
    var_15 = 7160552916778288648;
    #pragma endscop
}
