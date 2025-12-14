/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (!var_9);
    var_12 = min(9223372036854775789, 126);
    var_13 = ((((var_3 || ((min(1, var_2))))) ? var_1 : (((var_4 ? var_2 : var_10)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((-((max(((((arr_1 [i_0]) || 16))), (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = 4230706707167215872;
    }
    #pragma endscop
}
