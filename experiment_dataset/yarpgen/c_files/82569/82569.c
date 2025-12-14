/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_1);
    var_16 = var_1;
    var_17 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((((((max((arr_7 [i_0] [i_0] [i_0]), 1))) * var_8)) / ((((min(var_7, (arr_4 [i_0] [i_0])))) ? (((arr_5 [17]) / (arr_3 [i_2]))) : 1))));
                    var_19 = ((((max(var_1, (arr_4 [17] [i_0])))) >> ((((min(33554176, (arr_4 [i_0] [i_0]))) >= (!-116))))));
                    var_20 = ((-(arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 2])));
                    var_21 = (((min(var_10, (!2413))) << ((((arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 1]) || (arr_3 [i_2 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
