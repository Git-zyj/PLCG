/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (!60);
        arr_3 [i_0] = (((((((arr_0 [i_0]) | var_10)) % ((((arr_1 [i_0] [i_0]) & (arr_0 [i_0])))))) >= ((max(((var_2 ? var_6 : -9280)), (arr_0 [i_0]))))));
        var_15 = ((arr_0 [i_0]) - ((((max(var_0, var_5))) ? (arr_1 [i_0] [i_0]) : ((max((arr_0 [i_0]), (arr_1 [i_0] [17])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = (((arr_5 [i_1]) ^ var_12));
        arr_7 [6] [i_1] = 12930729031291776534;
    }
    var_17 = var_10;
    #pragma endscop
}
