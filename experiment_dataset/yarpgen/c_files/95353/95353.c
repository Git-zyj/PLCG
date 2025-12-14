/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += -var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 &= ((((max(1, var_7))) & (-101 ^ var_9)));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((-(arr_5 [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_14 += ((((-((var_11 ? var_8 : 641526865143041577))))) ? var_4 : var_1);
    var_15 = var_5;
    #pragma endscop
}
