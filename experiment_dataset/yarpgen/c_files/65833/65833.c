/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (5 * 3849095403);
    var_21 = (~4125775900);
    var_22 = ((-(((var_1 > ((max(65, var_19))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((((~(445871893 + 3849095403)))) ? (min(445871904, 9223372036854775807)) : 3849095387));
        var_23 = ((~(max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
