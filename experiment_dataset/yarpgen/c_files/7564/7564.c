/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((arr_6 [i_0]) * var_1));
                    var_17 = ((1 < (((((8 ? var_1 : 16256)) < (16744448 > 53859))))));
                    var_18 = ((-(4278222847 + -13161)));
                    var_19 = (((2147483626 | -1426617247) <= ((((16744448 ? var_0 : -1426617247)) >> (((2076162912 % 50396) - 49276))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((((arr_2 [i_1] [i_2 + 3]) ? (arr_2 [i_0] [i_2 + 2]) : var_15)) < ((1426617246 - (arr_2 [i_0 - 2] [i_2 + 2])))));
                }
            }
        }
    }
    var_20 = (var_5 < var_6);
    var_21 = (max(var_21, (((1 < ((var_8 ^ ((min(1, 25645))))))))));
    var_22 = (max(var_22, (((-((var_10 + (var_12 > var_3))))))));
    #pragma endscop
}
