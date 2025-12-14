/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min((min(1, 2897746677326274092)), (((!(arr_0 [i_0] [i_1])))))))));
                arr_7 [i_0] [i_0] [i_0] = ((2897746677326274092 - ((min(((min(var_0, (arr_0 [i_0] [i_1])))), var_6)))));
            }
        }
    }
    #pragma endscop
}
