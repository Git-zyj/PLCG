/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_0 ? ((1840 ? var_2 : var_8)) : ((var_10 ? var_8 : var_3)))) >> (((((((var_1 ? var_10 : -1820))) ? var_6 : var_10)) - 11258908882040708549))));
    var_12 = ((23596 ? 1840 : 1840));
    var_13 = (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_10;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1] = (((var_0 == var_1) || (((9223372036854775792 ? var_2 : var_3)))));
                                arr_13 [i_0] [i_1] = ((((((((var_5 ? var_8 : var_10))) ? var_10 : (var_5 | var_9)))) ? ((1 + (1 >= var_9))) : ((max(var_9, var_10)))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = (((((var_7 ? (var_6 || 37) : ((var_7 ? 1 : -1840))))) ? -1833 : (((!(!var_10))))));
                arr_15 [i_0] [i_1] [i_1] = (((((var_7 ? ((var_0 ? var_6 : var_10)) : (var_2 >= 1048575)))) || (((var_2 ? var_5 : var_3)))));
                arr_16 [i_0 - 3] [12] [i_0] = ((var_10 ? ((var_3 ? var_1 : 4294967295)) : (1840 % var_10)));
            }
        }
    }
    #pragma endscop
}
