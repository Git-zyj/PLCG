/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_15 = (~0);
        arr_2 [i_0] = (arr_1 [1]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((((((arr_4 [i_1]) ? 1 : (arr_3 [i_1])))) ? (((arr_3 [i_1]) % 59479)) : (((max((arr_4 [i_1]), (arr_0 [i_1] [i_1])))))));
        arr_7 [i_1] = ((-(((arr_1 [7]) ? ((((var_14 == (arr_1 [i_1]))))) : (arr_5 [12] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = 6058;
        var_16 += var_14;
        arr_12 [1] = ((1 ? 1 : 3132870148));
    }
    var_17 ^= ((-1 ? 59467 : 6056));
    #pragma endscop
}
