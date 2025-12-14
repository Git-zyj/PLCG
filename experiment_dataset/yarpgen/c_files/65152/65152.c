/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((max((((((116 ? (arr_2 [i_0]) : var_0)) - 1))), (min(221, 4870206781814551289)))))));
                arr_5 [i_0] [i_0] = (max(var_8, (var_9 && var_2)));
                arr_6 [i_0] &= ((min((((var_6 ? 59135 : (arr_4 [i_0]))), -11082242964615069424))));
                arr_7 [i_0] [i_0] [i_0] = (((((((var_6 ? var_2 : 682629579))))) * var_7));
                arr_8 [i_0] [i_1] [i_1] = (arr_1 [i_0] [i_0]);
            }
        }
    }
    var_12 *= var_7;
    var_13 = (max(var_13, 0));
    #pragma endscop
}
