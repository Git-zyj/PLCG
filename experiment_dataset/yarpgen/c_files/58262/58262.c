/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] = (max((arr_3 [0] [i_1]), ((~((((arr_2 [i_0]) <= (-127 - 1))))))));
            arr_6 [i_0] [i_1] = (!6680249388130668314);
        }
        arr_7 [i_0] = (((((var_5 ? var_9 : (arr_2 [i_0])))) ? ((min((arr_2 [i_0]), (arr_2 [i_0])))) : ((min((arr_2 [i_0]), (arr_2 [i_0]))))));
        arr_8 [i_0] [i_0] = ((((((((127 ? -49 : var_2))) ? ((min(0, var_6))) : (min((arr_0 [i_0]), 1))))) ? ((((((var_10 ? var_8 : 5618113552937799237))) ? ((var_5 ? var_6 : var_12)) : var_1))) : (((arr_1 [i_0 - 3]) ^ (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        arr_13 [1] = ((((11667536851834774575 ? -125 : var_0)) < (!var_7)));
        arr_14 [i_2 - 3] [i_2] = ((32746 ? var_1 : (arr_9 [i_2 - 1])));
        arr_15 [i_2] = var_9;
    }
    var_15 = var_10;
    var_16 = ((((max(var_11, (max(var_2, 0))))) ? var_5 : -101));
    #pragma endscop
}
