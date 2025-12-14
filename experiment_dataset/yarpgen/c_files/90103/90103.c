/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= 55;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 - 2] [i_0] = (((((((-(arr_2 [i_0])))) ? (arr_3 [i_0] [i_0 + 2]) : (((arr_3 [i_0 + 3] [i_1]) ^ (arr_4 [i_0] [i_0]))))) >> (((255 & 127) - 108))));
                arr_7 [10] &= (min((62 * 1), (arr_4 [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 &= (230 <= 1);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((((((var_0 + 2147483647) << (((((arr_0 [i_3 - 1]) + 33)) - 4))))) || (((arr_2 [i_0 + 1]) <= (arr_2 [i_0 + 2])))));
                                var_20 = (87 <= 60);
                                var_21 ^= ((((arr_2 [i_3 + 1]) ? (arr_2 [i_3 + 3]) : (arr_2 [i_3 - 2]))));
                                var_22 = arr_13 [i_0 - 1] [i_0 - 1] [22] [i_3 - 2] [i_3 + 1] [i_3 + 1];
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0 + 3] [i_0] = ((((((arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0] [i_0]) ? var_8 : (arr_1 [1]))))) ? (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (var_6 / var_6) : (arr_0 [i_0]))) : (((~175) ? (arr_1 [1]) : (arr_12 [i_0] [i_1] [i_1] [i_1] [i_0 + 3]))));
                    arr_15 [i_0] [i_1] [i_2] = 25;
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_23 = ((-(!179)));
                    var_24 = ((~(max((arr_8 [i_1]), (((var_2 ? (arr_11 [i_0] [i_0] [i_1] [i_1] [i_0]) : (arr_5 [i_1] [i_5]))))))));
                    var_25 = (min(var_25, ((((!(((195 ? (arr_0 [i_0 - 1]) : (arr_13 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0]))))))))));
                }
            }
        }
    }
    var_26 = (max(255, (((!(((143 ? var_2 : var_10))))))));
    var_27 = ((-var_8 ? (((!0) ? (!var_0) : var_15)) : (((26 >= 7825286005665313873) >> (!var_12)))));
    var_28 = (((var_13 ^ (~var_6))));
    #pragma endscop
}
