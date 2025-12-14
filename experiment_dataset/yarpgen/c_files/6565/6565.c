/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_18 *= 5561409388260220954;
                arr_4 [i_1] [i_1] [i_1] = ((-(((arr_3 [i_0] [i_0] [i_0]) ? (((1236955157 ? 8388604 : (arr_0 [i_0])))) : (arr_1 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [9] [i_1] [i_1] = ((((min(4286578697, (var_15 > var_10)))) ? ((~(arr_3 [i_1 - 3] [i_1 - 3] [i_0 - 2]))) : (((var_7 ? (var_5 >= var_0) : (8388604 <= var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((((((-9223372036854775807 - 1) + var_15))))) + -5)))));
                                var_20 = (var_10 >> (((((arr_9 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 4]) ? (arr_5 [i_4] [i_2] [i_0] [i_0]) : (max(9223372036854775802, 9439)))) + 29)));
                                arr_13 [i_0] [i_2] [i_0] &= (arr_9 [i_0] [i_2] [i_3] [i_4]);
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((((((arr_6 [i_1] [8] [i_1 - 3]) ? (arr_11 [i_1 + 1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 1]) : (arr_9 [i_1 - 3] [i_1 - 3] [i_1] [i_1])))) ? ((((((8388599 - (arr_9 [i_0] [i_0] [i_1] [i_0])))) ? (((var_13 <= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4])))) : 9463))) : (max(var_10, (arr_3 [i_0] [i_0 - 2] [i_1 - 3])))));
                                var_21 = min(-9456, 55341);
                            }
                        }
                    }
                    var_22 = (var_7 - -3196790652735988188);
                    arr_15 [i_1] [i_1] [4] [i_1] = ((-(~19721)));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_23 = (arr_17 [i_0] [i_0] [i_1]);
                    var_24 = ((18274 ? 9443 : 8388601));
                    var_25 = (max(var_25, (arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_1 - 1] [i_5 + 1] [13])));
                    var_26 = 8388626;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_27 = (-127 - 1);
                    arr_20 [11] [i_1] [i_1] [i_0] = ((max(127, 0)));
                }
            }
        }
    }
    var_28 = ((((max(613870900, 41509))) >= ((var_0 ? (var_11 - var_7) : (var_10 / var_10)))));
    #pragma endscop
}
