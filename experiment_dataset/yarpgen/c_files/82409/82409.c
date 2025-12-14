/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max((((((var_13 & (arr_1 [i_1])))) ? var_1 : var_3)), (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0 - 2])))));
                var_15 = (max(var_15, (!10482)));
                var_16 ^= (((max(var_4, ((var_5 >> (((arr_4 [i_0 - 2] [i_1 - 2]) + 1165075647))))))) ? ((((var_12 == (min(var_10, var_9)))))) : (max((((!(arr_4 [i_1] [i_0])))), (27439 * 0))));
                arr_5 [i_1] [i_1] [i_1] = 12;
                var_17 = (min(var_17, (((((-(arr_1 [i_0 + 1]))) > ((((arr_1 [i_0 + 1]) == (arr_3 [i_0 - 1])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [14] [i_2] [i_2] [i_5] = (arr_14 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]);
                                var_18 = (max((((-(arr_6 [i_3 - 1] [i_3 + 2])))), (min((arr_9 [i_3 + 2] [i_3]), (arr_9 [i_3 + 4] [i_3])))));
                                var_19 ^= (((((-39 == 0) ? (arr_7 [i_2]) : (arr_16 [i_2] [i_2] [i_4] [i_5] [i_6]))) + 12));
                            }
                        }
                    }
                }
                var_20 = (!var_8);
            }
        }
    }
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((max(((54855 / ((max(10, 25))))), (8952878399102895947 > 1))))));
                            var_23 = ((((var_7 ? (((16783866004630678964 ? -2 : 6))) : ((65516 ? var_0 : (arr_7 [14]))))) / ((((21454 + 2429844154) / 32767)))));
                        }
                    }
                }
                var_24 = (min(var_24, ((((var_5 <= ((-(arr_2 [i_7]))))) ? (min((32767 && -13), (((arr_12 [i_8] [i_7] [i_7]) ? 18446744073709551597 : 54841)))) : (((var_13 + var_0) & var_5))))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((((+((10689 ? (arr_9 [i_12] [i_8]) : var_3))))) ? ((~(min(0, 3992629082272676838)))) : var_1)))));
                            arr_33 [i_7] [i_8] [i_8] [i_8] [8] [i_12 + 2] = var_13;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
