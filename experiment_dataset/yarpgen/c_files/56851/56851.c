/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_14 ^= (arr_1 [i_0]);
        arr_2 [i_0] = ((((min(1, (arr_1 [i_0 - 4])))) || -20988));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_15 = var_10;
        var_16 = ((166 ? 137438691328 : 1));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_3] [i_2] = ((1 ? ((((min(111, 137438691328))) ? 5378 : var_10)) : (((min(var_5, (arr_5 [i_2] [i_4])))))));
                    var_17 = (max(3217886622501118337, -22267));
                    arr_13 [i_2] = (((((~((min((arr_4 [i_4]), (arr_9 [i_2] [i_3] [i_3] [i_4]))))))) ? (arr_10 [i_2] [1] [i_4]) : (((max((arr_9 [i_2] [i_3] [i_3 + 1] [i_3 - 1]), (arr_9 [i_2] [i_2] [i_3 - 1] [i_3 - 1])))))));
                    arr_14 [1] |= (max(((-(arr_9 [6] [i_3 + 1] [i_4] [12]))), (arr_4 [i_4])));
                    var_18 = ((((min(-15008, 2006977066))) < (arr_10 [i_2] [i_3] [5])));
                }
            }
        }
        var_19 = (min((((arr_9 [i_2] [i_2 + 1] [i_2] [i_2]) ? (arr_9 [i_2] [i_2 + 1] [i_2] [i_2]) : (arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))), (((arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2]) << (-31556 + 31570)))));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    {
                        var_20 -= ((((var_4 ? 14670 : ((1 ? 1 : -3217886622501118347)))) < -2147483638));
                        var_21 ^= (arr_18 [i_5]);
                        var_22 &= ((((((arr_4 [i_6 - 1]) ? (arr_4 [i_6 - 1]) : (arr_4 [i_6 - 2])))) ? ((((((arr_18 [i_5]) / var_9))) ? (((var_6 ? (arr_17 [i_2] [i_5] [i_5] [4]) : (arr_3 [i_7 + 3])))) : var_13)) : 1008184835));
                    }
                }
            }
            arr_22 [i_2] [i_2] [i_5] = ((-1 == (arr_17 [i_2] [i_2 + 1] [i_2] [i_5])));
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_23 *= (((((-var_5 ? (arr_3 [i_2 + 1]) : 112))) ? -1 : (14670 > 137438691328)));
                    arr_29 [i_2] [i_8] [i_2] = var_11;
                }
            }
        }
    }
    var_24 ^= var_11;
    var_25 ^= 1182251844;
    #pragma endscop
}
