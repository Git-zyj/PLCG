/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max(var_3, -var_9));
    var_11 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] = -98;
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((var_2 ? var_6 : (~-37692)));
                    arr_10 [i_0] |= (((-9223372036854775807 - 1) ? (arr_3 [i_2] [i_2] [i_2]) : ((((max(-99, 27412))) ? ((27843 ? 1 : 631644023)) : ((-(arr_3 [i_0] [i_2] [i_2])))))));
                }
            }
        }
    }
    var_12 = (max(var_12, var_0));
    #pragma endscop
}
