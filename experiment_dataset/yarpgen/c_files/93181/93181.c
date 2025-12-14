/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = var_12;
                var_19 = (-29633 < 4850);
                var_20 = (((arr_0 [i_1]) < ((((arr_0 [i_0]) ? 1 : 536950453)))));
                arr_7 [i_1] = ((((((9227470184224311621 >= (arr_1 [i_0]))) >> (2863942054464092755 - 2863942054464092753)))));
            }
        }
    }
    var_21 = (min(var_21, var_1));
    #pragma endscop
}
