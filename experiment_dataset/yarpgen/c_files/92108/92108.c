/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((-(((((1 ? var_7 : var_4))) ? ((max(223, var_0))) : (var_9 % 1)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((((223 ? 4854 : 3)) | (var_8 < var_4)));
                    var_12 = (max(var_12, ((min((((var_3 ? (arr_3 [i_0 + 2]) : (var_2 < -4859)))), (max((((arr_1 [i_1]) ? (arr_4 [i_1] [i_1] [i_1]) : 25)), (1 + var_3))))))));
                    var_13 *= (~16320);
                    var_14 *= ((-(((-31 == -1174966724) + (94 || 88)))));
                    var_15 = (max(var_15, (arr_8 [i_2] [i_0])));
                }
            }
        }
    }
    var_16 = var_3;
    var_17 = var_3;
    #pragma endscop
}
