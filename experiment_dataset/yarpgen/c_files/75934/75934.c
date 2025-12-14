/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(3965471197861375507 - 6)));
    var_14 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((-14481272875848176124 * (65531 * 177)));
                arr_7 [i_0] [i_0] [i_0] = ((-(max((arr_6 [i_0 + 3] [i_1 - 1]), var_1))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    arr_11 [1] = ((16888886405815803625 ? var_6 : var_0));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_2 - 1] [i_2 - 1] = 35129;
                                var_16 = (arr_5 [i_0 - 1] [i_2 + 3] [i_1 - 1]);
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_17 = ((-var_12 < (max((arr_5 [i_0] [i_1] [i_0]), (((arr_13 [i_1] [i_1] [i_5 + 2]) ? 1 : var_6))))));
                        var_18 = (min(var_18, 3965471197861375520));
                    }
                    var_19 = (arr_4 [i_0 + 1] [i_0]);
                    var_20 = (arr_16 [0] [i_1 - 1] [i_1] [i_0 + 3] [i_1 - 1] [i_1]);
                    arr_25 [i_5] [i_5] = (min(((((!var_3) > 1))), var_2));
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_21 = (((6288175073221913498 ? var_0 : 4118072645062313288)));
                    var_22 = (((((max(var_2, var_4)) ? var_1 : (((arr_15 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [11]) ? var_9 : var_8)))) / 1));
                }
                arr_29 [i_1] = ((-var_4 ? (arr_27 [i_0 + 3]) : ((-(arr_4 [i_0 + 1] [i_1 - 1])))));
                var_23 = 28530;
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
