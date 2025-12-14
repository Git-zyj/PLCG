/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (((!7) << (((((var_0 ? var_2 : 21198))) ? (!var_11) : ((max(1, 1)))))));
                arr_7 [i_0] = ((!(!var_5)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3 + 1] [i_2] [i_2] = ((~(((((var_9 ? 1198010534 : var_11))) ? ((61649 ? var_12 : -1750365634)) : (~var_0)))));
                    arr_17 [i_2] [i_3] = (((min((max(var_3, -5244319568345993291)), var_9))) ? (min((max(-1, var_9)), (~-7344588868556264186))) : (((((var_8 >= -5423726239906211085) && (((0 ? var_4 : var_4))))))));
                }
            }
        }
    }
    var_14 = ((((max(1172342760, -6896615787415622047))) ? (((((var_0 ? var_0 : var_10))) ? (max(var_1, var_2)) : (!var_2))) : (!var_3)));
    #pragma endscop
}
