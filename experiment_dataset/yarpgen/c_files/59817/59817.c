/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max((min(0, 1280872721)), var_7)))));
    var_19 = -65;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (((arr_0 [i_1]) << (((!(((arr_4 [i_0]) == 27335)))))));
                var_21 = (max(var_21, (((((((arr_2 [i_0 - 1]) ? ((19583 ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (((0 ? (arr_2 [i_0 - 1]) : (arr_3 [i_1]))))))) ? (((!(arr_1 [i_0])))) : ((-((1 ? var_8 : var_14)))))))));
            }
        }
    }
    var_22 = (+-1);
    #pragma endscop
}
