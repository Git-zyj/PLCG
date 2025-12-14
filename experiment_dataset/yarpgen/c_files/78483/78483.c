/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= -var_13;
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((((arr_1 [i_0] [i_0]) ? var_5 : 13449)) | ((((~var_3) ? var_10 : var_4)))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [5] [i_4] = (!32380);
                                var_19 = ((((max(var_3, var_2)) ^ var_11)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_20 = (min((arr_11 [i_0] [i_0] [i_2] [i_5] [i_6 + 1]), (min((arr_18 [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6]), (-25733 + 578886274933346070)))));
                                var_21 ^= (-1193278748545116159 == 578886274933346070);
                                var_22 = (max(var_22, ((min(var_11, (((-1193278748545116159 ? (arr_7 [i_0] [i_1] [i_2] [0]) : var_1))))))));
                            }
                        }
                    }
                    var_23 = var_12;
                    var_24 = -19944;
                    var_25 ^= (((arr_8 [i_0] [1]) < ((min(-var_13, (arr_17 [i_0] [i_1]))))));
                }
            }
        }
    }
    var_26 = ((((((5019081210377659184 ? 95 : -25733)))) << (((max(var_2, 647785720)) - 647785701))));
    var_27 = (var_11 ? (!3055635218118329284) : ((-9948 ? 1931363628 : -793798985)));
    #pragma endscop
}
