/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [11] [i_1] [i_2] = ((((max(var_12, (arr_0 [i_0 + 1])))) ? (arr_0 [i_2]) : ((1840683964 * (min(12084988913154317912, 210))))));
                    arr_8 [6] [i_1] [i_0] [6] = -var_2;
                    arr_9 [i_0] [6] |= ((~(7 && -1778660599)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0 - 1] [i_1] = ((((max((arr_3 [i_2 + 1] [i_4 + 1] [i_1]), (arr_3 [i_2 + 1] [i_4 + 1] [i_1])))) ? (((arr_1 [i_0 - 1]) << ((min(-85, var_1))))) : (min(-var_7, (arr_3 [i_1] [i_1 - 1] [i_1])))));
                                arr_16 [0] [i_1] [i_1] [i_3] [i_4] = ((~(((!((max(var_7, 4161536))))))));
                                arr_17 [i_1] = (min((min((!2115792779592928656), var_1)), (((!(((9049809894808402625 << (-23 + 36)))))))));
                                arr_18 [i_0] [i_1 + 1] [i_2] [10] [i_4] [i_4 - 1] [i_4] = (((min((arr_0 [i_2 + 1]), var_18)) < ((((!(arr_10 [2] [i_0] [i_0] [i_0] [i_0 + 1])))))));
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [i_1] [i_0] = (max((max((arr_5 [i_1 + 1]), (arr_1 [i_0 - 1]))), (arr_1 [i_0 + 1])));
                }
            }
        }
    }
    var_21 = (min(0, (((((var_17 ? -15 : 592200351))) ? (!var_7) : var_7))));
    #pragma endscop
}
