/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (arr_0 [i_0]);
                var_12 = (min((max((arr_2 [i_1 - 1]), (~3251516921))), (1 == 33552384)));
            }
        }
    }
    var_13 = ((-(((var_3 != var_5) / (max(var_3, var_5))))));
    var_14 = ((var_2 * (max(var_2, -7961573267715495000))));
    #pragma endscop
}
