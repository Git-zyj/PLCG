/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (25 * 213);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = -16851489523762746152;
                            arr_11 [i_3] [i_2] [i_2] [i_0] = ((~(((((var_3 / (arr_8 [i_2] [i_2]))) == var_3)))));
                            var_14 = ((-17516713290010274708 ? (arr_0 [i_3] [i_0]) : ((min((arr_0 [i_2] [i_1]), (arr_0 [3] [i_1]))))));
                            var_15 = (i_2 % 2 == zero) ? (((((((var_6 <= (arr_9 [i_2] [i_1] [i_2]))) ? (min(var_9, 1595254549946805434)) : (arr_8 [i_2] [i_2]))) << (((((-5 != 68) ? (arr_8 [i_2] [i_2]) : ((min(25621, (arr_4 [i_3] [i_2] [i_2] [i_0])))))) - 14626))))) : (((((((var_6 <= (arr_9 [i_2] [i_1] [i_2]))) ? (min(var_9, 1595254549946805434)) : (arr_8 [i_2] [i_2]))) << (((((((-5 != 68) ? (arr_8 [i_2] [i_2]) : ((min(25621, (arr_4 [i_3] [i_2] [i_2] [i_0])))))) - 14626)) - 3689)))));
                            arr_12 [i_2] [i_1] [i_2] = ((!(((((((arr_0 [i_2] [i_0]) << (25621 - 25616)))) ? ((-47 ? 70 : 3133672209419737552)) : (146 <= 11646091263493178884))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 = ((((((((arr_15 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : 6512139727301073254))) ? 63221 : (arr_1 [i_1] [i_4]))) & ((((arr_4 [i_0] [i_0] [i_4] [i_5]) + (arr_1 [i_0] [i_1]))))));
                            var_17 = (((arr_4 [i_0] [i_1] [i_4] [i_5]) != (min((min(var_7, (arr_1 [i_1] [i_0]))), ((1 ? (arr_7 [i_1] [i_1] [i_1]) : (arr_6 [i_5] [i_1] [i_0])))))));
                            var_18 = 89;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 = (arr_5 [i_0] [6] [i_1] [i_0]);
                            var_20 = (((((arr_19 [i_0] [i_0] [i_0] [i_0]) | (((arr_17 [i_0] [i_0]) / 45068)))) & (((!((min(0, -30))))))));
                            var_21 ^= ((((min((min(-34, (arr_24 [i_7] [i_6] [i_1] [7]))), 0))) ? 39919 : (min(1504042467, 4294967272))));
                        }
                    }
                }
            }
        }
    }
    var_22 += (((-(min(190, var_11)))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                arr_29 [i_8] [i_9] [i_8] = 14033806800252960185;
                var_23 -= 15313071864289814063;
            }
        }
    }
    #pragma endscop
}
