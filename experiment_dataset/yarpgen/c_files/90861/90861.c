/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((((1 >= (!1899530836)))) <= 0))));
                                var_16 = 0;
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (((max(3072, 2627762750))) ? ((((arr_12 [i_0 + 3] [i_1] [6] [i_1] [i_1]) || 4034))) : (1667204541 >= 1163059402));
            }
        }
    }
    var_17 ^= ((!((((((var_11 ? 1 : var_11))) ? var_9 : (!var_10))))));
    var_18 ^= var_1;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_19 -= (((var_7 * var_12) || ((max((((0 ? 125 : (arr_18 [8])))), ((137 ? var_13 : 3135894691)))))));
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 = ((!(((var_7 ? (!3328771333177449847) : (arr_19 [i_6] [i_6]))))));
                                arr_27 [i_6] = (max((((~511) ? ((-8166820088933694037 & (arr_20 [12] [i_6] [6] [i_6]))) : (137 ^ var_12))), (arr_25 [i_5] [i_6] [i_5] [i_6] [i_5] [i_5] [i_5])));
                                var_21 = (arr_26 [i_6] [i_6]);
                                var_22 = (min(var_22, ((min((max((max(var_10, var_1)), (arr_19 [i_9] [i_9]))), 231)))));
                            }
                        }
                    }
                }
                var_23 = ((((((-15 / 2627762747) / 148))) ? ((-(var_1 / var_10))) : (arr_26 [i_6] [i_6])));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_24 ^= (max((max((arr_29 [i_10 - 2] [0] [0]), (arr_32 [i_10 - 3] [i_11] [i_11] [i_11]))), (((arr_24 [i_10 + 2] [i_10 + 2] [8] [i_11] [1] [i_10 + 2]) ? (arr_32 [i_10 - 3] [i_10] [4] [i_11]) : (arr_32 [i_10 + 1] [i_11] [i_11] [i_11])))));
                            var_25 = ((!(arr_22 [i_11] [1] [0] [i_11])));
                            arr_33 [i_6] [i_6] = (max((min((((arr_29 [i_5] [i_6] [i_11]) ? var_13 : 1667204545)), (min((arr_19 [i_6] [4]), var_10)))), ((9223372036854775807 ? 3072 : 2627762751))));
                            var_26 = (max(var_26, (arr_23 [8] [i_6] [i_6] [i_6] [i_6] [i_6])));
                            arr_34 [i_6] [i_6] [i_5] = ((((!var_1) + (arr_20 [4] [3] [i_6] [i_5]))) >= 242);
                        }
                    }
                }
                arr_35 [i_6] [i_6] = ((((9223372036854775791 - (((max((arr_15 [13] [13]), (arr_14 [i_5]))))))) - 65));
            }
        }
    }
    #pragma endscop
}
