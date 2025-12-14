/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_3, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = ((~(14 ^ 11320083176665543683)));
                    var_16 = ((arr_6 [i_0 - 2] [i_1 - 1] [i_2] [i_0 - 2]) ? (~2147483647) : ((max(var_6, 7873))));
                    var_17 = (min((((arr_4 [i_0 + 1] [i_0 - 2] [i_1 + 2]) + -11590)), (max((~var_9), 6))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_18 ^= (((((min(1916793336408938535, var_3)))) ? (((var_8 + 7126660897044007933) ? (arr_4 [i_0 - 2] [i_0 - 1] [i_3]) : 2059490923680253088)) : ((((((arr_6 [i_0 + 1] [1] [i_3] [3]) ^ (arr_5 [i_0] [i_0] [i_3])))) ? var_5 : ((var_13 ^ (arr_4 [i_0] [i_1] [7])))))));
                            var_19 = (((max((arr_3 [i_0 - 2] [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 - 2]))) & ((((((arr_2 [i_0]) % 16))) & (arr_0 [i_0 + 1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = (((((arr_13 [i_5] [i_5 + 2] [i_5] [i_5] [i_1 - 1] [i_0 - 1]) ? (((arr_0 [10] [i_5]) + 9223372036854775807)) : (220742518 + 1))) == ((((var_7 >= ((var_10 ? var_12 : 163))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0 - 1] = ((~((+(((arr_14 [i_0] [i_6] [i_5] [i_6] [i_0]) ? 4 : 112))))));
                            var_20 = (max(var_20, (((((min(1, var_8)) / (arr_17 [i_5] [i_5 + 2] [i_1 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                            var_21 = (max((arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [9] [2]), (((arr_6 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2]) ? 6381668222954576975 : (arr_9 [i_6] [i_6] [i_1 - 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_22 = (((((arr_19 [i_0] [i_0 - 1] [i_0] [5]) * (var_1 / 16387253150029298527))) - ((((arr_4 [i_0 - 1] [i_8 - 1] [i_1 + 1]) ? (arr_27 [i_0] [i_0 - 1]) : 1)))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((arr_0 [i_1 + 1] [i_0 - 2]) ? (arr_0 [i_1 - 1] [i_0 - 1]) : -5405049655882667194)));
                        }
                    }
                }
            }
        }
    }
    var_23 = -18446744073709551615;
    #pragma endscop
}
