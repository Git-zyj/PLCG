/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_1] = (arr_0 [i_0] [i_1]);
                var_11 = (((min((arr_3 [i_1]), (arr_3 [i_1]))) ? (arr_3 [i_1]) : var_6));
                var_12 = (max(var_12, (max(((((((arr_0 [i_0 - 1] [i_1]) ? -20 : var_2))) ? (arr_4 [i_0] [i_0]) : (arr_2 [i_0]))), (arr_3 [i_0])))));
            }
        }
    }
    var_13 &= var_2;
    var_14 = ((var_9 ? (((((1 ? -20 : 2671919361539078043))) ? (min(33, var_7)) : var_6)) : var_3));
    #pragma endscop
}
