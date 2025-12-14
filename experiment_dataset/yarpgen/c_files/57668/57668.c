/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(1763780443836792887, 16682963629872758728));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] [17] = ((var_6 ? ((((var_8 % (arr_0 [i_0]))) & (((!(arr_2 [i_0])))))) : ((-(arr_1 [i_0 + 1] [3])))));
        var_16 = ((32757 + (arr_2 [i_0])));
    }
    #pragma endscop
}
