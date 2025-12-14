/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = (max((min(var_9, (var_9 != var_0))), (((!(((var_10 << (var_9 - 1665367030028306613)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((-(((!var_6) >> (((~var_3) - 2325659195))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [5] [5] [i_1] [i_3 - 1] = (((!var_9) ? (min(var_4, (min(var_7, var_3)))) : (((-var_2 ? var_10 : var_4)))));
                            var_14 = var_6;
                            var_15 = var_11;
                            var_16 = ((((((~var_1) ? ((var_3 ? var_7 : var_1)) : ((min(var_11, var_1)))))) ? (!var_6) : ((var_0 ^ ((min(var_2, var_10)))))));
                        }
                    }
                }
                var_17 = (min(((max((max(var_5, var_0)), var_7))), (min((((var_3 << (var_2 + 1357)))), var_9))));
                var_18 += ((((((!var_4) + ((min(var_4, var_11)))))) ? (max(var_8, var_5)) : var_10));
            }
        }
    }
    var_19 = (!((max((max(var_3, var_10)), var_4))));
    var_20 = (((~((var_3 ? var_8 : var_2)))));
    #pragma endscop
}
