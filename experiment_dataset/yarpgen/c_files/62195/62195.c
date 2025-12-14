/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = arr_6 [i_1] [i_1] [3] [i_4];
                                arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_0] [i_0] = (((((~(-32767 - 1)))) ? (arr_12 [i_1] [i_1] [i_4]) : (-32767 - 1)));
                                arr_14 [i_0] [i_0] = 1720964489;
                                arr_15 [i_0] [i_3 - 1] [i_1] [i_0] = ((((min((((arr_12 [3] [i_1] [13]) | (arr_3 [i_0] [i_0] [i_0]))), (arr_10 [i_2] [i_2 - 2] [8] [8]))) + 9223372036854775807)) >> (((min(-8421245805023014446, 0)) + 8421245805023014446)));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((((((arr_0 [i_0] [i_2 + 2]) ? (arr_0 [i_0] [i_1 - 1]) : (arr_0 [i_0] [i_2 - 1])))) ? ((~(arr_0 [i_1 + 1] [i_0]))) : (~-26545))))));
                    var_22 = (min(((-(arr_3 [i_2 - 2] [i_1] [i_1 - 1]))), ((((arr_11 [i_2 - 3]) ? -1748544039 : -67206314)))));
                    var_23 ^= 0;
                }
            }
        }
    }
    var_24 = ((min((1748544039 & var_10), ((4294967282 ? var_18 : var_13)))));
    var_25 = ((((var_10 ? ((602399752 ? 4294967267 : 1748544038)) : ((4294967251 ? 3692567544 : -85)))) < -29));
    #pragma endscop
}
