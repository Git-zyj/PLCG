/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((((!var_6) ? ((var_5 ? var_6 : var_5)) : 14398145482431382550)), (((var_2 ? (var_9 | var_0) : ((var_8 ? var_4 : var_8))))));
    var_15 = (min((((((var_8 ? var_5 : var_3))) ? (~var_13) : (var_11 & var_9))), (((var_0 ? (~3874802931) : (((max(var_6, -74)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = ((15251534627087815528 ? (((((var_12 * (arr_3 [i_0] [i_1] [i_2])))) / var_2)) : 4048598591278169066));
                    var_17 = (i_0 % 2 == zero) ? (((((((var_4 - var_8) << (((max((arr_3 [i_0] [i_1] [i_2]), (arr_0 [i_1] [i_0]))) - 4294967212))))) ? (((var_10 && var_10) ? (((arr_0 [i_0] [i_0]) ? var_11 : var_0)) : (arr_0 [i_2 + 3] [i_0]))) : (((arr_2 [i_0]) ? (((arr_4 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : var_3))))) : (((((((var_4 - var_8) << (((((max((arr_3 [i_0] [i_1] [i_2]), (arr_0 [i_1] [i_0]))) - 4294967212)) - 4158468756))))) ? (((var_10 && var_10) ? (((arr_0 [i_0] [i_0]) ? var_11 : var_0)) : (arr_0 [i_2 + 3] [i_0]))) : (((arr_2 [i_0]) ? (((arr_4 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : var_3)))));
                    var_18 = ((var_8 ? ((((arr_3 [i_0] [i_1] [i_2]) || (arr_0 [i_0] [i_0])))) : (((var_1 > ((max(var_9, var_0))))))));
                    var_19 = var_6;
                    var_20 = (min((arr_3 [i_2] [i_1] [i_0]), ((var_9 ? (arr_3 [i_2 + 2] [i_1] [i_0]) : var_3))));
                }
            }
        }
    }
    var_21 = (((((var_5 == var_12) && var_1)) ? (var_3 % var_4) : var_12));
    var_22 = (((min(((((-127 - 1) && 0))), (~var_4)))) ? (min((var_3 << var_3), (var_13 * var_0))) : var_1);
    #pragma endscop
}
