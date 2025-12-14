/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? (min(((var_9 ? var_9 : var_0)), -7498)) : var_6));
    var_13 = 25754;
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (((!-7527) ? ((((max((arr_0 [i_0]), (arr_3 [i_0])))) ? var_9 : ((-2248089161280809856 ? (arr_3 [i_0]) : var_5)))) : ((min((((arr_0 [i_0]) ? 38834 : (arr_2 [7] [7]))), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 |= 64436;
                                arr_13 [i_1] = 3195592181337632596;
                                var_17 = 1581801968;
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [17] = ((((max(1, (((arr_10 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2] [23]) ? var_9 : var_1))))) ? (arr_3 [i_2]) : 16383));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_1] [i_1] [i_0] = ((((((!(arr_5 [i_2] [i_1]))))) || ((!((!(arr_10 [i_5] [i_0] [i_5] [i_2] [i_1] [i_1] [i_0])))))));
                                var_18 = ((((((arr_10 [i_0] [i_1] [i_1] [12] [1] [i_5] [i_1]) ? var_0 : -24933))) ? (arr_16 [i_2] [i_6] [i_2] [i_0] [i_6] [i_6]) : (arr_16 [i_0] [i_0] [i_2] [i_5] [i_2] [1])));
                            }
                        }
                    }
                    var_19 = (min(-7, (min((((arr_17 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_11 [i_2] [i_1] [i_0]))), 7532))));
                    var_20 -= (~var_4);
                }
            }
        }
    }
    var_21 = ((((min(((22843 ? 1330950111 : 40824)), ((1324691119 ? var_3 : (-127 - 1)))))) ? var_8 : var_2));
    #pragma endscop
}
