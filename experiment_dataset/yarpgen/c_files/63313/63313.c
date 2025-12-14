/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 ^= (((var_12 | 471693868) == ((3 ? (arr_7 [i_0 - 1] [i_1] [i_0 - 2] [i_1]) : (arr_5 [i_1])))));
                    arr_8 [i_2] [i_0] [i_2] = ((((min((arr_6 [1] [i_0] [i_0 + 2]), 88))) ? (((((505985809 ? 1 : (arr_5 [i_0]))) >= (arr_0 [i_0])))) : (arr_2 [i_0])));
                    arr_9 [i_0] [10] [1] [i_0] = (((((32764 ^ 111) ? (((max(104, var_11)))) : var_10)) | var_6));
                }
            }
        }
    }
    var_19 = var_7;
    var_20 = (min((min(var_12, (var_17 && var_16))), ((((((min(var_4, var_13)) + 2147483647)) << (var_7 <= var_0))))));
    #pragma endscop
}
