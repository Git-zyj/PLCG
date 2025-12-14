/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 32765;
    var_17 = -1;
    var_18 = (((var_12 ? ((1073741824 ? 15360 : -6) : ((-5 ? 24 : 1))))));
    var_19 = ((((max(((max(var_10, -3))), ((0 ? 25 : var_7))))) ? var_8 : var_15));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((var_11 ? -3 : (((arr_2 [i_0 - 1] [i_0 - 1]) ? 1 : 33554431))));
        arr_4 [i_0] = (((arr_1 [i_0 - 2]) ? -2147483646 : (arr_0 [i_0 - 2] [i_0 - 1])));
        arr_5 [6] = (((arr_0 [i_0 + 3] [3]) ? var_10 : var_10));
        arr_6 [i_0 - 4] [i_0] = (~4294967295);
        arr_7 [13] [9] = 25;
    }
    #pragma endscop
}
