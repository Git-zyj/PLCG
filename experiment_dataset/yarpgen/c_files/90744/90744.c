/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((-29818 ? (max(1927998433626126681, (arr_4 [i_2 - 1] [i_2 + 3] [i_0]))) : ((((!(((-22 ? 29818 : -57)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] &= (((((((arr_9 [i_0] [i_0] [2] [i_0]) % 9395050095929196046)))) ? (max(((min(39311, (arr_12 [i_3] [i_0])))), (arr_5 [i_0] [i_2] [i_2]))) : 63));
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [8] [i_4] |= (arr_1 [i_2 - 2]);
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = (min(((-(max(75, 9223372036854775795)))), ((0 ? -23 : ((9395050095929196066 ? 174 : 2638159448828763572))))));
                                var_17 = (max(var_17, (((-(((!1) ? (~9223372036854775801) : (((1231664976 << (255 - 255)))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, (((min((2638159448828763571 != 18446744073709551598), (124 | 9051693977780355569))) / -9223372036854775792))));
    #pragma endscop
}
