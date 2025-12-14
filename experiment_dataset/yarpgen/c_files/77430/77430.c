/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-(min(0, 2641817191))))) ? var_10 : var_13));
    var_18 = (~2641817208);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (((var_15 + 2471488967) ^ ((((var_6 >= (arr_6 [i_2 - 1])))))));
                                var_20 ^= (~1);
                            }
                        }
                    }
                }
                var_21 = (max(var_5, (((var_0 >= (((1653150089 ? var_4 : 1))))))));

                /* vectorizable */
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    arr_16 [6] [1] [i_1] = 62399;
                    var_22 = -8952;
                    var_23 = ((1 ? -24 : (arr_15 [i_1] [i_5 + 3] [i_5 + 3] [0])));
                }
                arr_17 [i_1] [i_1] [i_0] = ((!(((-(arr_8 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_24 = var_6;
    var_25 = (((((!var_11) ? var_14 : ((0 ? var_12 : var_15)))) >> var_3));
    #pragma endscop
}
