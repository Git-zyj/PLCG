/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [6] [i_2] [i_3] [i_3] [i_4] |= (((((max((arr_2 [i_0] [i_0]), (arr_5 [i_0] [10] [10]))))) && (((((-25775 ? -3183831946918971907 : 32759))) || 811456266347700002))));
                                var_17 = -1687040517223334656;
                            }
                        }
                    }
                    var_18 -= ((((max((max(-18655, 1)), ((((arr_8 [i_0] [i_0] [i_0]) != var_5)))))) << (((max(27, (arr_11 [i_0] [8] [i_0] [i_0])))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_21 [i_5] = (max((max(9223372036854775807, 1)), (max((((-(arr_18 [i_5])))), 1))));

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_19 = ((max((arr_23 [i_5] [i_5]), (arr_19 [i_6] [i_5]))) > (((~(arr_19 [i_5] [i_5])))));
            var_20 = (((((((!(arr_18 [i_5]))))) - -8238603134565668906)));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_21 = (!(((25756 >> (arr_20 [i_5])))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_22 = ((-(max(12797, 4611686018427387903))));
                            arr_38 [i_5] [i_5] [i_7] [i_5] [i_5] [i_5] = (6656786349054530905 | ((((arr_20 [i_5]) & (arr_20 [i_5])))));
                            var_23 += (max(-52740426351393823, ((((arr_18 [i_5]) != (arr_18 [i_5]))))));
                            var_24 += (max(((((arr_25 [1]) && (arr_18 [i_9])))), (((!3680341214087674328) + -32739))));
                        }
                    }
                }
            }
            var_25 = (min(var_25, 1));
            var_26 -= var_1;
            var_27 -= (max((1 / -7731855997616103585), -8238603134565668905));
        }
    }
    var_28 = ((var_7 >> (((max(1, var_6)) - 18365))));
    #pragma endscop
}
