/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((-0 <= (8 + -963832392289441199))))));
                            var_13 = (((((((min(7, 30720))) | (max(1023, 1030084225213077139))))) ? var_5 : ((62902296 ? 17591649173504 : (32768 >= -4931508381805931014)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_4] = ((-var_6 <= (arr_14 [i_0] [i_5] [i_0] [i_1] [i_0])));
                                var_14 = var_9;
                            }
                        }
                    }
                }
                var_15 = (max((var_10 && 32040), var_3));
            }
        }
    }
    var_16 &= ((((((1023 / 6457112319436152937) >= -6457112319436152922))) <= var_1));
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_17 += var_11;
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_18 ^= (((!(((var_3 | (arr_19 [i_8])))))) && ((min(var_1, -93))));
                                arr_32 [i_7] [i_7 - 3] [i_7] [i_7] [i_7] [i_7 + 1] = ((-13517271275389052750 | (~var_5)));
                                var_19 = var_8;
                                arr_33 [i_7] [i_7] [i_7] [12] [i_9] [i_10] [i_11] = ((-(max(-84, 1023))));
                            }
                        }
                    }
                }
                arr_34 [i_7] [i_8] = ((((var_3 << (((min(6416385538065808869, 160)) - 155)))) ^ var_2));
                var_20 = ((((var_4 ? var_3 : (arr_18 [i_7 + 1] [i_7 - 3]))) < (18792 | -30558)));
                arr_35 [i_7 - 3] [i_7 - 3] = var_0;
            }
        }
    }
    #pragma endscop
}
