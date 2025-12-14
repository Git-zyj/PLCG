/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~0) ? var_3 : ((var_6 << (var_4 - 59058)))));
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((((((!(-32767 - 1))) ? (((min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_7 [i_0] [i_3]))))) : (min(var_8, (arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] [10])))))) || -32755)))));
                                arr_14 [i_0] [i_4] [i_0] = -14854;
                                var_22 ^= ((((!(arr_9 [i_0] [i_0] [i_0]))) ? (((~(max(var_3, (arr_1 [i_0])))))) : (max(((((arr_5 [i_0]) ? (arr_10 [i_1]) : (arr_6 [i_0] [i_1])))), ((-(arr_2 [i_3] [i_3] [i_1])))))));
                            }
                        }
                    }
                    var_23 = var_9;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_21 [i_5] = (!(((-(arr_8 [i_5])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((-(arr_1 [1])))));

                            for (int i_9 = 0; i_9 < 20;i_9 += 1)
                            {
                                arr_29 [16] [16] [i_7] [16] [i_5] = (~2840866852);
                                var_25 ^= (arr_22 [i_5] [i_6] [9]);
                            }
                            for (int i_10 = 2; i_10 < 18;i_10 += 1)
                            {
                                var_26 = (max(((8230 ? (-32767 - 1) : (-32767 - 1))), (max((arr_28 [i_10 - 2] [15] [i_10 - 1] [i_10 + 1] [7]), (arr_28 [i_10] [8] [i_10 - 1] [i_10 - 2] [i_6])))));
                                var_27 = ((~(((min(1454100443, 2840866856)) / ((((arr_15 [i_5]) ? (arr_16 [12]) : var_13)))))));
                                var_28 |= (min((max(-464577446, 24488)), 3830389849));
                                var_29 = 1;
                            }
                            var_30 = (min(((min(32767, 32765))), ((var_3 ? (arr_17 [i_7]) : (arr_19 [i_5])))));
                        }
                    }
                }
                arr_32 [7] [i_6] [i_5] = max(8497551907766328459, 4294967272);
            }
        }
    }
    #pragma endscop
}
