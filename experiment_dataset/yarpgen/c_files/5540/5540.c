/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((((-(arr_2 [i_0] [i_0])))) && 1));
        arr_4 [i_0] = (min((((max(1, 1)) ? (arr_0 [i_0]) : ((~(arr_2 [i_0] [i_0]))))), (((max(16901991051180181354, (arr_2 [i_0] [i_0])))))));
        var_15 = (arr_2 [10] [10]);
    }
    var_16 = var_1;
    var_17 = ((~(((var_13 <= var_6) ? var_0 : var_1))));
    #pragma endscop
}
