/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = var_4;
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (arr_4 [i_0] [13] [i_1]);
                arr_8 [i_0] [4] [i_0] = (min((min((arr_1 [i_0]), var_2)), ((((arr_1 [i_0]) || var_1)))));
                arr_9 [i_0] [i_1] = ((((var_3 ? var_7 : (arr_0 [i_0] [i_1]))) << (((((arr_0 [i_0] [i_0]) + 115)) - 24))));
                arr_10 [i_0] [i_0] [7] = ((((min((arr_0 [i_0] [i_0]), var_3))) ? ((min(((max(var_3, 24364))), var_6))) : (arr_1 [i_0])));
                arr_11 [17] [i_1] = min(((min((arr_1 [i_1]), (arr_6 [i_0] [i_0] [i_1])))), ((-((max(1, (arr_2 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
