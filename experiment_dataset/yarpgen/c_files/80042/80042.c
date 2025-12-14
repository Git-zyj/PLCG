/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_3));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = 18415156673275869338;
        arr_3 [i_0] = -1523334547586661035;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_4 [i_1 - 1]) | -98));
        arr_7 [i_1 + 1] [i_1] = ((125 ? 83 : 12));
        arr_8 [17] [i_1] = ((-118 ? (!5155845926546051730) : 8063229059127160233));
        var_11 = 8742459058770363489;
    }
    var_12 = var_7;
    #pragma endscop
}
