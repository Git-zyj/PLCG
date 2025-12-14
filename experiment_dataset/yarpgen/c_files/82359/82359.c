/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+(max((!var_13), (9007199254740992 + var_9)))));
    var_16 = var_13;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 *= (min((max((arr_8 [i_0 + 1]), (arr_8 [i_0 - 1]))), (var_2 + var_0)));
                    var_18 = (min(((((min(var_0, var_14)) < ((var_5 ? var_6 : (arr_8 [i_2])))))), ((((min((arr_4 [i_0 + 1] [i_2]), 2337669905))) ? 4288427054 : (arr_4 [i_0] [i_1])))));
                }
            }
        }
        var_19 = ((((~(arr_8 [i_0 + 1])))) ? (((min(6691371810735236984, var_6)) + ((var_4 ? (arr_8 [i_0]) : (arr_4 [i_0 - 1] [i_0]))))) : (((arr_5 [i_0 - 1] [i_0] [i_0]) ? (arr_5 [i_0 - 1] [i_0] [i_0]) : var_8)));
        arr_10 [i_0] [i_0] = (((arr_8 [i_0]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [i_0] [i_3 + 3] [6] = (var_14 <= var_2);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_4] [i_5] [i_4] = (((arr_4 [i_0] [i_0]) <= (arr_9 [6] [9] [i_3] [i_0])));
                                var_20 -= (min((((var_2 || (arr_2 [9])))), ((((!(arr_4 [i_4] [i_3])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_21 = (((((3378782591 ? 18446744073709551599 : 2147483648)) ^ (arr_2 [i_0 + 1]))));
                                arr_29 [i_3] [i_3] [i_4] [i_0 - 1] [i_8] [i_3] [i_3] = (arr_9 [i_0] [i_0] [i_0] [i_0 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
