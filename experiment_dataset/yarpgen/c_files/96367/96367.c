/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_0;
                arr_7 [i_0] [i_0] = ((~(((!(arr_5 [i_1 + 2] [i_0]))))));
                arr_8 [i_0] [i_0] = var_2;
                var_21 = 2254572274;
                arr_9 [i_0] [i_0] [i_1] = var_9;
            }
        }
    }
    var_22 = var_17;
    var_23 |= (min(var_1, ((min((~4294967295), var_12)))));
    #pragma endscop
}
