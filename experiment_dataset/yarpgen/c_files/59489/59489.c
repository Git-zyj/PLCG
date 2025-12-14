/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (arr_3 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 = (arr_4 [i_0] [i_1]);
                                var_11 = (!(arr_1 [i_0] [i_1]));
                                var_12 = (var_0 || var_2);
                                var_13 = (arr_14 [i_0] [i_1] [i_3] [i_0]);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_14 += (arr_16 [i_0] [i_0] [i_0]);
                        var_15 += (((arr_0 [i_5 - 1] [i_5 - 1]) / var_3));
                    }
                    var_16 = 1;

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_0] [i_6] [i_7] [i_1] = 110;
                            arr_24 [i_7] [i_6] [i_2] [i_0] [i_0] = (var_0 >> (-5920623597588065835 - 4042772928));
                        }
                        arr_25 [i_0] [13] [i_0] = ((!(arr_4 [i_1] [i_0])));
                        var_17 = var_8;
                        arr_26 [i_0] [i_6] [i_2] [i_1] [i_1] [i_0] |= (((arr_20 [i_0] [i_1] [i_2] [i_0]) - ((((!(arr_12 [i_2] [i_2] [i_1] [i_2] [i_2])))))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_18 = (arr_0 [13] [i_1]);
                    var_19 += (-(arr_22 [i_0] [i_1] [i_8]));
                }
                arr_29 [i_0] = ((((((arr_15 [i_0]) ? (arr_15 [i_1]) : (arr_28 [i_0] [i_0] [i_1])))) || (arr_9 [i_0] [i_1])));
                var_20 = ((var_8 ? (min((max(var_8, var_9)), ((max(var_6, (arr_6 [i_0])))))) : (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_21 = -2999299650551954518;
                            var_22 &= var_7;
                            var_23 = (max(var_23, (min((((arr_33 [i_9 - 1] [i_9 + 1] [i_9 - 1] [2]) + (arr_33 [i_9 - 1] [i_9 + 1] [i_9] [1]))), (arr_33 [i_9 - 1] [i_9 + 1] [i_9] [6])))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_7;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            {
                var_25 ^= (arr_40 [i_12]);
                arr_44 [i_11] [i_11] [i_11] = (arr_2 [i_11] [i_12]);
                var_26 &= (max(((~(arr_4 [i_11] [i_12]))), (((-5920623597588065831 ? var_6 : -111)))));
            }
        }
    }
    var_27 = var_3;
    #pragma endscop
}
