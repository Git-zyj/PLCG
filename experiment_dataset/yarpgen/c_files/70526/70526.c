/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_12 ^= min((((-(arr_1 [i_1 - 1] [i_1 - 1])))), (max(var_6, ((var_2 ? var_6 : var_8)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = ((~(((!((!(arr_9 [i_1]))))))));
                                var_14 = ((((max(((var_10 ? 859058477 : var_7)), ((-(arr_4 [i_4] [i_0] [i_0])))))) && var_10));
                                arr_12 [6] [i_1] [6] [i_3] [i_0] |= 18446744073709551606;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_16 [i_1] [i_5] = ((((23610 ? 5387245608140918702 : -859058460))) ? ((((arr_3 [i_1 + 1] [0]) < (arr_3 [i_1 + 1] [i_1 - 1])))) : (max(97, ((123 ? 859058483 : (arr_0 [i_1 + 1] [i_0]))))));
                    var_15 = var_6;

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_16 = (min(var_16, (((((max((arr_17 [i_6] [i_1 + 1] [i_1 + 1]), (arr_8 [i_0]))) >> (((~-10672) - 10630))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_1] = var_7;
                    }
                    var_17 |= ((-(min((arr_15 [i_0] [i_0]), 96))));
                }
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    var_18 = ((((!(((1679460456 ? (arr_8 [i_0]) : 179))))) ? ((((!(arr_19 [i_0] [i_1] [i_1] [i_1] [i_7 - 1] [i_1 - 1]))))) : ((((((arr_7 [i_1]) ? (arr_22 [i_0] [i_0] [i_7] [i_7 - 1]) : 1525006442))) ? (max((arr_10 [i_1] [i_1] [i_7] [i_7 + 3] [i_7 + 3] [i_1 - 1] [i_1]), var_8)) : -154))));
                    var_19 = (!var_3);
                    arr_23 [i_1] [i_1] [i_0] [i_0] = ((159 ? ((-(arr_6 [i_0]))) : var_7));
                    arr_24 [i_1] = (!93);
                }
                var_20 = (!var_4);
            }
        }
    }
    var_21 = -var_9;
    var_22 = ((-(((!(~var_8))))));
    #pragma endscop
}
