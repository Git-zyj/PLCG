/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 11875;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = -var_3;
                var_17 = var_14;
                arr_6 [i_0] [i_1] = (max((((((-3991949531352837926 ? -11875 : 11875)) & (~12357)))), 4177591357));
                arr_7 [i_0] [i_1] = ((var_9 & (-11867 & var_8)));
            }
        }
    }
    #pragma endscop
}
