/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (min((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_8)), (0 | var_0)));
        arr_4 [i_0] = (max(1, ((var_0 | (((var_13 == (arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [8] [1] = 32768;
                    arr_13 [i_1] [i_2] [i_3] [i_3] = arr_0 [10];

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_3] = ((1048575 ? var_4 : (-9223372036854775807 - 1)));
                        arr_17 [i_4] [i_3] [6] [i_1] = ((32768 ? 32768 : -54));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_5 + 1] [10] [i_2] [i_2] [i_1] = var_5;
                            arr_21 [i_1 + 1] [i_3] [i_5 + 2] = (1 && 17072542011811395445);
                        }
                        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_6] [i_6] [i_1] = ((-1 ? (((arr_23 [i_1 + 2] [i_2] [i_2] [i_3] [i_3] [i_4] [i_4]) % (arr_23 [i_1 + 3] [6] [0] [i_3] [i_3] [i_4] [i_6]))) : (min((arr_23 [i_1] [i_1] [i_1 + 1] [i_2] [i_3] [i_3] [i_6]), (arr_23 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))));
                            arr_27 [i_1] [i_1] [i_6] [0] [i_3] [i_4] [i_6] = ((!((min(((var_14 ? var_16 : var_0)), (((var_1 ? (arr_8 [i_1]) : (arr_5 [i_3] [i_6])))))))));
                        }
                    }
                    arr_28 [1] [i_2] [i_2] [i_3] = ((((!(((-1 ? 1 : -1))))) ? ((((min((arr_9 [0] [i_2] [i_2]), (arr_6 [i_1])))) ? (0 < 4294967295) : 17072542011811395422)) : (((min(4611686018427387888, (arr_6 [i_1])))))));
                }
            }
        }
        arr_29 [i_1] = (min((((((arr_7 [i_1] [i_1] [i_1]) ? 1 : -3356846479396310034)) >> 1)), 0));
        arr_30 [i_1] = (((27870 ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 + 2] [i_1 + 2]))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        arr_33 [i_7 - 1] &= -99;
        arr_34 [13] = (((arr_32 [i_7 - 2]) * ((27241 * (arr_2 [i_7 - 2] [i_7 - 2])))));
    }
    var_19 = var_3;
    var_20 |= var_8;
    var_21 = (-9087 != 1);
    var_22 = ((1 ? (((((var_0 ? var_14 : var_5))) ? (min(var_16, var_14)) : (max(var_5, var_17)))) : var_7));
    #pragma endscop
}
