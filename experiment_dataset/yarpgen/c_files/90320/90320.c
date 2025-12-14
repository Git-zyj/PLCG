/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 2] [i_1] = (max(((((!-1) < var_12))), var_9));
                arr_5 [i_1 - 1] [i_0] [i_0] = ((var_15 << (((max(((min(var_13, -1))), (((arr_1 [i_0]) ? var_0 : -9223372036854775802)))) - 24194))));
                arr_6 [i_0] [i_0] [i_0] = ((((min((max(var_7, var_9)), (arr_1 [i_0])))) == (min((var_13 != var_10), (~var_5)))));
            }
        }
    }
    #pragma endscop
}
