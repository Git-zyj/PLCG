/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_1 >= var_7);
    var_21 = (((((~var_18) ? var_7 : (((241 ? 65520 : var_13))))) >= var_19));
    var_22 = 6618261160023451599;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_1]))));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_23 = (min(var_23, (((((max((((var_4 != (arr_3 [i_0] [i_1] [i_2])))), var_8))) ? (max(6618261160023451610, var_5)) : var_17)))));
                    var_24 = (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_25 = (!50962);
                                var_26 = (~215219163);
                                var_27 = 6618261160023451599;
                                var_28 = (((!var_0) ? (~-26714) : ((min((arr_0 [i_4]), (arr_0 [i_1]))))));
                                var_29 = (((((((1346409141 - (arr_10 [i_1])))) ? (max((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_2 [i_0]))) : -67)) - (((6618261160023451610 ? -6618261160023451599 : (((6618261160023451592 ? (arr_3 [i_0] [i_2] [i_3]) : 4194303))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
