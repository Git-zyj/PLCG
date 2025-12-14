/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min(((min(var_1, var_7))), (max(3814450710743474627, 3814450710743474626)))), (((var_9 ? var_0 : ((-2387 ? 1628031487 : -120)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_3;
                var_11 ^= (((~(~3814450710743474627))));
                arr_7 [i_0 + 1] [i_1] [i_0] = (min(((min((arr_2 [11] [i_0 - 2]), var_7))), ((30 ? 1 : 10886628632116987938))));
            }
        }
    }
    var_12 -= var_3;
    #pragma endscop
}
