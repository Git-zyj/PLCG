/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_10 ? (136 & 3615) : ((var_13 ? 7 : var_10))))) || var_6));
    var_16 = (max(var_16, (((((((var_2 ? 136 : var_12)))) ? (((62197 / var_11) ? (var_2 <= var_2) : var_6)) : var_1)))));
    var_17 = ((((var_5 <= ((var_13 ? var_3 : 119)))) ? var_0 : var_2));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (min((var_9 + 59464), (var_10 || var_6)));
        arr_2 [i_0] = var_4;
        var_19 *= (((!var_14) >> ((((0 | (((3639 ? var_2 : 120))))) - 17098187420114306740))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((((var_4 ? 4494803534348288 : (!var_5))) >> (((min(((min(119, var_14))), (arr_4 [i_1 + 3]))) - 44))));
        var_20 = 125;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_21 = (((((var_2 ? (arr_10 [i_3] [i_3] [i_3 + 1]) : var_10))) ? ((((arr_10 [i_3] [i_3] [i_3 - 3]) / var_9))) : var_7));
                        var_22 = var_8;
                        var_23 = var_3;
                        arr_13 [i_4] [i_2] [i_3 - 3] [i_1] = (((var_14 <= ((124 ? 242 : 136)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
