/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] = ((1 ? (((!(arr_1 [i_1] [15])))) : ((min((arr_10 [i_0]), (arr_10 [i_1]))))));
                    var_11 &= ((~(arr_8 [i_0] [i_1] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 -= -246629084;
                                arr_16 [i_0] [i_0] [i_4] [7] [i_4] [i_2] [i_2] = min((((arr_13 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1]) ? 246629105 : (-9223372036854775807 - 1))), 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_2 ? -1250195745 : ((1 ? (max(246629083, 4726051629063318378)) : var_3))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_14 = (((((~(~-2)))) ? (max((arr_25 [i_8] [i_8] [i_8] [6]), (arr_27 [i_6] [i_7] [i_6] [i_5] [i_5]))) : 216));
                            arr_28 [0] [i_7] [i_7] [i_7] [i_7] [i_5 + 1] = (((((~(arr_12 [i_5 - 2] [i_5] [i_5 - 1])))) ? ((((min((arr_27 [i_6] [5] [9] [i_6] [i_6]), -246629074))) ? 8135935298183671081 : (arr_25 [i_6] [i_7] [i_7] [i_6]))) : ((min((arr_19 [i_5 + 1] [i_7]), (arr_19 [i_5 - 2] [i_5 - 2]))))));
                        }
                    }
                }
                var_15 -= (!4726051629063318378);
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_16 *= (((arr_21 [16] [i_9] [i_11]) ? (((~(arr_8 [i_5] [i_5] [i_5 - 2] [i_5 - 2])))) : ((((max((arr_10 [i_5 - 1]), 31625))) ? (arr_31 [i_5] [i_6] [i_9] [i_10]) : (min(4999843063437137135, (arr_30 [11] [i_9] [i_9] [i_11])))))));
                                var_17 = (((((246629102 ? -2931197284150280545 : (((2893148998 ? (arr_26 [i_5] [i_5] [i_6] [i_9] [i_9] [i_11]) : 3097)))))) ? (((arr_4 [i_5 - 1]) ? (min(-6975845732252251255, (arr_7 [i_5 - 1] [i_5 - 1] [5]))) : (((~(arr_10 [i_5])))))) : (((((((arr_8 [i_5 - 1] [i_6] [2] [19]) ? 10071923565800873613 : (arr_36 [1] [1] [i_9] [1] [i_11])))) ? ((-(arr_35 [i_11] [i_10] [i_5] [i_5]))) : (min(-246629106, -729813063)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
