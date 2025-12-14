/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_7;
    var_17 = (((min(-9223372036854775804, 18446744073709551614))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 ^= ((((((~9223372036854775799) + 9223372036854775807)) << (((((-9223372036854775800 - -9223372036854775789) + 73)) - 15)))));

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = max((min(var_6, (arr_8 [i_0] [1] [i_2]))), (((var_15 ? ((-9223372036854775804 ? 247 : 0)) : ((~(arr_12 [i_0] [i_0] [i_3] [i_4])))))));
                                var_20 = (((-1528842621 ? 0 : 14)));
                                var_21 = ((~((min(448, 65521)))));
                            }
                        }
                    }
                    var_22 |= var_11;
                    arr_15 [i_2] [i_0] [i_0] [i_0] = (((((1 ? ((-374648073 ? 18446744073709551615 : 1)) : (-77 ^ var_5)))) && var_9));
                }
                var_23 = (~var_1);

                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_24 = max((((arr_16 [i_0] [i_0 - 3] [i_5] [i_7 - 4]) + (arr_18 [i_0] [i_0 - 3] [i_5] [i_7 - 4]))), var_12);
                                var_25 |= ((-(arr_10 [20] [14] [14] [12])));
                                var_26 += ((-(max((arr_4 [18]), var_15))));
                                var_27 = ((min((((arr_0 [i_7]) ? (arr_17 [1] [i_1] [9] [i_0]) : var_15)), (arr_14 [14] [i_1] [i_7 - 4] [i_5] [1]))));
                            }
                        }
                    }
                    var_28 ^= (min((arr_18 [i_0] [i_0 - 1] [i_0] [i_0 - 1]), (arr_18 [i_0] [i_0 + 1] [i_0] [i_0 - 2])));
                    var_29 *= (max(((~(arr_6 [i_0 + 1] [8]))), (arr_6 [i_0] [12])));
                    var_30 -= 24;
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_31 = 21;
                    var_32 = (max(var_32, ((~((var_9 - ((var_2 ? 18014398475927552 : (arr_13 [i_0] [1] [i_0] [i_0 - 3] [i_0] [i_0 - 2])))))))));
                    var_33 = (min(var_33, -1));
                }
            }
        }
    }
    #pragma endscop
}
