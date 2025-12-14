/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] [i_1] = var_1;
                arr_7 [16] = ((!(arr_5 [i_0] [i_0])));
                var_21 = (-1 > 39000);
                arr_8 [i_0] &= -5897739832995711063;
                arr_9 [i_0] = 5897739832995711053;
            }
        }
    }
    #pragma endscop
}
