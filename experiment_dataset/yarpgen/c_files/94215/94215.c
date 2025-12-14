/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 && (!174)));
    var_11 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((((((arr_4 [i_0]) << (11111 - 11055)))) ? ((((11352381653014332430 - 7576272655561872805) > var_2))) : 235)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [0] [i_4] [i_4] [i_1] [i_0] = max(((232 ? 60716 : 16160072081875320547)), (((24 ? 235 : 1850408919))));
                                var_13 |= ((((((7955516224550487212 ? 235 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]))) * var_3))));
                                arr_13 [i_0] [i_4] [i_1] = ((((var_4 <= (arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_4]))) ? ((((!(arr_10 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_4]))))) : ((var_1 + (arr_10 [i_1] [23] [i_2] [i_2 - 1] [i_4])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_5] [17] [17] [17] [i_0] = var_3;
                                arr_22 [i_0] [i_6] [i_2 - 1] = ((((((((arr_18 [i_2]) - var_4)) + 9223372036854775807)) << (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 5620739939852099530)))));
                                var_14 = ((21 | ((((arr_16 [i_6 - 1] [i_6] [i_6] [i_6] [i_6]) != var_3)))));
                                var_15 = (((((((var_8 << (((arr_17 [i_0] [i_1] [i_2 + 1] [i_6]) - 764393973))))) ? (((-(arr_10 [20] [8] [i_2] [20] [i_0])))) : (max((arr_18 [i_2]), var_6)))) | (max((arr_15 [i_6 - 2] [i_6 - 1] [i_6 - 1] [15] [i_6]), (arr_15 [i_6 - 2] [i_6] [i_6] [i_6] [i_6])))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-var_3 ? (((arr_15 [i_1] [i_2] [i_6 + 2] [i_5] [i_2 + 1]) + 0)) : 1));
                            }
                        }
                    }
                    var_16 *= ((((arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) * (arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                    arr_24 [i_2] [i_1] [i_0] = (((((arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [i_0]) << (var_3 - 3951285134532315444))) % (var_3 << 24)));
                }
            }
        }
    }
    #pragma endscop
}
