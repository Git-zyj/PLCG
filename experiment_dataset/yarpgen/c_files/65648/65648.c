/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (((max(((var_4 ? var_6 : var_7)), ((max(var_5, var_10))))) - var_5));
    var_14 = (max(var_14, (((!(((var_0 ? var_2 : var_5))))))));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_11, ((var_2 ? var_6 : var_9))));
                            var_17 = (max((!var_8), ((((max(var_10, var_3))) ? var_4 : ((var_8 ? var_2 : var_7))))));
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_1] = (((((var_6 ? var_4 : var_1))) ? var_0 : (((((var_3 ? var_6 : var_10))) ? (((var_0 ? var_8 : var_3))) : ((var_6 ? var_11 : var_7))))));
            }
        }
    }
    #pragma endscop
}
