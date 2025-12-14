/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                                arr_12 [i_0] [i_2] [i_0] = (((~var_19) ? var_15 : ((63 ? 101 : var_3))));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [3] [i_1] [i_1 + 1] [i_2] [i_3] [i_5] = var_7;
                                arr_16 [i_0] [i_5] [i_2] [i_2] [14] [8] [i_5] = (max(var_0, ((((((-(arr_8 [i_0] [1] [i_0] [i_0])))) ? -20638 : (~var_10))))));
                            }
                            arr_17 [i_0] [i_1] [i_2] [i_0] = (var_14 == var_13);
                            arr_18 [0] [14] [14] [2] = ((~(arr_8 [0] [i_2] [i_0] [i_0])));
                            arr_19 [i_0] [i_0] = ((max((arr_3 [i_1 + 2] [i_1 + 2]), 1586612843821767437)));
                        }
                    }
                }
                arr_20 [i_0] = (~192);
                arr_21 [10] = (max((((var_14 ? (arr_4 [0] [0]) : (arr_4 [2] [2])))), ((-(arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
            }
        }
    }
    var_21 = (((max((~15), (!var_18))) - var_14));
    #pragma endscop
}
