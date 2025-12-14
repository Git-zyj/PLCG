/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 *= (((((var_11 ? (arr_5 [i_3] [i_1] [i_0]) : (arr_6 [1] [1] [i_0])))) ? (((!(max(var_4, var_6))))) : var_11));
                        var_17 = ((((1 || (max(var_11, 1)))) ? (max((arr_3 [i_0]), (((arr_5 [i_1] [i_2] [i_3]) >> var_15)))) : ((var_1 + (1 >= 1)))));
                        var_18 = max(var_2, var_6);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = ((((((arr_7 [i_0] [i_4] [i_0] [i_4]) ? (arr_7 [i_5] [1] [i_5] [i_4]) : (arr_7 [i_0] [i_0] [i_4] [i_4])))) ? ((max((arr_7 [i_0] [i_0] [i_0] [i_4]), (arr_7 [i_0] [i_4] [i_5] [i_4])))) : 1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_18 [i_4] = var_2;
                                var_20 = ((1 ^ (((!(max(1, 1)))))));
                                var_21 &= var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_22 *= (arr_8 [i_0] [i_4] [i_5]);
                                var_23 *= ((((((var_7 / 1) ? ((max(1, (arr_8 [i_0] [i_0] [i_0])))) : ((((arr_6 [i_0] [0] [i_0]) != 1)))))) ? (((!(0 << var_7)))) : ((((((arr_4 [i_5]) ? 1 : 1)) != (0 <= 1))))));
                                var_24 = (min(var_24, (((1 ? 0 : 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                arr_30 [i_11] [i_11] = (((0 ^ 1) ? ((1 / (var_6 || var_12))) : ((((max((arr_25 [i_10]), var_6))) - ((max(1, 0)))))));
                var_25 = (min((arr_29 [i_10] [i_10] [i_11]), (~var_12)));
            }
        }
    }
    var_26 += (!((min(var_3, ((1 ? 1 : 1))))));
    #pragma endscop
}
