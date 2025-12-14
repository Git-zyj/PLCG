/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((((max(var_9, var_2))) ? ((var_1 ? 94 : var_2)) : var_9))) == (((((var_10 ? var_3 : var_3))) ? ((var_11 ? 1851696095646439245 : var_6)) : (((max(var_11, 149))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = var_0;
                var_14 = (arr_3 [11] [i_1]);
                arr_7 [i_0] [i_0] [i_1] = (max(var_0, (max((arr_0 [i_0]), (var_5 * -9)))));
                var_15 = (max(var_15, ((max(16, ((((arr_1 [i_0]) || ((((arr_2 [i_1]) ? (arr_1 [12]) : 82)))))))))));
            }
        }
    }
    var_16 = 93;
    #pragma endscop
}
