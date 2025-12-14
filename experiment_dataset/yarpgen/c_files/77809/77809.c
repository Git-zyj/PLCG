/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_9 + 9223369837831520256);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((max(((((9223374235878031359 + var_5) ? var_8 : 1))), ((var_7 - (max(63366, 9223374235878031359)))))))));
                arr_4 [i_0] [i_0] = ((22867 ? 9223372036854775807 : ((((max(9223369837831520256, 0)))))));
            }
        }
    }
    var_16 = (max(var_16, (((var_7 ? var_5 : ((1016804636 ? ((var_2 ? var_8 : -1)) : var_6)))))));
    var_17 = var_3;
    #pragma endscop
}
