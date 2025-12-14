/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) < (arr_0 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_4 [i_1]) + var_9));
        var_19 = ((!(arr_5 [i_1])));
        var_20 &= ((((min(60112, 5429))) + (((61068 <= (arr_4 [4]))))));
    }
    var_21 = var_14;
    var_22 = 1809671204680487066;
    #pragma endscop
}
