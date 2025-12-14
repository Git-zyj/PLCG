/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_6 ? ((8 ? 16027627435470125941 : (var_7 + 119))) : (((2419116638239425679 ? var_10 : var_8)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((209 * (arr_1 [i_0] [i_0]))) >> (((((arr_1 [i_0] [i_0]) & var_12)) - 1445991947))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = (((((((min(var_8, var_2)))) < (((arr_1 [i_0] [i_4]) & var_6)))) ? var_0 : (((((var_16 << (16027627435470125957 - 16027627435470125944))) / (arr_0 [i_1]))))));
                                arr_18 [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [i_0] [i_0] = (arr_16 [i_0] [12] [1] [2] [i_2]);
                    var_19 = (2419116638239425690 | 17578572549385599964);
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_22 [i_0] [i_5] = (((arr_8 [i_0] [i_0]) != 54316));
            var_20 = ((((((arr_1 [i_5] [i_0]) - (arr_1 [i_0] [i_5])))) ? (((arr_1 [i_0] [i_5]) ? (arr_1 [i_0] [i_5]) : (arr_1 [14] [i_5]))) : ((var_17 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_5])))));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_21 = 11220;
            arr_25 [i_0] = arr_5 [i_0] [11] [i_0];
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                arr_33 [16] = (((((((min(var_17, var_17))) & ((var_12 ? var_8 : 2419116638239425680))))) ? (((arr_28 [i_8]) ? (((min(1, 47)))) : (var_3 * 6584072956461092116))) : ((((11220 / var_10) ? (-2147483647 - 1) : 58544)))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_39 [i_8] [i_8] [i_8] = ((((max(-115, (arr_34 [i_8] [i_8] [i_10])))) ? ((var_2 - (arr_34 [i_10] [i_9] [i_8]))) : ((2189202835181811605 ? 127 : 11248))));
                            var_22 = var_4;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_47 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [7] = ((((!(arr_46 [i_7] [i_8] [i_11] [i_12]))) && (((arr_46 [i_8] [i_8] [i_12] [i_13]) || (arr_46 [i_7] [i_12] [i_11] [i_12])))));
                                arr_48 [i_7] [i_7] [i_8] [i_11] [i_7] [i_12] [i_13] = var_12;
                            }
                        }
                    }
                }
                var_23 = (!(((((var_12 ? 18446744073709551615 : 16384)) * (arr_44 [i_7] [i_7] [i_8] [i_7] [i_8] [i_8])))));
            }
        }
    }
    #pragma endscop
}
