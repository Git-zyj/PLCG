/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_12;
    var_21 = (max(var_15, (!var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (((((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((arr_11 [1] [3] [i_3]) != 0)))) : 67108864));
                                var_23 = (max(var_23, (min((arr_7 [i_3] [6] [i_3] [i_3]), (arr_8 [i_0] [i_1] [i_1] [i_3] [i_4])))));
                                var_24 = (((arr_2 [8]) ? ((((!(~67108864))))) : (min(11, (max(-1543109703, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_25 = ((((~(arr_11 [i_0] [i_0] [i_2]))) / ((~(arr_11 [i_1] [i_3] [0])))));
                                arr_14 [3] [10] [i_2] [i_3] [i_0] = ((((((((var_19 << (3452796825907410370 - 3452796825907410355)))) ? ((1543109699 ? (arr_13 [i_0] [i_1] [i_0] [i_3] [i_4]) : (arr_12 [5] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4]))) : (arr_3 [i_1] [i_0])))) < ((12319421406211532264 ? 194 : (arr_4 [1] [8])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                            {
                                var_26 = (max(var_26, (arr_19 [i_1] [i_5] [i_5] [i_5] [i_1] [i_1])));
                                arr_27 [i_0] [i_5] [i_6] [i_6] [i_0] [6] = 0;
                            }
                            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                            {
                                arr_30 [i_8] [i_6] [i_0] [i_1] [i_0] = ((~(arr_26 [i_1] [i_1])));
                                arr_31 [i_0] = (((((arr_9 [i_5] [i_6] [i_5] [i_5] [i_1] [1]) && (arr_9 [i_0] [i_0] [1] [i_0] [i_0] [i_0]))) || ((((arr_9 [i_0] [i_1] [i_5] [i_5] [i_6] [i_8]) ? (arr_9 [7] [i_5] [i_1] [i_6] [i_5] [i_8]) : (arr_9 [i_1] [i_1] [i_5] [3] [i_8] [i_6]))))));
                                arr_32 [i_1] [i_5] [i_5] [10] [i_5] [i_5] |= var_10;
                                arr_33 [i_5] [9] [i_0] [9] [i_0] = (((((~((min((arr_21 [i_0] [i_1] [i_5] [i_0]), (arr_24 [i_0] [1] [i_5] [11] [i_6] [i_8]))))))) == (arr_18 [i_0])));
                            }
                            var_27 = (arr_15 [i_0] [i_1] [8] [i_0]);
                        }
                    }
                }
                var_28 -= (65515 || 9223372036854775808);
            }
        }
    }
    #pragma endscop
}
