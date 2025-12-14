/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = min((arr_0 [i_0]), (arr_2 [i_1] [i_0]));
                var_14 = (max((((min(10197909732760910583, 2089240525)) - 88)), 1088213185222783607));
            }
        }
    }
    var_15 = var_6;
    var_16 = var_8;
    #pragma endscop
}
