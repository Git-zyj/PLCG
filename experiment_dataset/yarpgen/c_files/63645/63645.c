/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((max(-107, var_16))), var_0))) ? var_7 : 101));
    var_21 = (min(var_21, ((max((min((((-27299 ? -117 : 8646))), var_12)), (((!((min(119, var_9)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1 + 1] [i_1] = (min(((((!var_4) || (arr_2 [i_1 - 3])))), (((arr_6 [i_0] [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_0] [i_2 - 1])))));
                    arr_10 [i_1] = (max(((3056759228887568243 ? -104 : (arr_1 [i_0] [i_1 - 3]))), (~255)));
                    arr_11 [16] = ((arr_0 [i_0] [i_1]) ? (max((arr_1 [i_1] [i_2]), ((7091414372297686696 ? 56900 : 4)))) : (arr_1 [i_2 + 1] [i_1 - 1]));
                    arr_12 [i_0] [i_0] [i_1] [i_2 + 1] &= 16090339880298133345;
                    var_22 = (min((min((arr_5 [i_1] [i_2]), (max(var_12, var_17)))), (((((var_12 << (arr_1 [i_1] [i_1])))) ? (((min(98, 1)))) : (min((arr_0 [10] [i_0]), 87))))));
                }
            }
        }
    }
    var_23 = (max((max(7091414372297686681, ((max(-107, 28954))))), var_14));
    var_24 += 5;
    #pragma endscop
}
