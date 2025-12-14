/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_8 ? ((var_10 ? var_6 : var_9)) : (((var_3 ? var_1 : var_8))))), ((min((min(var_0, var_7)), (!var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = ((~((min(var_3, var_2)))));
                            arr_8 [10] [i_0] [i_0] [i_0 + 2] = var_3;
                            var_13 = (min((((((var_5 ? var_4 : var_5))) ? ((var_1 ? var_9 : var_3)) : var_3)), ((min(1, -4730)))));
                        }
                    }
                }
                var_14 = (max((((((max(var_0, var_8))) ? var_3 : var_7))), (max(-var_5, ((var_4 ? var_5 : var_3))))));
            }
        }
    }
    var_15 = ((((!(((var_4 ? var_7 : var_4))))) ? ((~(max(var_3, var_8)))) : var_1));
    #pragma endscop
}
