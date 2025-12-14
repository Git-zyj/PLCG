/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((3873333026 / 7987166820775287513), (((-(421634269 * var_9))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = var_8;
        var_13 = ((((arr_2 [i_0]) - (arr_0 [i_0]))));
        var_14 = (((((arr_2 [i_0]) ? 421634279 : (arr_2 [i_0]))) ^ 230));
        arr_3 [i_0] = ((((((min(var_2, 36501)) | (((max(29053, (arr_0 [i_0])))))))) ? (min((((1 ? 230 : 421634260))), -var_7)) : var_0));
    }
    #pragma endscop
}
