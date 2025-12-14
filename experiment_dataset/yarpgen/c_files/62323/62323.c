/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = 0;
                var_19 = (arr_4 [i_1 - 2] [i_1 - 2]);
                arr_8 [i_0] [i_0] [6] = (max(var_12, var_4));
            }
        }
    }
    var_20 = var_15;
    var_21 = ((((var_1 << (var_0 - 8923602105346260276)))));
    #pragma endscop
}
