/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(((var_6 ? var_15 : 15266285536698792469)), var_10)) <= ((((max(var_4, var_10))) ? var_6 : (min(var_3, var_4))))));
    var_17 = var_2;
    var_18 = (max(((var_1 ? (~var_4) : (~var_2))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((~((var_8 ^ ((~(arr_0 [i_0])))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_20 = ((var_11 ? (var_6 <= var_6) : (var_8 & 1)));
                    var_21 = (((arr_7 [i_0] [i_1] [i_0]) ? ((var_1 ? var_12 : var_2)) : ((var_15 ? 2251799746576384 : (-127 - 1)))));
                    var_22 = (21 | 1);
                    var_23 = var_8;
                    var_24 = (((((arr_1 [i_0]) && 288230376151711744)) ? (((arr_5 [i_2]) | var_2)) : (var_5 == var_3)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_25 = var_9;
                    var_26 = (-6 && 0);
                }
            }
        }
    }
    #pragma endscop
}
