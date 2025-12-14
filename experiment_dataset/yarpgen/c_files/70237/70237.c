/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(((3761449131 ? 14732325337670976927 : -18)), ((((((var_11 ? 0 : var_10))) ? (var_1 | 45242) : (var_16 % var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((var_0 ? (max(1, var_12)) : (((((arr_7 [i_0] [i_0]) >= 17556674650121760835)))))))));
                    var_20 = (((~(arr_2 [i_1]))));
                    arr_8 [i_0] [i_0 - 1] [i_0 - 1] [10] = (max((arr_6 [i_0 - 1]), (arr_6 [i_0 - 1])));
                    var_21 = ((11824384247429267920 / (16248207307804744930 && -1)));
                }
            }
        }
    }
    var_22 = (((~var_10) ^ ((((var_10 ? var_12 : var_17)) & (var_16 ^ var_17)))));
    #pragma endscop
}
