/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_4, ((min((var_3 <= -8952813789870077747), var_1)))));
    var_11 = ((var_0 ? (((((-1839 ? 20945 : var_3))) ? (var_2 < var_5) : var_9)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min(((((var_1 <= (arr_2 [i_0 - 4] [i_0 - 4]))) ? (arr_5 [i_0] [i_0] [i_0 - 4]) : 8952813789870077760)), ((min(var_3, var_9))))))));
                var_13 = (min((arr_2 [7] [7]), ((min(26731, var_5)))));
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
