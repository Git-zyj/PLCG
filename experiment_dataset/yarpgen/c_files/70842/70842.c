/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [17] [17] [17] = (max((min((arr_0 [i_1] [i_1]), (!175))), ((min(251, var_1)))));
                var_17 = ((((((((arr_3 [6]) > (arr_3 [12]))) ? 23 : (arr_2 [0] [14])))) ? (232 ^ 10583) : (arr_4 [i_0] [14])));
                var_18 = (max((arr_1 [i_0] [i_1]), ((!(arr_0 [i_0] [i_1])))));
            }
        }
    }
    var_19 -= ((((min(10557, 251))) ? (var_16 + var_10) : var_12));
    #pragma endscop
}
