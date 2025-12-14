/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_10;
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((5 != ((~(arr_1 [i_1]))))))) - (var_1 & var_6));
                arr_5 [i_0] [i_0] [10] = 16888;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [4] = 16889;
                            arr_11 [i_3] [i_3] [i_2] [i_3] &= 1;

                            for (int i_4 = 3; i_4 < 19;i_4 += 1)
                            {
                                var_15 = ((-(min((((arr_0 [i_2] [i_1]) * var_2)), var_2))));
                                arr_14 [i_0] [i_0] = (arr_2 [i_1] [i_0] [17]);
                                var_16 &= ((6240 ^ (((-5311047346575626140 + 9223372036854775807) << (((-16879 + 16894) - 15))))));
                                arr_15 [i_1] [i_1] [i_0] = var_6;
                            }
                            for (int i_5 = 3; i_5 < 19;i_5 += 1)
                            {
                                arr_20 [2] [i_3] [i_5 + 1] [i_3] [i_3] [i_0] &= ((var_7 ? (((min(42, 1)))) : (arr_7 [i_0] [i_1] [19] [i_3])));
                                var_17 = 591817749;
                                arr_21 [i_0] [i_0] [i_3] [i_2] [i_5 - 2] = (((((min(13082, var_7)))) ? (-31183 % 150) : (((!(arr_18 [i_0] [i_5 - 1] [i_5 - 1] [i_0] [13]))))));
                                arr_22 [i_0] [i_0] [i_2] [i_3] [i_3] = (arr_18 [i_0] [i_1] [16] [i_0] [i_5 + 3]);
                                var_18 = (((!-16864) ? ((((((arr_19 [i_0] [i_3] [i_3] [i_3] [i_5 + 2]) ? var_8 : 760875022))) ? (max(var_11, -1841938254594946319)) : ((min(9652, var_10))))) : (((13013042390620515743 ? 3052057730 : -111)))));
                            }
                            for (int i_6 = 4; i_6 < 21;i_6 += 1)
                            {
                                arr_26 [i_0] = 31785;
                                arr_27 [i_6] |= ((min(((min(1, var_2))), (min(22571, -4828518700994927834)))));
                            }
                            var_19 ^= (((((-31183 ? 31179 : -813286972))) <= var_1));
                        }
                    }
                }
                var_20 += (arr_9 [i_1] [i_1] [1]);
            }
        }
    }
    #pragma endscop
}
