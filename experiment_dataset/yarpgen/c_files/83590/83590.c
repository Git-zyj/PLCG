/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_19);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (((arr_2 [i_0 + 3] [i_1 + 1]) < (((!var_10) ? ((((arr_5 [i_0]) + (arr_6 [i_2] [i_2] [i_2])))) : ((var_6 ? var_8 : var_18))))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (max((((!((max(5648833197992943429, -5648833197992943453)))))), -var_17));
                    var_21 -= (((arr_5 [1]) * (4294967282 <= 3256735300483347446)));
                }
            }
        }
    }
    var_22 = ((var_9 ? var_16 : ((var_10 ? 248 : (var_14 * var_3)))));
    var_23 = var_8;
    #pragma endscop
}
