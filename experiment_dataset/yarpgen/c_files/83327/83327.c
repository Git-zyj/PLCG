/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 *= (max((((((-861581535 ? 7794742273831566183 : 7794742273831566183)) - (arr_1 [i_0] [i_1])))), (((var_2 ^ var_15) ^ var_10))));
                    var_21 = (min(var_21, ((min((((arr_3 [i_0]) ? (arr_3 [i_2]) : 861581514)), (((-861581535 ? 1631359942 : 11))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = ((((((max(9398062953911661115, (arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))) | ((max(var_7, 861581503)))))) && ((!((max(var_1, (arr_6 [i_0] [i_1] [i_1] [i_3 + 2] [i_4]))))))));
                                arr_10 [i_4] [i_1] [i_2] [i_1] [i_0] = ((max((max((arr_2 [i_1] [i_2] [i_3]), (arr_2 [i_0] [i_1] [i_2]))), (arr_0 [i_0]))));
                            }
                        }
                    }
                    var_23 -= (((9048681119797890492 - (arr_3 [i_0]))));
                }
            }
        }
    }
    var_24 = var_9;
    var_25 &= max(8, var_0);
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_26 *= (((min(422212465065984, (arr_15 [i_5] [i_5] [i_8 - 3]))) - ((((!(arr_22 [i_8 + 1] [i_6] [i_6] [i_8])))))));
                                var_27 = (max((~18446321861244485632), (max(var_6, ((var_13 * (arr_24 [i_5] [i_6] [i_7] [i_8] [i_9])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_28 = (max(((422212465065983 ? 7 : -88)), var_5));
                                var_29 = ((max((arr_19 [i_5] [i_6] [i_10 + 1]), var_3)));
                                var_30 -= ((!((min((max(139623252, 15090932918214873758)), ((((arr_17 [i_6] [i_10] [i_11]) & var_10))))))));
                            }
                        }
                    }
                    arr_31 [i_7] [i_7] [i_6] [i_5] = ((((min((arr_22 [i_5] [i_5] [i_6] [i_7]), (arr_15 [i_5] [i_6] [i_7])))) ? 1 : (max(var_12, (((var_15 ? 122 : (arr_25 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6] [i_7]))))))));
                    arr_32 [i_7] [i_6] [i_5] [i_5] = var_8;
                }
            }
        }
    }
    var_31 = var_6;
    #pragma endscop
}
