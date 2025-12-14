/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_8 ? var_4 : var_3)) ^ ((max(var_6, 30))))) * (((max(var_8, var_6)))));
    var_11 = (min(var_11, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((~var_3) + 2147483647)) >> ((((-(((arr_5 [i_0] [i_1] [4]) * 1)))) - 12677048327762097484)));
                arr_7 [i_0] [i_1] = ((var_0 ? 757432266 : var_3));
            }
        }
    }
    #pragma endscop
}
