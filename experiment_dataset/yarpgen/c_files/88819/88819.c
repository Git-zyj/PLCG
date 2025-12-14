/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_4, (1 + var_11)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_0 - 1] [i_0] &= (arr_1 [i_1] [i_3 - 2]);
                        var_20 = (i_0 % 2 == 0) ? ((((!var_16) >> (((arr_11 [i_0]) + 641157590))))) : ((((!var_16) >> (((((arr_11 [i_0]) + 641157590)) - 2117758419)))));
                    }
                }
            }
            var_21 += (arr_1 [i_1] [i_0 + 1]);
            arr_14 [i_1] &= ((var_18 <= (arr_12 [i_0] [i_0] [i_1] [i_0 - 2])));
            var_22 = (max(var_22, ((((arr_2 [i_0 - 1]) & (arr_1 [i_1] [i_0]))))));
            var_23 = -var_18;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_24 = (min(var_24, (arr_11 [0])));
            arr_18 [1] [i_4] [1] &= ((var_7 ? var_5 : (arr_17 [i_0 - 1] [i_0 - 2])));
        }
        var_25 = (min(var_25, 1));
        var_26 = (max(var_26, (((arr_0 [4] [i_0 + 1]) ? (arr_7 [i_0 + 1] [i_0] [i_0 + 1] [4]) : (arr_11 [0])))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_27 += ((!(((var_13 ? 13422149132180853707 : 1)))));
        var_28 = (min(var_28, ((((1 / -4248214084329364271) - (!4248214084329364270))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = (((arr_22 [i_6]) > ((var_1 ? var_11 : (arr_20 [i_6])))));
        var_29 = (max(var_29, ((((arr_19 [i_6]) ? (arr_19 [i_6]) : (arr_19 [i_6]))))));
    }
    var_30 = (min(var_30, ((min(((min(2147483646, 62187))), var_15)))));
    var_31 = var_4;
    var_32 = ((((var_3 ? var_17 : (~1)))) ? var_1 : (((var_4 % var_11) ? var_11 : (min(-120, -6141799512759712682)))));
    #pragma endscop
}
