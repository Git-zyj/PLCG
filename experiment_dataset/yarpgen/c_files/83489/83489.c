/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (16126562907092402769 >= var_5);
    var_17 = (var_10 ? ((max((!var_0), var_6))) : 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] [i_0] = ((~(((-1937318809 == (arr_3 [i_0]))))));
        var_18 = (min(var_18, ((((arr_1 [i_0]) >> 0)))));
        var_19 += ((-(((!(arr_2 [i_0]))))));
    }
    #pragma endscop
}
