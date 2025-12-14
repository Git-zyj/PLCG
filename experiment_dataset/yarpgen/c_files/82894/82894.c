/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (max(var_12, ((min(((max((max(var_0, 252)), ((max(1, 115)))))), (37031 / var_2))))));
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] [i_0] = ((1 * var_10) ? (((((max(4119164306, 2146959360))) ? var_4 : ((max(1, 4)))))) : -9025842459233074119);
                arr_7 [i_0] = (!0);
                arr_8 [0] [i_0] [6] = -9025842459233074119;
            }
        }
    }
    var_14 = ((((-((min(var_7, 1))))) << (37031 - 37006)));
    #pragma endscop
}
