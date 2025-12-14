/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = max((((arr_10 [4] [i_4 + 2] [i_0]) == (arr_17 [i_0] [i_4 + 2] [i_4 + 2] [i_1 - 1] [i_4 + 1]))), (((((13730322198317648600 ? -8480 : 7))) != 1936992395)));
                                arr_18 [i_2] |= (((~((var_8 ? var_13 : var_13)))));
                                var_15 = (min(var_15, ((((-20 % -1142282470) ? (((var_10 != var_6) ? (arr_13 [i_1 - 1] [i_1 - 1] [i_2] [i_4 + 2]) : (arr_6 [i_1 - 1]))) : (((((arr_11 [i_1 - 1] [i_4 + 1] [i_4 + 2]) == -var_12)))))))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] = 7;
                var_16 = ((-((var_0 * (arr_10 [i_0] [i_1 - 1] [i_0])))));
            }
        }
    }
    var_17 = (((((!-21557) && var_6))) >= (min(var_3, (var_1 % var_0))));
    #pragma endscop
}
