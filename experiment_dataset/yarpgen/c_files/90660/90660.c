/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        arr_4 [i_0] [14] = (arr_3 [i_0]);
        var_19 = (max(var_19, (((((max((max(78, 3676107160)), (arr_1 [i_0] [4])))) < (max(1, 19)))))));
        var_20 |= (0 & 1204897875);
    }
    var_21 = (max((((5 > 4611686018427387903) >> (var_15 - 299453442))), var_9));
    var_22 &= (!var_0);
    #pragma endscop
}
