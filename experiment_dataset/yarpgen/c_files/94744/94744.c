/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_2, (((((var_8 ? var_4 : 1)) << (var_1 - 3640881446))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((min((arr_2 [i_1]), ((-(arr_4 [i_1]))))))));
                var_20 = (((arr_0 [i_1]) == ((((1 >= (arr_2 [i_0])))))));
                var_21 = ((1 ? (min((((arr_1 [i_1]) ? (arr_1 [1]) : (arr_1 [i_0]))), ((max(var_9, var_0))))) : 36));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 = (min((((arr_8 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? 0 : ((1 ? (arr_12 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3]) : var_2)))), 14822789272188746938));
                                var_23 = -16126;
                                var_24 = var_13;
                            }
                        }
                    }
                    arr_16 [i_1] = 1;
                    arr_17 [i_0] [i_1] [i_2 - 1] = var_10;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] [i_5] [i_5] = var_7;
                    arr_23 [i_0] [i_5] [1] = 5597345146516202752;
                    arr_24 [i_5] = ((((+(((arr_9 [11] [11] [i_5]) ? 1 : 2049084970)))) / (min((min(-32745, -1764088176)), 1))));
                    var_25 = (i_5 % 2 == zero) ? ((min((min((arr_3 [i_0]), ((-9129788614092245567 ? var_16 : 225)))), (((((arr_5 [i_0] [12]) << (arr_19 [i_5] [i_5] [i_5]))) * ((~(arr_14 [i_5] [6] [i_1] [i_1] [i_1] [i_0] [i_0])))))))) : ((min((min((arr_3 [i_0]), ((-9129788614092245567 ? var_16 : 225)))), (((((arr_5 [i_0] [12]) << (((arr_19 [i_5] [i_5] [i_5]) + 103)))) * ((~(arr_14 [i_5] [6] [i_1] [i_1] [i_1] [i_0] [i_0]))))))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    arr_27 [1] [i_1] [i_1] [i_0] = (min((((~var_3) | ((min(32256, 1))))), var_8));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_26 = ((~((min(((max(1, var_15))), -16114)))));
                        var_27 -= (arr_29 [i_0]);
                    }
                    arr_31 [i_0] = 288230101273804800;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, (arr_33 [i_1])));
                    var_29 = ((((-9 ? var_13 : ((min(1236795781425641440, 2049084970))))) >> (2049084984 - 2049084982)));
                }
            }
        }
    }
    #pragma endscop
}
