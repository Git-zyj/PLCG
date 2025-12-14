/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-1 != ((min(3637, var_3)))));
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (min(var_14, (((-((min((arr_9 [i_1] [i_1] [i_0 - 2] [i_1 + 1]), (arr_9 [i_3] [i_1] [i_0 - 1] [i_1 + 1])))))))));
                        var_15 ^= ((-(min(8699, 14732151717121966788))));
                        arr_10 [14] [i_2] = (arr_0 [i_0]);
                        var_16 = max((min(var_5, (arr_2 [i_0 + 3] [i_0 + 3]))), (arr_9 [i_2] [i_1] [i_0 + 2] [i_2]));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_17 = (max((((min((arr_12 [i_2] [20] [i_2] [i_4] [i_2]), (arr_7 [i_1] [i_2] [i_2]))))), (arr_7 [i_0] [i_2] [i_0 + 2])));
                                var_18 -= ((((((-8700 / (-32767 - 1)))) % (min(4740935499044893941, 127)))) >> (min((15663 <= 1), ((896 << (((arr_12 [i_1] [4] [i_2] [i_4] [i_5]) - 4174186686)))))));
                                var_19 = var_1;
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [1] [i_2] = (arr_2 [i_0] [4]);

                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_20 = (arr_16 [i_2]);
                        var_21 -= ((0 ? 58665 : 255));
                        var_22 = (i_2 % 2 == 0) ? ((min((min((((8707 ? var_5 : (arr_8 [1] [i_1] [i_1] [i_2] [i_6])))), -4985629563861464823)), (((((((min(var_0, 0))) + 2147483647)) >> (((((arr_15 [i_0] [i_1] [16] [i_0] [i_6] [i_6] [i_6]) ? (arr_12 [i_2] [i_6] [i_6] [i_6] [i_2]) : var_6)) - 4174186666)))))))) : ((min((min((((8707 ? var_5 : (arr_8 [1] [i_1] [i_1] [i_2] [i_6])))), -4985629563861464823)), (((((((min(var_0, 0))) + 2147483647)) >> (((((((arr_15 [i_0] [i_1] [16] [i_0] [i_6] [i_6] [i_6]) ? (arr_12 [i_2] [i_6] [i_6] [i_6] [i_2]) : var_6)) - 4174186666)) + 3728178147))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
