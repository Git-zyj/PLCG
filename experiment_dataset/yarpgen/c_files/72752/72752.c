/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((!var_7), var_12);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_20, ((min(255, 76)))));
        var_21 = (min(var_21, ((~((((min((arr_0 [i_0 - 3]), 120))) ? var_14 : (arr_0 [i_0 + 1])))))));
        arr_2 [10] = 120;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_5 [i_1] = (((arr_0 [i_1 + 1]) - var_3));
            arr_6 [i_1] [1] = var_1;
        }
    }
    var_22 = ((((!((max(var_12, -55))))) && ((min(15236570848045075775, 2937793439921622641)))));
    #pragma endscop
}
