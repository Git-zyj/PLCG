/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 << (((min(2124480783870319924, ((min(var_8, var_13))))) - 165))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [3] [i_0] = ((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_1 [i_0 - 1]));
        arr_4 [i_0 - 1] = (-32760 >= var_18);
    }
    #pragma endscop
}
