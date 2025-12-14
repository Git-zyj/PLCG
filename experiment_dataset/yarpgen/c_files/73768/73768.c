/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((min((~var_14), (!var_16)))), (((!var_18) ? (!var_15) : ((var_3 ? var_17 : var_1))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = (((((var_10 ? (var_7 % var_13) : var_6))) ? ((~(~var_6))) : ((max(var_2, ((min(var_15, var_5))))))));
        arr_3 [i_0] = (max((((!(((var_10 ? var_5 : var_13)))))), (max(-var_8, var_11))));
        var_21 = (!var_4);
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] &= (min((var_11 | var_7), ((var_15 ? var_7 : var_12))));
        arr_8 [5] = (((((var_16 ? var_16 : var_4))) ? (~var_4) : (!var_14)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_13 [i_2] = (max((((!var_2) ? ((var_5 ? var_2 : var_2)) : (!var_2))), (!var_2)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    var_22 = ((((max(var_4, var_9))) ? var_0 : var_10));
                    arr_20 [i_2] [19] = (((-(min(var_17, var_18)))));
                }
            }
        }
        arr_21 [i_2] [i_2] = (((((~((var_9 ? var_4 : var_11))))) / (max((var_7 <= var_15), ((var_9 ? var_4 : var_17))))));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_23 = ((~(((var_5 || (!var_18))))));
        arr_25 [i_5] = (((((-(!var_16)))) ? (((var_11 ? var_6 : var_3))) : var_3));
        var_24 = ((max(var_16, (!var_1))));
        var_25 *= (max((((!var_3) ? (((max(var_18, var_18)))) : var_14)), (((!(var_8 & var_4))))));
    }
    var_26 = var_11;
    #pragma endscop
}
