/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max(15872168344537673464, (((!(((var_19 ? var_15 : var_0))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0]) == var_0))) >= (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = ((((!(!7107))) ? (((((-(arr_6 [i_0] [i_0] [16] [i_0]))) - ((var_8 ? var_3 : 1))))) : (((arr_8 [i_0] [i_0] [i_3 - 1] [i_0]) ? (arr_3 [i_3 + 2] [i_0]) : (arr_3 [i_3 - 1] [i_0])))));
                                var_21 = (max(((((1 + 4) >> ((((max(182, (arr_4 [i_0])))) - 155))))), (min((arr_0 [14]), ((var_9 ? var_2 : var_6))))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_2] |= 1;
                }
            }
        }
        arr_15 [i_0] = var_2;
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_22 = ((+(max((((arr_5 [i_5] [i_5]) % (arr_9 [i_5] [i_5 + 1] [i_5] [i_5]))), 1))));
        var_23 = 1;
    }
    var_24 = (((4651 && -4150074136997372891) ? var_5 : (((var_1 ? var_4 : var_14)))));
    #pragma endscop
}
