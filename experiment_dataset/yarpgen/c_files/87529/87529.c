/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 *= 1;
                arr_6 [i_0] [i_0] [i_1] = (747606660 > 1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_2] [i_4] [i_3 + 4] [i_2] = ((-(51516 + 962946044)));
                        arr_20 [i_2] [i_2] [2] [8] = (((arr_3 [i_2]) | ((max(var_8, (arr_16 [i_2 - 1] [i_4] [i_4]))))));
                    }
                    var_15 = (min(var_15, ((max(var_2, (max(93, 962946044)))))));
                }
            }
        }
    }
    var_16 = ((-(min(((var_6 << (var_8 - 51011))), (-48 > 1156664596)))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {

                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        arr_32 [i_8] = ((var_12 + (arr_27 [i_6] [i_8] [i_6])));
                        arr_33 [i_6] [i_6] [i_6] [i_6] [i_8] [i_6] = ((var_13 > (arr_31 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9] [i_9])));
                        arr_34 [i_6] [i_8] [i_8 + 2] [i_6] [i_9 - 1] = ((arr_31 [i_6] [i_7] [i_9 - 3] [i_9] [i_8]) ? var_10 : var_0);
                    }
                    arr_35 [i_6] [7] [i_8] [i_8] = ((-(((((((var_1 == (arr_26 [i_6] [i_6] [i_8] [6]))))) <= (((arr_26 [4] [11] [i_7] [i_8]) + var_10)))))));
                    arr_36 [i_8] [1] [1] [i_8] = ((((((arr_23 [i_6] [i_6]) < (arr_31 [i_7] [i_7] [i_7] [i_8 - 1] [i_7]))))));
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_17 = (min(((var_0 ? var_1 : (((((arr_28 [i_12] [i_11] [i_10] [i_7]) + 9223372036854775807)) << (((arr_41 [i_6] [i_7] [i_10] [i_10] [i_12 - 2]) - 46)))))), 3332021251));
                                var_18 -= ((((!(~100))) ? (((!((((arr_39 [i_6] [i_6]) + (arr_39 [i_6] [i_7]))))))) : 40720));
                                arr_48 [i_6] [i_12] [i_6] [i_6] [i_6] [i_6] = ((!(3332021252 && -18273110)));
                                var_19 *= (((min((arr_40 [i_10 - 1] [i_12] [12] [i_11]), var_3)) ^ -1327181688));
                            }
                        }
                    }
                    arr_49 [i_6] [i_7] [i_10] = ((+(max((arr_30 [i_6] [i_10 - 1]), ((var_11 ? var_9 : (arr_23 [1] [1])))))));
                }
                arr_50 [i_7] [11] = (max(7, (arr_24 [i_6] [i_7])));
            }
        }
    }
    #pragma endscop
}
