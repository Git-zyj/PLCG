/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((min((var_1 / var_11), var_3)), var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [1] = (((((53318 / (arr_0 [i_0] [i_0])))) ? ((((arr_2 [i_0] [i_0]) > 11488))) : (((1 != (arr_2 [i_0] [16]))))));
        arr_4 [21] = ((!(arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
