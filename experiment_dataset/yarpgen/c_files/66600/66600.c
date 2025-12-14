/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (!var_0);
    var_18 = (((((var_8 ? var_11 : var_2))) ? (var_11 <= var_5) : ((-118 ? (min(var_7, var_2)) : var_7))));
    var_19 = (-67 - -118);
    var_20 = (((~var_16) | (max(var_15, (var_2 / var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_21 = (arr_3 [i_2] [i_0] [i_0]);
                    arr_7 [i_0] = -228964045;
                }
                /* LoopNest 3 */
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_22 = (min(((((!(arr_4 [i_0] [i_1] [i_4] [i_5]))) ? (min(30496, -1575660511779294370)) : -30515)), (min((min(-8052481319992396944, -3968920269501306086)), -30525))));
                                arr_16 [i_0] [i_0] = (min(var_1, (((!((min(var_10, (arr_10 [i_0] [i_4 - 1] [i_0] [i_0])))))))));
                                var_23 = ((8052481319992396931 ? ((min((arr_3 [i_3 - 4] [i_0] [i_0]), (arr_3 [i_3 + 1] [i_0] [i_3 - 1])))) : -30496));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
